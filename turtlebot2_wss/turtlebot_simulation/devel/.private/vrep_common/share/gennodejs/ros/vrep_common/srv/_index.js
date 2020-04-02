
"use strict";

let simRosGetUIHandle = require('./simRosGetUIHandle.js')
let simRosAuxiliaryConsoleShow = require('./simRosAuxiliaryConsoleShow.js')
let simRosCloseScene = require('./simRosCloseScene.js')
let simRosSetObjectFloatParameter = require('./simRosSetObjectFloatParameter.js')
let simRosGetFloatingParameter = require('./simRosGetFloatingParameter.js')
let simRosGetUIButtonProperty = require('./simRosGetUIButtonProperty.js')
let simRosGetCollectionHandle = require('./simRosGetCollectionHandle.js')
let simRosSetFloatSignal = require('./simRosSetFloatSignal.js')
let simRosGetAndClearStringSignal = require('./simRosGetAndClearStringSignal.js')
let simRosEraseFile = require('./simRosEraseFile.js')
let simRosDisableSubscriber = require('./simRosDisableSubscriber.js')
let simRosClearStringSignal = require('./simRosClearStringSignal.js')
let simRosSetObjectPose = require('./simRosSetObjectPose.js')
let simRosGetFloatSignal = require('./simRosGetFloatSignal.js')
let simRosGetStringSignal = require('./simRosGetStringSignal.js')
let simRosSetJointForce = require('./simRosSetJointForce.js')
let simRosSetObjectIntParameter = require('./simRosSetObjectIntParameter.js')
let simRosSetArrayParameter = require('./simRosSetArrayParameter.js')
let simRosGetObjectFloatParameter = require('./simRosGetObjectFloatParameter.js')
let simRosRemoveObject = require('./simRosRemoveObject.js')
let simRosSetJointPosition = require('./simRosSetJointPosition.js')
let simRosSetObjectQuaternion = require('./simRosSetObjectQuaternion.js')
let simRosGetUISlider = require('./simRosGetUISlider.js')
let simRosEnableSubscriber = require('./simRosEnableSubscriber.js')
let simRosSetSphericalJointMatrix = require('./simRosSetSphericalJointMatrix.js')
let simRosSetModelProperty = require('./simRosSetModelProperty.js')
let simRosSynchronousTrigger = require('./simRosSynchronousTrigger.js')
let simRosGetDistanceHandle = require('./simRosGetDistanceHandle.js')
let simRosCallScriptFunction = require('./simRosCallScriptFunction.js')
let simRosSetVisionSensorImage = require('./simRosSetVisionSensorImage.js')
let simRosDisablePublisher = require('./simRosDisablePublisher.js')
let simRosSetUIButtonLabel = require('./simRosSetUIButtonLabel.js')
let simRosReadProximitySensor = require('./simRosReadProximitySensor.js')
let simRosSetObjectPosition = require('./simRosSetObjectPosition.js')
let simRosCopyPasteObjects = require('./simRosCopyPasteObjects.js')
let simRosGetIntegerParameter = require('./simRosGetIntegerParameter.js')
let simRosSetObjectSelection = require('./simRosSetObjectSelection.js')
let simRosBreakForceSensor = require('./simRosBreakForceSensor.js')
let simRosGetCollisionHandle = require('./simRosGetCollisionHandle.js')
let simRosSetUIButtonProperty = require('./simRosSetUIButtonProperty.js')
let simRosGetObjectGroupData = require('./simRosGetObjectGroupData.js')
let simRosGetDialogInput = require('./simRosGetDialogInput.js')
let simRosGetVisionSensorDepthBuffer = require('./simRosGetVisionSensorDepthBuffer.js')
let simRosDisplayDialog = require('./simRosDisplayDialog.js')
let simRosGetLastErrors = require('./simRosGetLastErrors.js')
let simRosGetObjects = require('./simRosGetObjects.js')
let simRosTransferFile = require('./simRosTransferFile.js')
let simRosGetInfo = require('./simRosGetInfo.js')
let simRosGetModelProperty = require('./simRosGetModelProperty.js')
let simRosSetJointState = require('./simRosSetJointState.js')
let simRosAuxiliaryConsoleClose = require('./simRosAuxiliaryConsoleClose.js')
let simRosSetJointTargetPosition = require('./simRosSetJointTargetPosition.js')
let simRosEndDialog = require('./simRosEndDialog.js')
let simRosStopSimulation = require('./simRosStopSimulation.js')
let simRosSetJointTargetVelocity = require('./simRosSetJointTargetVelocity.js')
let simRosSynchronous = require('./simRosSynchronous.js')
let simRosSetIntegerSignal = require('./simRosSetIntegerSignal.js')
let simRosGetObjectHandle = require('./simRosGetObjectHandle.js')
let simRosClearIntegerSignal = require('./simRosClearIntegerSignal.js')
let simRosReadForceSensor = require('./simRosReadForceSensor.js')
let simRosLoadScene = require('./simRosLoadScene.js')
let simRosPauseSimulation = require('./simRosPauseSimulation.js')
let simRosGetBooleanParameter = require('./simRosGetBooleanParameter.js')
let simRosStartSimulation = require('./simRosStartSimulation.js')
let simRosCreateDummy = require('./simRosCreateDummy.js')
let simRosSetUISlider = require('./simRosSetUISlider.js')
let simRosGetVisionSensorImage = require('./simRosGetVisionSensorImage.js')
let simRosLoadModel = require('./simRosLoadModel.js')
let simRosGetDialogResult = require('./simRosGetDialogResult.js')
let simRosSetStringSignal = require('./simRosSetStringSignal.js')
let simRosLoadUI = require('./simRosLoadUI.js')
let simRosAddStatusbarMessage = require('./simRosAddStatusbarMessage.js')
let simRosClearFloatSignal = require('./simRosClearFloatSignal.js')
let simRosGetJointState = require('./simRosGetJointState.js')
let simRosGetObjectParent = require('./simRosGetObjectParent.js')
let simRosReadVisionSensor = require('./simRosReadVisionSensor.js')
let simRosReadDistance = require('./simRosReadDistance.js')
let simRosRemoveModel = require('./simRosRemoveModel.js')
let simRosRemoveUI = require('./simRosRemoveUI.js')
let simRosEnablePublisher = require('./simRosEnablePublisher.js')
let simRosSetFloatingParameter = require('./simRosSetFloatingParameter.js')
let simRosGetJointMatrix = require('./simRosGetJointMatrix.js')
let simRosGetObjectPose = require('./simRosGetObjectPose.js')
let simRosGetIntegerSignal = require('./simRosGetIntegerSignal.js')
let simRosGetStringParameter = require('./simRosGetStringParameter.js')
let simRosSetBooleanParameter = require('./simRosSetBooleanParameter.js')
let simRosAppendStringSignal = require('./simRosAppendStringSignal.js')
let simRosSetObjectParent = require('./simRosSetObjectParent.js')
let simRosSetIntegerParameter = require('./simRosSetIntegerParameter.js')
let simRosAuxiliaryConsolePrint = require('./simRosAuxiliaryConsolePrint.js')
let simRosGetObjectChild = require('./simRosGetObjectChild.js')
let simRosGetObjectIntParameter = require('./simRosGetObjectIntParameter.js')
let simRosReadCollision = require('./simRosReadCollision.js')
let simRosGetUIEventButton = require('./simRosGetUIEventButton.js')
let simRosGetObjectSelection = require('./simRosGetObjectSelection.js')
let simRosAuxiliaryConsoleOpen = require('./simRosAuxiliaryConsoleOpen.js')
let simRosGetArrayParameter = require('./simRosGetArrayParameter.js')

