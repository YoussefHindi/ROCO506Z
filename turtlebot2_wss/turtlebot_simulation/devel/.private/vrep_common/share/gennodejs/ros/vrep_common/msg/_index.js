
"use strict";

let VisionSensorData = require('./VisionSensorData.js');
let JointSetStateData = require('./JointSetStateData.js');
let VisionSensorDepthBuff = require('./VisionSensorDepthBuff.js');
let ScriptFunctionCallData = require('./ScriptFunctionCallData.js');
let VrepInfo = require('./VrepInfo.js');
let ObjectGroupData = require('./ObjectGroupData.js');
let ForceSensorData = require('./ForceSensorData.js');
let ProximitySensorData = require('./ProximitySensorData.js');

module.exports = {
  VisionSensorData: VisionSensorData,
  JointSetStateData: JointSetStateData,
  VisionSensorDepthBuff: VisionSensorDepthBuff,
  ScriptFunctionCallData: ScriptFunctionCallData,
  VrepInfo: VrepInfo,
  ObjectGroupData: ObjectGroupData,
  ForceSensorData: ForceSensorData,
  ProximitySensorData: ProximitySensorData,
};
