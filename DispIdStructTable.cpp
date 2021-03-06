#include "DispIdStructTable.h"
namespace cluster { 
namespace dispID { 
stDispID tableID[] = {
    {eDispId_12VBatteryReset, McuServiceType::EnumEventID::eDispId_RENAME_12VBatteryReset, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_2StepESC_Off, McuServiceType::EnumEventID::eDispId_RENAME_2StepESC_Off, McuServiceType::GroupLevel::eDispId_Group_2_Mini},
    {eDispId_2WD_Mode, McuServiceType::EnumEventID::eDispId_RENAME_2WD_Mode, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_4WD_Onoff, McuServiceType::EnumEventID::eDispId_RENAME_4WD_Onoff, McuServiceType::GroupLevel::eDispId_Group_2_Mini},
    {eDispId_AAF_Fail, McuServiceType::EnumEventID::eDispId_RENAME_AAF_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_ADAS_SettingMode, McuServiceType::EnumEventID::eDispId_RENAME_ADAS_SettingMode, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_AHB_Check, McuServiceType::EnumEventID::eDispId_RENAME_AHB_Check, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_AHB_CheckStop, McuServiceType::EnumEventID::eDispId_RENAME_AHB_CheckStop, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_AV_Mode, McuServiceType::EnumEventID::eDispId_RENAME_AV_Mode, McuServiceType::GroupLevel::eDispId_Group_2_Mini},
    {eDispId_AirCleaning_Onoff, McuServiceType::EnumEventID::eDispId_RENAME_AirCleaning_Onoff, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_Attention_Assist, McuServiceType::EnumEventID::eDispId_RENAME_Attention_Assist, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_AuxBattSaverPlus, McuServiceType::EnumEventID::eDispId_RENAME_AuxBattSaverPlus, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_BCA_Blockage, McuServiceType::EnumEventID::eDispId_RENAME_BCA_Blockage, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_BCA_Fail, McuServiceType::EnumEventID::eDispId_RENAME_BCA_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_BCA_R, McuServiceType::EnumEventID::eDispId_RENAME_BCA_R, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_BCA_R_PLUS, McuServiceType::EnumEventID::eDispId_RENAME_BCA_R_PLUS, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_BCM_Warning_Engine, McuServiceType::EnumEventID::eDispId_RENAME_BCM_Warning_Engine, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_BCM_Warning_P, McuServiceType::EnumEventID::eDispId_RENAME_BCM_Warning_P, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_BCW_Blockage, McuServiceType::EnumEventID::eDispId_RENAME_BCW_Blockage, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_BCW_Fail, McuServiceType::EnumEventID::eDispId_RENAME_BCW_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_BCW_Mirror_Fail, McuServiceType::EnumEventID::eDispId_RENAME_BCW_Mirror_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_BCW_Off_Noti, McuServiceType::EnumEventID::eDispId_RENAME_BCW_Off_Noti, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_BCW_Onoff, McuServiceType::EnumEventID::eDispId_RENAME_BCW_Onoff, McuServiceType::GroupLevel::eDispId_Group_2_Mini},
    {eDispId_BCW_Warn, McuServiceType::EnumEventID::eDispId_RENAME_BCW_Warn, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_BVM, McuServiceType::EnumEventID::eDispId_RENAME_BVM, McuServiceType::GroupLevel::eDispId_Group_2_Exception},
    {eDispId_Batt_HighTemp, McuServiceType::EnumEventID::eDispId_RENAME_Batt_HighTemp, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_Batt_LowTemp, McuServiceType::EnumEventID::eDispId_RENAME_Batt_LowTemp, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_Batt_LowTemp_IgnOff, McuServiceType::EnumEventID::eDispId_RENAME_Batt_LowTemp_IgnOff, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_BatteryDischargeWarning, McuServiceType::EnumEventID::eDispId_RENAME_BatteryDischargeWarning, McuServiceType::GroupLevel::eDispId_Group_6},
    {eDispId_CSCD_ModeChanged_Full, McuServiceType::EnumEventID::eDispId_RENAME_CSCD_ModeChanged_Full, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_CSCD_ModeChanged_Mini, McuServiceType::EnumEventID::eDispId_RENAME_CSCD_ModeChanged_Mini, McuServiceType::GroupLevel::eDispId_Group_2_Mini},
    {eDispId_CSCD_Mode_AutoChange, McuServiceType::EnumEventID::eDispId_RENAME_CSCD_Mode_AutoChange, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_ChargeDoor_Open, McuServiceType::EnumEventID::eDispId_RENAME_ChargeDoor_Open, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_ChargeDoor_OpenMoving, McuServiceType::EnumEventID::eDispId_RENAME_ChargeDoor_OpenMoving, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_Charging_Alarm, McuServiceType::EnumEventID::eDispId_RENAME_Charging_Alarm, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_Check48VePT, McuServiceType::EnumEventID::eDispId_RENAME_Check48VePT, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_CheckBrake_ABSESC, McuServiceType::EnumEventID::eDispId_RENAME_CheckBrake_ABSESC, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_CheckBrake_BrakeFluid, McuServiceType::EnumEventID::eDispId_RENAME_CheckBrake_BrakeFluid, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_CheckBrake_VacuumPump, McuServiceType::EnumEventID::eDispId_RENAME_CheckBrake_VacuumPump, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_CheckDiffGear, McuServiceType::EnumEventID::eDispId_RENAME_CheckDiffGear, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_CheckHev, McuServiceType::EnumEventID::eDispId_RENAME_CheckHev, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_CheckHevEngine, McuServiceType::EnumEventID::eDispId_RENAME_CheckHevEngine, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_CheckHevNoStart, McuServiceType::EnumEventID::eDispId_RENAME_CheckHevNoStart, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_CheckPattern, McuServiceType::EnumEventID::eDispId_RENAME_CheckPattern, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_CheckPowerSupply, McuServiceType::EnumEventID::eDispId_RENAME_CheckPowerSupply, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_CheckRearSeatAlarm, McuServiceType::EnumEventID::eDispId_RENAME_CheckRearSeatAlarm, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_CheckTireDiff, McuServiceType::EnumEventID::eDispId_RENAME_CheckTireDiff, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_CoolingWater_Refill, McuServiceType::EnumEventID::eDispId_RENAME_CoolingWater_Refill, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_DAW_Fail, McuServiceType::EnumEventID::eDispId_RENAME_DAW_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_DBC_Cancel, McuServiceType::EnumEventID::eDispId_RENAME_DBC_Cancel, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_DBC_Onoff, McuServiceType::EnumEventID::eDispId_RENAME_DBC_Onoff, McuServiceType::GroupLevel::eDispId_Group_2_Mini},
    {eDispId_DCT_Cooling, McuServiceType::EnumEventID::eDispId_RENAME_DCT_Cooling, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_DCT_CoolingFinish, McuServiceType::EnumEventID::eDispId_RENAME_DCT_CoolingFinish, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_DCT_HighTemp, McuServiceType::EnumEventID::eDispId_RENAME_DCT_HighTemp, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_DCT_HillHold, McuServiceType::EnumEventID::eDispId_RENAME_DCT_HillHold, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_DCT_LimpHome, McuServiceType::EnumEventID::eDispId_RENAME_DCT_LimpHome, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_DCT_OverHeat, McuServiceType::EnumEventID::eDispId_RENAME_DCT_OverHeat, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_DMS_Fail, McuServiceType::EnumEventID::eDispId_RENAME_DMS_Fail, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_DPF_Fail, McuServiceType::EnumEventID::eDispId_RENAME_DPF_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_DayLightLamp_Fail, McuServiceType::EnumEventID::eDispId_RENAME_DayLightLamp_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_DoorHood_Moving_Open, McuServiceType::EnumEventID::eDispId_RENAME_DoorHood_Moving_Open, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_DoorTrunkHood_Stopped_Open, McuServiceType::EnumEventID::eDispId_RENAME_DoorTrunkHood_Stopped_Open, McuServiceType::GroupLevel::eDispId_Group_8},
    {eDispId_DriveMode_Error, McuServiceType::EnumEventID::eDispId_RENAME_DriveMode_Error, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_DriveMode_Full, McuServiceType::EnumEventID::eDispId_RENAME_DriveMode_Full, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_DriveMode_Mini, McuServiceType::EnumEventID::eDispId_RENAME_DriveMode_Mini, McuServiceType::GroupLevel::eDispId_Group_2_Mini},
    {eDispId_DynamicBendingLamp_Fail, McuServiceType::EnumEventID::eDispId_RENAME_DynamicBendingLamp_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_ECS_Fail, McuServiceType::EnumEventID::eDispId_RENAME_ECS_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_EMS_SafetyFunction, McuServiceType::EnumEventID::eDispId_RENAME_EMS_SafetyFunction, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_EOL_Error, McuServiceType::EnumEventID::eDispId_RENAME_EOL_Error, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_EPB_Infinite, McuServiceType::EnumEventID::eDispId_RENAME_EPB_Infinite, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_EVSystem_Check, McuServiceType::EnumEventID::eDispId_RENAME_EVSystem_Check, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_EV_Ready, McuServiceType::EnumEventID::eDispId_RENAME_EV_Ready, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_Engine_AutoStop, McuServiceType::EnumEventID::eDispId_RENAME_Engine_AutoStop, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_Engine_HighTemp, McuServiceType::EnumEventID::eDispId_RENAME_Engine_HighTemp, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_ExhaustGas_TestMode, McuServiceType::EnumEventID::eDispId_RENAME_ExhaustGas_TestMode, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_ExtFastCharge_Fail, McuServiceType::EnumEventID::eDispId_RENAME_ExtFastCharge_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_ExtSlowCharge_Fail, McuServiceType::EnumEventID::eDispId_RENAME_ExtSlowCharge_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_FCA_Blockage, McuServiceType::EnumEventID::eDispId_RENAME_FCA_Blockage, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_FCA_Fail, McuServiceType::EnumEventID::eDispId_RENAME_FCA_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_FCA_LO, McuServiceType::EnumEventID::eDispId_RENAME_FCA_LO, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_FCA_LS, McuServiceType::EnumEventID::eDispId_RENAME_FCA_LS, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_FCA_Warn, McuServiceType::EnumEventID::eDispId_RENAME_FCA_Warn, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_FCA_Warn_byScc, McuServiceType::EnumEventID::eDispId_RENAME_FCA_Warn_byScc, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_FCA_wESA, McuServiceType::EnumEventID::eDispId_RENAME_FCA_wESA, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_FCEV_FuelCellFCEVCoolantShortage, McuServiceType::EnumEventID::eDispId_RENAME_FCEV_FuelCellFCEVCoolantShortage, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_FCEV_Regenerate, McuServiceType::EnumEventID::eDispId_RENAME_FCEV_Regenerate, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_FactoryScreen, McuServiceType::EnumEventID::eDispId_RENAME_FactoryScreen, McuServiceType::GroupLevel::eDispId_Group_6},
    {eDispId_FlexSteer, McuServiceType::EnumEventID::eDispId_RENAME_FlexSteer, McuServiceType::GroupLevel::eDispId_Group_2_Mini},
    {eDispId_FogLamp_Fail, McuServiceType::EnumEventID::eDispId_RENAME_FogLamp_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_FrontWiper, McuServiceType::EnumEventID::eDispId_RENAME_FrontWiper, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_FuelRunOut, McuServiceType::EnumEventID::eDispId_RENAME_FuelRunOut, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_Gear_Engaged_IgnOff, McuServiceType::EnumEventID::eDispId_RENAME_Gear_Engaged_IgnOff, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_Gear_Engaged_IgnOn, McuServiceType::EnumEventID::eDispId_RENAME_Gear_Engaged_IgnOn, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_Goodbye, McuServiceType::EnumEventID::eDispId_RENAME_Goodbye, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_GroupTab, McuServiceType::EnumEventID::eDispId_RENAME_GroupTab, McuServiceType::GroupLevel::eDispId_Group_8},
    {eDispId_HBA_Fail, McuServiceType::EnumEventID::eDispId_RENAME_HBA_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_HDA2_Check, McuServiceType::EnumEventID::eDispId_RENAME_HDA2_Check, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_HDA2_Guide, McuServiceType::EnumEventID::eDispId_RENAME_HDA2_Guide, McuServiceType::GroupLevel::eDispId_Group_3},
    {eDispId_HDA2_ON_REQ, McuServiceType::EnumEventID::eDispId_RENAME_HDA2_ON_REQ, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_HDA_Cancel, McuServiceType::EnumEventID::eDispId_RENAME_HDA_Cancel, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_HDA_Check, McuServiceType::EnumEventID::eDispId_RENAME_HDA_Check, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_HDA_HDAMode, McuServiceType::EnumEventID::eDispId_RENAME_HDA_HDAMode, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_HDA_HandsOff1, McuServiceType::EnumEventID::eDispId_RENAME_HDA_HandsOff1, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_HDA_HandsOff2, McuServiceType::EnumEventID::eDispId_RENAME_HDA_HandsOff2, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_HDA_ON_REQ, McuServiceType::EnumEventID::eDispId_RENAME_HDA_ON_REQ, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_HDA_SCCMode, McuServiceType::EnumEventID::eDispId_RENAME_HDA_SCCMode, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_Haptic_Fail, McuServiceType::EnumEventID::eDispId_RENAME_Haptic_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_HeadLamp_Bifunc_Fail, McuServiceType::EnumEventID::eDispId_RENAME_HeadLamp_Bifunc_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_HeadLamp_High_Fail, McuServiceType::EnumEventID::eDispId_RENAME_HeadLamp_High_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_HeadLamp_Low_Fail, McuServiceType::EnumEventID::eDispId_RENAME_HeadLamp_Low_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_Headlamp_Off, McuServiceType::EnumEventID::eDispId_RENAME_Headlamp_Off, McuServiceType::GroupLevel::eDispId_Group_2_Mini},
    {eDispId_Heated_Wire_Cancel, McuServiceType::EnumEventID::eDispId_RENAME_Heated_Wire_Cancel, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_HighMountedStopLamp_Fail, McuServiceType::EnumEventID::eDispId_RENAME_HighMountedStopLamp_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_IMS_Full, McuServiceType::EnumEventID::eDispId_RENAME_IMS_Full, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_IMS_Mini, McuServiceType::EnumEventID::eDispId_RENAME_IMS_Mini, McuServiceType::GroupLevel::eDispId_Group_2_Mini},
    {eDispId_ISG_CancelBrakeClutch, McuServiceType::EnumEventID::eDispId_RENAME_ISG_CancelBrakeClutch, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_ISG_Start, McuServiceType::EnumEventID::eDispId_RENAME_ISG_Start, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_ISLW_Blockage, McuServiceType::EnumEventID::eDispId_RENAME_ISLW_Blockage, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_ISLW_Fail, McuServiceType::EnumEventID::eDispId_RENAME_ISLW_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_IceWarning, McuServiceType::EnumEventID::eDispId_RENAME_IceWarning, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_InverterCoolant_Refill, McuServiceType::EnumEventID::eDispId_RENAME_InverterCoolant_Refill, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_LEDHeadLamp_Fail, McuServiceType::EnumEventID::eDispId_RENAME_LEDHeadLamp_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_LKAS_Cancel, McuServiceType::EnumEventID::eDispId_RENAME_LKAS_Cancel, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_LKAS_Fail, McuServiceType::EnumEventID::eDispId_RENAME_LKAS_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_LKAS_HandsOn_Lv1, McuServiceType::EnumEventID::eDispId_RENAME_LKAS_HandsOn_Lv1, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_LKAS_HandsOn_Lv2, McuServiceType::EnumEventID::eDispId_RENAME_LKAS_HandsOn_Lv2, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_LKAS_HandsOn_Lv2_Sound, McuServiceType::EnumEventID::eDispId_RENAME_LKAS_HandsOn_Lv2_Sound, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_LeadVehicleDeparted, McuServiceType::EnumEventID::eDispId_RENAME_LeadVehicleDeparted, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_LicensePlateLamp_Fail, McuServiceType::EnumEventID::eDispId_RENAME_LicensePlateLamp_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_Light, McuServiceType::EnumEventID::eDispId_RENAME_Light, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_LowBatToPGear, McuServiceType::EnumEventID::eDispId_RENAME_LowBatToPGear, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_LowBatt_Lv1, McuServiceType::EnumEventID::eDispId_RENAME_LowBatt_Lv1, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_LowBatt_Lv2, McuServiceType::EnumEventID::eDispId_RENAME_LowBatt_Lv2, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_LowEngineOil, McuServiceType::EnumEventID::eDispId_RENAME_LowEngineOil, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_LowFuel, McuServiceType::EnumEventID::eDispId_RENAME_LowFuel, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_LowWasher, McuServiceType::EnumEventID::eDispId_RENAME_LowWasher, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_MDPS, McuServiceType::EnumEventID::eDispId_RENAME_MDPS, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_Max, McuServiceType::EnumEventID::eDispId_RENAME_Max, McuServiceType::GroupLevel::eDispId_Group_8},
    {eDispId_NCC, McuServiceType::EnumEventID::eDispId_RENAME_NCC, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_NormalChargeError, McuServiceType::EnumEventID::eDispId_RENAME_NormalChargeError, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_OilFilter_Check, McuServiceType::EnumEventID::eDispId_RENAME_OilFilter_Check, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_PA, McuServiceType::EnumEventID::eDispId_RENAME_PA, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_PAS_Fail, McuServiceType::EnumEventID::eDispId_RENAME_PAS_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_PA_Fail, McuServiceType::EnumEventID::eDispId_RENAME_PA_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_PA_ModeChange, McuServiceType::EnumEventID::eDispId_RENAME_PA_ModeChange, McuServiceType::GroupLevel::eDispId_Group_3},
    {eDispId_PHEVFuelTank_Charging, McuServiceType::EnumEventID::eDispId_RENAME_PHEVFuelTank_Charging, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_PHEVFuelTank_CheckOrOpen, McuServiceType::EnumEventID::eDispId_RENAME_PHEVFuelTank_CheckOrOpen, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_PHEVFuelTank_WaitOrFuel, McuServiceType::EnumEventID::eDispId_RENAME_PHEVFuelTank_WaitOrFuel, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_PSB_Fail, McuServiceType::EnumEventID::eDispId_RENAME_PSB_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_ParasiticCurrent, McuServiceType::EnumEventID::eDispId_RENAME_ParasiticCurrent, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_ParkingSystem_Group1, McuServiceType::EnumEventID::eDispId_RENAME_ParkingSystem_Group1, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_ParkingSystem_Group4, McuServiceType::EnumEventID::eDispId_RENAME_ParkingSystem_Group4, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_PositionLamp_Fail, McuServiceType::EnumEventID::eDispId_RENAME_PositionLamp_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_PowerDown, McuServiceType::EnumEventID::eDispId_RENAME_PowerDown, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_PowerLimit, McuServiceType::EnumEventID::eDispId_RENAME_PowerLimit, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_RCCW_Blockage, McuServiceType::EnumEventID::eDispId_RENAME_RCCW_Blockage, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_RCCW_Fail, McuServiceType::EnumEventID::eDispId_RENAME_RCCW_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_RearSeatAlarm_Alarm, McuServiceType::EnumEventID::eDispId_RENAME_RearSeatAlarm_Alarm, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_RearSeatAlarm_Clear, McuServiceType::EnumEventID::eDispId_RENAME_RearSeatAlarm_Clear, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_RearWiper, McuServiceType::EnumEventID::eDispId_RENAME_RearWiper, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_Refuel, McuServiceType::EnumEventID::eDispId_RENAME_Refuel, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_RegenBrakeSystem_Fail, McuServiceType::EnumEventID::eDispId_RENAME_RegenBrakeSystem_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_RegenerateFail, McuServiceType::EnumEventID::eDispId_RENAME_RegenerateFail, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_RemainChargeTime, McuServiceType::EnumEventID::eDispId_RENAME_RemainChargeTime, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_Remove_Charge, McuServiceType::EnumEventID::eDispId_RENAME_Remove_Charge, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_Rheostat, McuServiceType::EnumEventID::eDispId_RENAME_Rheostat, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_SBW_LVR_Fail, McuServiceType::EnumEventID::eDispId_RENAME_SBW_LVR_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_SBW_LVR_Fail_IgnOff, McuServiceType::EnumEventID::eDispId_RENAME_SBW_LVR_Fail_IgnOff, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_SBW_ShiftFail, McuServiceType::EnumEventID::eDispId_RENAME_SBW_ShiftFail, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_SBW_VCU1_Warn, McuServiceType::EnumEventID::eDispId_RENAME_SBW_VCU1_Warn, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_SBW_VCU2_Warn_IgnOff, McuServiceType::EnumEventID::eDispId_RENAME_SBW_VCU2_Warn_IgnOff, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_SBW_VCU2_Warn_IgnOn, McuServiceType::EnumEventID::eDispId_RENAME_SBW_VCU2_Warn_IgnOn, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_SBW_scuNMode_IgnOff, McuServiceType::EnumEventID::eDispId_RENAME_SBW_scuNMode_IgnOff, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_SBW_scuNMode_IgnOn, McuServiceType::EnumEventID::eDispId_RENAME_SBW_scuNMode_IgnOn, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_SCC_Blockage, McuServiceType::EnumEventID::eDispId_RENAME_SCC_Blockage, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_SCC_Distance_Full, McuServiceType::EnumEventID::eDispId_RENAME_SCC_Distance_Full, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_SCC_HDA2_AutoReduce, McuServiceType::EnumEventID::eDispId_RENAME_SCC_HDA2_AutoReduce, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_SCC_ModeChange, McuServiceType::EnumEventID::eDispId_RENAME_SCC_ModeChange, McuServiceType::GroupLevel::eDispId_Group_2_Mini},
    {eDispId_SCC_NSCC, McuServiceType::EnumEventID::eDispId_RENAME_SCC_NSCC, McuServiceType::GroupLevel::eDispId_Group_3},
    {eDispId_SCC_Popup, McuServiceType::EnumEventID::eDispId_RENAME_SCC_Popup, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_SCC_SwitchControl, McuServiceType::EnumEventID::eDispId_RENAME_SCC_SwitchControl, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_SCC_SystemFail, McuServiceType::EnumEventID::eDispId_RENAME_SCC_SystemFail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_SCUOverHeat, McuServiceType::EnumEventID::eDispId_RENAME_SCUOverHeat, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_SEA_IgnOff, McuServiceType::EnumEventID::eDispId_RENAME_SEA_IgnOff, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_SEA_IgnOn, McuServiceType::EnumEventID::eDispId_RENAME_SEA_IgnOn, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_SEA_Operation_fail, McuServiceType::EnumEventID::eDispId_RENAME_SEA_Operation_fail, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_SEA_Operation_noti, McuServiceType::EnumEventID::eDispId_RENAME_SEA_Operation_noti, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_SMK_ExceptParking, McuServiceType::EnumEventID::eDispId_RENAME_SMK_ExceptParking, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_SMK_P_IgnOff, McuServiceType::EnumEventID::eDispId_RENAME_SMK_P_IgnOff, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_SMK_P_IgnOn, McuServiceType::EnumEventID::eDispId_RENAME_SMK_P_IgnOn, McuServiceType::GroupLevel::eDispId_Group_5},
    {eDispId_ScreenOff, McuServiceType::EnumEventID::eDispId_RENAME_ScreenOff, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_Service_Reminder, McuServiceType::EnumEventID::eDispId_RENAME_Service_Reminder, McuServiceType::GroupLevel::eDispId_Group_6},
    {eDispId_Shift_P_ToCharge, McuServiceType::EnumEventID::eDispId_RENAME_Shift_P_ToCharge, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_StaticBendingLamp_Fail, McuServiceType::EnumEventID::eDispId_RENAME_StaticBendingLamp_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_StopLamp_Fail, McuServiceType::EnumEventID::eDispId_RENAME_StopLamp_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_StopToChargeBattery, McuServiceType::EnumEventID::eDispId_RENAME_StopToChargeBattery, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_SunroofWindowHood_Open, McuServiceType::EnumEventID::eDispId_RENAME_SunroofWindowHood_Open, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_System_Check, McuServiceType::EnumEventID::eDispId_RENAME_System_Check, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_TCF, McuServiceType::EnumEventID::eDispId_RENAME_TCF, McuServiceType::GroupLevel::eDispId_Group_6},
    {eDispId_TPMS_SavedNoti, McuServiceType::EnumEventID::eDispId_RENAME_TPMS_SavedNoti, McuServiceType::GroupLevel::eDispId_Group_2_Full},
    {eDispId_TPMS_Virgin, McuServiceType::EnumEventID::eDispId_RENAME_TPMS_Virgin, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_TPMS_Warn, McuServiceType::EnumEventID::eDispId_RENAME_TPMS_Warn, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_TPMS_Warn_Inform, McuServiceType::EnumEventID::eDispId_RENAME_TPMS_Warn_Inform, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_TailLamp_Fail, McuServiceType::EnumEventID::eDispId_RENAME_TailLamp_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_TurnSignalLamp_Fail, McuServiceType::EnumEventID::eDispId_RENAME_TurnSignalLamp_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_UREA_Abnormal1_Check1_Stop, McuServiceType::EnumEventID::eDispId_RENAME_UREA_Abnormal1_Check1_Stop, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_UREA_Abnormal2_Check2, McuServiceType::EnumEventID::eDispId_RENAME_UREA_Abnormal2_Check2, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_UREA_Abnormal3_Check3, McuServiceType::EnumEventID::eDispId_RENAME_UREA_Abnormal3_Check3, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_UREA_Shortage1, McuServiceType::EnumEventID::eDispId_RENAME_UREA_Shortage1, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_UREA_Shortage2_3, McuServiceType::EnumEventID::eDispId_RENAME_UREA_Shortage2_3, McuServiceType::GroupLevel::eDispId_Group_4},
    {eDispId_UREA_Shortage4, McuServiceType::EnumEventID::eDispId_RENAME_UREA_Shortage4, McuServiceType::GroupLevel::eDispId_Group_1},
    {eDispId_UpdateMode, McuServiceType::EnumEventID::eDispId_RENAME_UpdateMode, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_VESS_Fail, McuServiceType::EnumEventID::eDispId_RENAME_VESS_Fail, McuServiceType::GroupLevel::eDispId_Group_7},
    {eDispId_Welcome, McuServiceType::EnumEventID::eDispId_RENAME_Welcome, McuServiceType::GroupLevel::eDispId_Group_0},
    {eDispId_Wireless_Charger, McuServiceType::EnumEventID::eDispId_RENAME_Wireless_Charger, McuServiceType::GroupLevel::eDispId_Group_0},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_Accessory), McuServiceType::EnumEventID::eDispId_RENAME_Custom_Accessory, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_Close_Popup), McuServiceType::EnumEventID::eDispId_RENAME_Custom_Close_Popup, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_Digital_SpeedMeter), McuServiceType::EnumEventID::eDispId_RENAME_Custom_Digital_SpeedMeter, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_Max), McuServiceType::EnumEventID::eDispId_RENAME_Custom_Max, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_PA_Tab_Info), McuServiceType::EnumEventID::eDispId_RENAME_Custom_PA_Tab_Info, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_PTG_Speed_Change_Fail), McuServiceType::EnumEventID::eDispId_RENAME_Custom_PTG_Speed_Change_Fail, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_Service_Interval_Save), McuServiceType::EnumEventID::eDispId_RENAME_Custom_Service_Interval_Save, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_Service_Interval_Save_Complete), McuServiceType::EnumEventID::eDispId_RENAME_Custom_Service_Interval_Save_Complete, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_Service_Interval_Setting), McuServiceType::EnumEventID::eDispId_RENAME_Custom_Service_Interval_Setting, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Help_Message), McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Help_Message, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_On_Driving), McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_On_Driving, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Park_Assist_Volume), McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Park_Assist_Volume, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_PowerTrunk_Activate), McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_PowerTrunk_Activate, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Reset_Compolete), McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Reset_Compolete, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Reset_Save), McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Reset_Save, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Service_Interval_reset), McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Service_Interval_reset, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Service_Workshop), McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Service_Workshop, McuServiceType::GroupLevel::eDispId_Group_Custom},
    {static_cast<int>(McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Voice_Guidance_Volume), McuServiceType::EnumEventID::eDispId_RENAME_Custom_USM_Voice_Guidance_Volume, McuServiceType::GroupLevel::eDispId_Group_Custom}
};

int size_table = sizeof(tableID) / sizeof(tableID[0]);
}
}
