
"use strict";

let Inscov = require('./Inscov.js');
let Trackstat = require('./Trackstat.js');
let Gpgsv = require('./Gpgsv.js');
let NovatelReceiverStatus = require('./NovatelReceiverStatus.js');
let RangeInformation = require('./RangeInformation.js');
let NovatelPsrdop2 = require('./NovatelPsrdop2.js');
let Satellite = require('./Satellite.js');
let NovatelPosition = require('./NovatelPosition.js');
let NovatelUtmPosition = require('./NovatelUtmPosition.js');
let Inspva = require('./Inspva.js');
let TrackstatChannel = require('./TrackstatChannel.js');
let NovatelPsrdop2System = require('./NovatelPsrdop2System.js');
let ClockSteering = require('./ClockSteering.js');
let Gpgsa = require('./Gpgsa.js');
let Inspvax = require('./Inspvax.js');
let NovatelSignalMask = require('./NovatelSignalMask.js');
let Range = require('./Range.js');
let Gphdt = require('./Gphdt.js');
let NovatelCorrectedImuData = require('./NovatelCorrectedImuData.js');
let NovatelXYZ = require('./NovatelXYZ.js');
let NovatelExtendedSolutionStatus = require('./NovatelExtendedSolutionStatus.js');
let Insstdev = require('./Insstdev.js');
let Gprmc = require('./Gprmc.js');
let NovatelDualAntennaHeading = require('./NovatelDualAntennaHeading.js');
let NovatelHeading2 = require('./NovatelHeading2.js');
let Time = require('./Time.js');
let NovatelMessageHeader = require('./NovatelMessageHeader.js');
let Gpgga = require('./Gpgga.js');
let NovatelVelocity = require('./NovatelVelocity.js');

module.exports = {
  Inscov: Inscov,
  Trackstat: Trackstat,
  Gpgsv: Gpgsv,
  NovatelReceiverStatus: NovatelReceiverStatus,
  RangeInformation: RangeInformation,
  NovatelPsrdop2: NovatelPsrdop2,
  Satellite: Satellite,
  NovatelPosition: NovatelPosition,
  NovatelUtmPosition: NovatelUtmPosition,
  Inspva: Inspva,
  TrackstatChannel: TrackstatChannel,
  NovatelPsrdop2System: NovatelPsrdop2System,
  ClockSteering: ClockSteering,
  Gpgsa: Gpgsa,
  Inspvax: Inspvax,
  NovatelSignalMask: NovatelSignalMask,
  Range: Range,
  Gphdt: Gphdt,
  NovatelCorrectedImuData: NovatelCorrectedImuData,
  NovatelXYZ: NovatelXYZ,
  NovatelExtendedSolutionStatus: NovatelExtendedSolutionStatus,
  Insstdev: Insstdev,
  Gprmc: Gprmc,
  NovatelDualAntennaHeading: NovatelDualAntennaHeading,
  NovatelHeading2: NovatelHeading2,
  Time: Time,
  NovatelMessageHeader: NovatelMessageHeader,
  Gpgga: Gpgga,
  NovatelVelocity: NovatelVelocity,
};
