
"use strict";

let simRosGetArrayParameter = require('./simRosGetArrayParameter.js')
let simRosSetStringSignal = require('./simRosSetStringSignal.js')
let simRosGetObjects = require('./simRosGetObjects.js')
let simRosGetObjectSelection = require('./simRosGetObjectSelection.js')
let simRosBreakForceSensor = require('./simRosBreakForceSensor.js')
let simRosEnablePublisher = require('./simRosEnablePublisher.js')
let simRosAuxiliaryConsoleShow = require('./simRosAuxiliaryConsoleShow.js')
let simRosGetObjectFloatParameter = require('./simRosGetObjectFloatParameter.js')
let simRosGetObjectGroupData = require('./simRosGetObjectGroupData.js')
let simRosGetFloatingParameter = require('./simRosGetFloatingParameter.js')
let simRosGetCollectionHandle = require('./simRosGetCollectionHandle.js')
let simRosGetJointMatrix = require('./simRosGetJointMatrix.js')
let simRosGetInfo = require('./simRosGetInfo.js')
let simRosEraseFile = require('./simRosEraseFile.js')
let simRosGetObjectChild = require('./simRosGetObjectChild.js')
let simRosSetObjectIntParameter = require('./simRosSetObjectIntParameter.js')
let simRosSetJointForce = require('./simRosSetJointForce.js')
let simRosSetUISlider = require('./simRosSetUISlider.js')
let simRosReadCollision = require('./simRosReadCollision.js')
let simRosReadForceSensor = require('./simRosReadForceSensor.js')
let simRosSetObjectQuaternion = require('./simRosSetObjectQuaternion.js')
let simRosDisableSubscriber = require('./simRosDisableSubscriber.js')
let simRosGetModelProperty = require('./simRosGetModelProperty.js')
let simRosSetIntegerSignal = require('./simRosSetIntegerSignal.js')
let simRosCopyPasteObjects = require('./simRosCopyPasteObjects.js')
let simRosGetUISlider = require('./simRosGetUISlider.js')
let simRosDisplayDialog = require('./simRosDisplayDialog.js')
let simRosGetIntegerSignal = require('./simRosGetIntegerSignal.js')
let simRosReadProximitySensor = require('./simRosReadProximitySensor.js')
let simRosSetIntegerParameter = require('./simRosSetIntegerParameter.js')
let simRosCallScriptFunction = require('./simRosCallScriptFunction.js')
let simRosGetStringParameter = require('./simRosGetStringParameter.js')
let simRosClearIntegerSignal = require('./simRosClearIntegerSignal.js')
let simRosSetJointPosition = require('./simRosSetJointPosition.js')
let simRosStopSimulation = require('./simRosStopSimulation.js')
let simRosPauseSimulation = require('./simRosPauseSimulation.js')
let simRosGetObjectHandle = require('./simRosGetObjectHandle.js')
let simRosGetAndClearStringSignal = require('./simRosGetAndClearStringSignal.js')
let simRosSetObjectPosition = require('./simRosSetObjectPosition.js')
let simRosAuxiliaryConsolePrint = require('./simRosAuxiliaryConsolePrint.js')
let simRosGetIntegerParameter = require('./simRosGetIntegerParameter.js')
let simRosLoadScene = require('./simRosLoadScene.js')
let simRosSetJointState = require('./simRosSetJointState.js')
let simRosLoadModel = require('./simRosLoadModel.js')
let simRosSynchronousTrigger = require('./simRosSynchronousTrigger.js')
let simRosGetUIEventButton = require('./simRosGetUIEventButton.js')
let simRosSetSphericalJointMatrix = require('./simRosSetSphericalJointMatrix.js')
let simRosAuxiliaryConsoleOpen = require('./simRosAuxiliaryConsoleOpen.js')
let simRosSetObjectSelection = require('./simRosSetObjectSelection.js')
let simRosSetBooleanParameter = require('./simRosSetBooleanParameter.js')
let simRosGetUIHandle = require('./simRosGetUIHandle.js')
let simRosGetDialogInput = require('./simRosGetDialogInput.js')
let simRosGetDialogResult = require('./simRosGetDialogResult.js')
let simRosGetVisionSensorImage = require('./simRosGetVisionSensorImage.js')
let simRosGetLastErrors = require('./simRosGetLastErrors.js')
let simRosSetJointTargetVelocity = require('./simRosSetJointTargetVelocity.js')
let simRosGetCollisionHandle = require('./simRosGetCollisionHandle.js')
let simRosLoadUI = require('./simRosLoadUI.js')
let simRosStartSimulation = require('./simRosStartSimulation.js')
let simRosClearStringSignal = require('./simRosClearStringSignal.js')
let simRosSetObjectFloatParameter = require('./simRosSetObjectFloatParameter.js')
let simRosSetUIButtonLabel = require('./simRosSetUIButtonLabel.js')
let simRosGetVisionSensorDepthBuffer = require('./simRosGetVisionSensorDepthBuffer.js')
let simRosReadDistance = require('./simRosReadDistance.js')
let simRosGetObjectIntParameter = require('./simRosGetObjectIntParameter.js')
let simRosAuxiliaryConsoleClose = require('./simRosAuxiliaryConsoleClose.js')
let simRosCloseScene = require('./simRosCloseScene.js')
let simRosRemoveUI = require('./simRosRemoveUI.js')
let simRosGetStringSignal = require('./simRosGetStringSignal.js')
let simRosCreateDummy = require('./simRosCreateDummy.js')
let simRosGetBooleanParameter = require('./simRosGetBooleanParameter.js')
let simRosSetArrayParameter = require('./simRosSetArrayParameter.js')
let simRosSetFloatSignal = require('./simRosSetFloatSignal.js')
let simRosDisablePublisher = require('./simRosDisablePublisher.js')
let simRosGetFloatSignal = require('./simRosGetFloatSignal.js')
let simRosEnableSubscriber = require('./simRosEnableSubscriber.js')
let simRosClearFloatSignal = require('./simRosClearFloatSignal.js')
let simRosReadVisionSensor = require('./simRosReadVisionSensor.js')
let simRosSetObjectPose = require('./simRosSetObjectPose.js')
let simRosSetFloatingParameter = require('./simRosSetFloatingParameter.js')
let simRosAppendStringSignal = require('./simRosAppendStringSignal.js')
let simRosSynchronous = require('./simRosSynchronous.js')
let simRosAddStatusbarMessage = require('./simRosAddStatusbarMessage.js')
let simRosGetDistanceHandle = require('./simRosGetDistanceHandle.js')
let simRosTransferFile = require('./simRosTransferFile.js')
let simRosGetObjectParent = require('./simRosGetObjectParent.js')
let simRosSetObjectParent = require('./simRosSetObjectParent.js')
let simRosGetUIButtonProperty = require('./simRosGetUIButtonProperty.js')
let simRosGetJointState = require('./simRosGetJointState.js')
let simRosRemoveModel = require('./simRosRemoveModel.js')
let simRosSetUIButtonProperty = require('./simRosSetUIButtonProperty.js')
let simRosSetJointTargetPosition = require('./simRosSetJointTargetPosition.js')
let simRosRemoveObject = require('./simRosRemoveObject.js')
let simRosEndDialog = require('./simRosEndDialog.js')
let simRosSetVisionSensorImage = require('./simRosSetVisionSensorImage.js')
let simRosGetObjectPose = require('./simRosGetObjectPose.js')
let simRosSetModelProperty = require('./simRosSetModelProperty.js')