module.exports = {
  simRosGetUIHandle: simRosGetUIHandle,
  simRosAuxiliaryConsoleShow: simRosAuxiliaryConsoleShow,
  simRosCloseScene: simRosCloseScene,
  simRosSetObjectFloatParameter: simRosSetObjectFloatParameter,
  simRosGetFloatingParameter: simRosGetFloatingParameter,
  simRosGetUIButtonProperty: simRosGetUIButtonProperty,
  simRosGetCollectionHandle: simRosGetCollectionHandle,
  simRosSetFloatSignal: simRosSetFloatSignal,
  simRosGetAndClearStringSignal: simRosGetAndClearStringSignal,
  simRosEraseFile: simRosEraseFile,
  simRosDisableSubscriber: simRosDisableSubscriber,
  simRosClearStringSignal: simRosClearStringSignal,
  simRosSetObjectPose: simRosSetObjectPose,
  simRosGetFloatSignal: simRosGetFloatSignal,
  simRosGetStringSignal: simRosGetStringSignal,
  simRosSetJointForce: simRosSetJointForce,
  simRosSetObjectIntParameter: simRosSetObjectIntParameter,
  simRosSetArrayParameter: simRosSetArrayParameter,
  simRosGetObjectFloatParameter: simRosGetObjectFloatParameter,
  simRosRemoveObject: simRosRemoveObject,
  simRosSetJointPosition: simRosSetJointPosition,
  simRosSetObjectQuaternion: simRosSetObjectQuaternion,
  simRosGetUISlider: simRosGetUISlider,
  simRosEnableSubscriber: simRosEnableSubscriber,
  simRosSetSphericalJointMatrix: simRosSetSphericalJointMatrix,
  simRosSetModelProperty: simRosSetModelProperty,
  simRosSynchronousTrigger: simRosSynchronousTrigger,
  simRosGetDistanceHandle: simRosGetDistanceHandle,
  simRosCallScriptFunction: simRosCallScriptFunction,
  simRosSetVisionSensorImage: simRosSetVisionSensorImage,
  simRosDisablePublisher: simRosDisablePublisher,
  simRosSetUIButtonLabel: simRosSetUIButtonLabel,
  simRosReadProximitySensor: simRosReadProximitySensor,
  simRosSetObjectPosition: simRosSetObjectPosition,
  simRosCopyPasteObjects: simRosCopyPasteObjects,
  simRosGetIntegerParameter: simRosGetIntegerParameter,
  simRosSetObjectSelection: simRosSetObjectSelection,
  simRosBreakForceSensor: simRosBreakForceSensor,
  simRosGetCollisionHandle: simRosGetCollisionHandle,
  simRosSetUIButtonProperty: simRosSetUIButtonProperty,
  simRosGetObjectGroupData: simRosGetObjectGroupData,
  simRosGetDialogInput: simRosGetDialogInput,
  simRosGetVisionSensorDepthBuffer: simRosGetVisionSensorDepthBuffer,
  simRosDisplayDialog: simRosDisplayDialog,
  simRosGetLastErrors: simRosGetLastErrors,
  simRosGetObjects: simRosGetObjects,
  simRosTransferFile: simRosTransferFile,
  simRosGetInfo: simRosGetInfo,
  simRosGetModelProperty: simRosGetModelProperty,
  simRosSetJointState: simRosSetJointState,
  simRosAuxiliaryConsoleClose: simRosAuxiliaryConsoleClose,
  simRosSetJointTargetPosition: simRosSetJointTargetPosition,
  simRosEndDialog: simRosEndDialog,
  simRosStopSimulation: simRosStopSimulation,
  simRosSetJointTargetVelocity: simRosSetJointTargetVelocity,
  simRosSynchronous: simRosSynchronous,
  simRosSetIntegerSignal: simRosSetIntegerSignal,
  simRosGetObjectHandle: simRosGetObjectHandle,
  simRosClearIntegerSignal: simRosClearIntegerSignal,
  simRosReadForceSensor: simRosReadForceSensor,
  simRosLoadScene: simRosLoadScene,
  simRosPauseSimulation: simRosPauseSimulation,
  simRosGetBooleanParameter: simRosGetBooleanParameter,
  simRosStartSimulation: simRosStartSimulation,
  simRosCreateDummy: simRosCreateDummy,
  simRosSetUISlider: simRosSetUISlider,
  simRosGetVisionSensorImage: simRosGetVisionSensorImage,
  simRosLoadModel: simRosLoadModel,
  simRosGetDialogResult: simRosGetDialogResult,
  simRosSetStringSignal: simRosSetStringSignal,
  simRosLoadUI: simRosLoadUI,
  simRosAddStatusbarMessage: simRosAddStatusbarMessage,
  simRosClearFloatSignal: simRosClearFloatSignal,
  simRosGetJointState: simRosGetJointState,
  simRosGetObjectParent: simRosGetObjectParent,
  simRosReadVisionSensor: simRosReadVisionSensor,
  simRosReadDistance: simRosReadDistance,
  simRosRemoveModel: simRosRemoveModel,
  simRosRemoveUI: simRosRemoveUI,
  simRosEnablePublisher: simRosEnablePublisher,
  simRosSetFloatingParameter: simRosSetFloatingParameter,
  simRosGetJointMatrix: simRosGetJointMatrix,
  simRosGetObjectPose: simRosGetObjectPose,
  simRosGetIntegerSignal: simRosGetIntegerSignal,
  simRosGetStringParameter: simRosGetStringParameter,
  simRosSetBooleanParameter: simRosSetBooleanParameter,
  simRosAppendStringSignal: simRosAppendStringSignal,
  simRosSetObjectParent: simRosSetObjectParent,
  simRosSetIntegerParameter: simRosSetIntegerParameter,
  simRosAuxiliaryConsolePrint: simRosAuxiliaryConsolePrint,
  simRosGetObjectChild: simRosGetObjectChild,
  simRosGetObjectIntParameter: simRosGetObjectIntParameter,
  simRosReadCollision: simRosReadCollision,
  simRosGetUIEventButton: simRosGetUIEventButton,
  simRosGetObjectSelection: simRosGetObjectSelection,
  simRosAuxiliaryConsoleOpen: simRosAuxiliaryConsoleOpen,
  simRosGetArrayParameter: simRosGetArrayParameter,
};
