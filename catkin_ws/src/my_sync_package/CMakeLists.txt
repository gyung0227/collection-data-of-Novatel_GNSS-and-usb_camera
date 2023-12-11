cmake_minimum_required(VERSION 3.0.2)
project(my_sync_package)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  cv_bridge
  image_transport
  message_filters
  roscpp
  sensor_msgs
)






catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES my_sync_package
#  CATKIN_DEPENDS cv_bridge image_transport message_filters roscpp sensor_msgs
#  DEPENDS system_lib
)

include_directories(
    ${catkin_INCLUDE_DIRS}
)

add_executable(sync_image_gps_node src/sync_image_gps_node.cpp)
target_link_libraries(sync_image_gps_node ${catkin_LIBRARIES})

install(TARGETS sync_image_gps_node
    RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
