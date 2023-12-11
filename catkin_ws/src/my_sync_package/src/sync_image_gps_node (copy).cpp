#include <ros/ros.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/NavSatFix.h>
#include <message_filters/subscriber.h>
#include <message_filters/time_synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>
#include <iomanip>
#include <fstream>

using namespace sensor_msgs;
using namespace message_filters;

uint64_t image_count = 0; // 이미지 파일 카운트
uint64_t gps_count = 0;  // GPS 파일 카운트

// 함수를 통해 숫자를 지정된 자릿수로 패딩하는 함수
std::string padNumber(uint64_t number, int width)
{
    std::ostringstream ss;
    ss << std::setw(width) << std::setfill('0') << number;
    return ss.str();
}

void callback(const ImageConstPtr& image_msg, const NavSatFixConstPtr& gps_msg)
{
    ROS_INFO("Synchronized Data: Image Timestamp %f, GPS Timestamp %f", image_msg->header.stamp.toSec(), gps_msg->header.stamp.toSec());

    // 이미지를 OpenCV 이미지로 변환
    cv_bridge::CvImagePtr cv_ptr;
    try {
        cv_ptr = cv_bridge::toCvCopy(image_msg, sensor_msgs::image_encodings::BGR8);
    } catch (cv_bridge::Exception& e) {
        ROS_ERROR("cv_bridge exception: %s", e.what());
        return;
    }

    // 이미지를 파일로 저장
    std::string image_save_path = "/media/gu/T7 Shield2/data0906/01/camera/image_data_" + padNumber(image_count, 10) + ".jpg";
    cv::imwrite(image_save_path, cv_ptr->image);
    ROS_INFO("Image saved to %s", image_save_path.c_str());
    image_count++;

    // GPS 데이터를 텍스트 파일로 저장
    std::string gps_save_path = "/media/gu/T7 Shield2/data0906/01/gps/gps_data_" + padNumber(gps_count, 10) + ".txt";
    std::ofstream gps_file(gps_save_path.c_str());
    if (gps_file.is_open()) {
        // 소수점 자리를 더 길게 지정하여 저장
        gps_file << std::fixed << std::setprecision(10); // 예시로 10자리로 설정

        // NavSatFix 메시지의 전체 내용을 저장
        gps_file << "Header:" << std::endl;
        gps_file << "  seq: " << gps_msg->header.seq << std::endl;
        gps_file << "  stamp:" << std::endl;
        gps_file << "    secs: " << gps_msg->header.stamp.sec << std::endl;
        gps_file << "    nsecs: " << gps_msg->header.stamp.nsec << std::endl;
        gps_file << "  frame_id: " << gps_msg->header.frame_id << std::endl;
        gps_file << "Status:" << std::endl;
        gps_file << "  status: " << gps_msg->status.status << std::endl;
        gps_file << "  service: " << gps_msg->status.service << std::endl;
        gps_file << "Latitude: " << gps_msg->latitude << std::endl;
        gps_file << "Longitude: " << gps_msg->longitude << std::endl;
        gps_file << "Altitude: " << gps_msg->altitude << std::endl;
        gps_file << "Position Covariance:" << std::endl;
        for (size_t i = 0; i < gps_msg->position_covariance.size(); i++) {
            gps_file << "  - " << gps_msg->position_covariance[i] << std::endl;
        }
        gps_file << "Position Covariance Type: " << gps_msg->position_covariance_type << std::endl;

        gps_file.close();
        ROS_INFO("GPS data saved to %s", gps_save_path.c_str());
        gps_count++;

        // 최대값에 도달할 때 출력
        if (gps_count == 9999999999ULL) {
            ROS_INFO("Count reached 9999999999");
        }
    } else {
        ROS_ERROR("Unable to open GPS file for writing.");
    }
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "sync_image_gps_node");
    ros::NodeHandle nh;

    // 이미지 데이터와 GPS 데이터를 구독하는 필터 객체 생성
    Subscriber<Image> image_sub(nh, "camera_image", 10);
    Subscriber<NavSatFix> gps_sub(nh, "fix", 10);

    // 동기화 정책을 설정하고 콜백 함수를 등록
    typedef sync_policies::ApproximateTime<Image, NavSatFix> MySyncPolicy;
    Synchronizer<MySyncPolicy> sync(MySyncPolicy(10), image_sub, gps_sub);
    sync.registerCallback(boost::bind(&callback, _1, _2));

    ros::spin();

    return 0;
}