module.exports = {
  simRosGetArrayParameter: simRosGetArrayParameter,
  simRosSetStringSignal: simRosSetStringSignal,
  simRosGetObjects: simRosGetObjects,
  simRosGetObjectSelection: simRosGetObjectSelection,
  simRosBreakForceSensor: simRosBreakForceSensor,
  simRosEnablePublisher: simRosEnablePublisher,
  simRosAuxiliaryConsoleShow: simRosAuxiliaryConsoleShow,
  simRosGetObjectFloatParameter: simRosGetObjectFloatParameter,
  simRosGetObjectGroupData: simRosGetObjectGroupData,
  simRosGetFloatingParameter: simRosGetFloatingParameter,
  simRosGetCollectionHandle: simRosGetCollectionHandle,
  simRosGetJointMatrix: simRosGetJointMatrix,
  simRosGetInfo: simRosGetInfo,
  simRosEraseFile: simRosEraseFile,
  simRosGetObjectChild: simRosGetObjectChild,
  simRosSetObjectIntParameter: simRosSetObjectIntParameter,
  simRosSetJointForce: simRosSetJointForce,
  simRosSetUISlider: simRosSetUISlider,
  simRosReadCollision: simRosReadCollision,
  simRosReadForceSensor: simRosReadForceSensor,
  simRosSetObjectQuaternion: simRosSetObjectQuaternion,
  simRosDisableSubscriber: simRosDisableSubscriber,
  simRosGetModelProperty: simRosGetModelProperty,
  simRosSetIntegerSignal: simRosSetIntegerSignal,
  simRosCopyPasteObjects: simRosCopyPasteObjects,
  simRosGetUISlider: simRosGetUISlider,
  simRosDisplayDialog: simRosDisplayDialog,
  simRosGetIntegerSignal: simRosGetIntegerSignal,
  simRosReadProximitySensor: simRosReadProximitySensor,
  simRosSetIntegerParameter: simRosSetIntegerParameter,
  simRosCallScriptFunction: simRosCallScriptFunction,
  simRosGetStringParameter: simRosGetStringParameter,
  simRosClearIntegerSignal: simRosClearIntegerSignal,
  simRosSetJointPosition: simRosSetJointPosition,
  simRosStopSimulation: simRosStopSimulation,
  simRosPauseSimulation: simRosPauseSimulation,
  simRosGetObjectHandle: simRosGetObjectHandle,
  simRosGetAndClearStringSignal: simRosGetAndClearStringSignal,
  simRosSetObjectPosition: simRosSetObjectPosition,
  simRosAuxiliaryConsolePrint: simRosAuxiliaryConsolePrint,
  simRosGetIntegerParameter: simRosGetIntegerParameter,
  simRosLoadScene: simRosLoadScene,
  simRosSetJointState: simRosSetJointState,
  simRosLoadModel: simRosLoadModel,
  simRosSynchronousTrigger: simRosSynchronousTrigger,
  simRosGetUIEventButton: simRosGetUIEventButton,
  simRosSetSphericalJointMatrix: simRosSetSphericalJointMatrix,
  simRosAuxiliaryConsoleOpen: simRosAuxiliaryConsoleOpen,
  simRosSetObjectSelection: simRosSetObjectSelection,
  simRosSetBooleanParameter: simRosSetBooleanParameter,
  simRosGetUIHandle: simRosGetUIHandle,
  simRosGetDialogInput: simRosGetDialogInput,
  simRosGetDialogResult: simRosGetDialogResult,
  simRosGetVisionSensorImage: simRosGetVisionSensorImage,
  simRosGetLastErrors: simRosGetLastErrors,
  simRosSetJointTargetVelocity: simRosSetJointTargetVelocity,
  simRosGetCollisionHandle: simRosGetCollisionHandle,
  simRosLoadUI: simRosLoadUI,
  simRosStartSimulation: simRosStartSimulation,
  simRosClearStringSignal: simRosClearStringSignal,
  simRosSetObjectFloatParameter: simRosSetObjectFloatParameter,
  simRosSetUIButtonLabel: simRosSetUIButtonLabel,
  simRosGetVisionSensorDepthBuffer: simRosGetVisionSensorDepthBuffer,
  simRosReadDistance: simRosReadDistance,
  simRosGetObjectIntParameter: simRosGetObjectIntParameter,
  simRosAuxiliaryConsoleClose: simRosAuxiliaryConsoleClose,
  simRosCloseScene: simRosCloseScene,
  simRosRemoveUI: simRosRemoveUI,
  simRosGetStringSignal: simRosGetStringSignal,
  simRosCreateDummy: simRosCreateDummy,
  simRosGetBooleanParameter: simRosGetBooleanParameter,
  simRosSetArrayParameter: simRosSetArrayParameter,
  simRosSetFloatSignal: simRosSetFloatSignal,
  simRosDisablePublisher: simRosDisablePublisher,
  simRosGetFloatSignal: simRosGetFloatSignal,
  simRosEnableSubscriber: simRosEnableSubscriber,
  simRosClearFloatSignal: simRosClearFloatSignal,
  simRosReadVisionSensor: simRosReadVisionSensor,
  simRosSetObjectPose: simRosSetObjectPose,
  simRosSetFloatingParameter: simRosSetFloatingParameter,
  simRosAppendStringSignal: simRosAppendStringSignal,
  simRosSynchronous: simRosSynchronous,
  simRosAddStatusbarMessage: simRosAddStatusbarMessage,
  simRosGetDistanceHandle: simRosGetDistanceHandle,
  simRosTransferFile: simRosTransferFile,
  simRosGetObjectParent: simRosGetObjectParent,
  simRosSetObjectParent: simRosSetObjectParent,
  simRosGetUIButtonProperty: simRosGetUIButtonProperty,
  simRosGetJointState: simRosGetJointState,
  simRosRemoveModel: simRosRemoveModel,
  simRosSetUIButtonProperty: simRosSetUIButtonProperty,
  simRosSetJointTargetPosition: simRosSetJointTargetPosition,
  simRosRemoveObject: simRosRemoveObject,
  simRosEndDialog: simRosEndDialog,
  simRosSetVisionSensorImage: simRosSetVisionSensorImage,
  simRosGetObjectPose: simRosGetObjectPose,
  simRosSetModelProperty: simRosSetModelProperty,
};
