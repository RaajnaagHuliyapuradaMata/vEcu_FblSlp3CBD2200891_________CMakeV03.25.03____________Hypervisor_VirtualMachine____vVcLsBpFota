cmake_minimum_required(VERSION 3.23.2)

project(
   Windows_VisualStudio_VirtualEcu_R2024
   VERSION 0.1
)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(
   -g
   -std=c2x
   -Wall
   -Werror
   -Wextra
   -pedantic
   -Wuninitialized
)

add_executable(
   ${PROJECT_NAME}

   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CfgMcalAdc.c
   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CfgSwcServiceDcm.c
   ${PROJECT_SOURCE_DIR}/source/McalAdc/McalAdc.c
#  ${PROJECT_SOURCE_DIR}/source/McalCan/McalCan.c
   ${PROJECT_SOURCE_DIR}/source/McalWdg/McalWdg.c
   ${PROJECT_SOURCE_DIR}/source/LibAutosar/LibAutosar_MemCopy.c
   ${PROJECT_SOURCE_DIR}/source/LibAutosar/LibAutosar_MovingAverage.c
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDcm/infSwcServiceDcmSwcServiceComM_Dsl.c
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDcm/infSwcServiceDcmSwcServiceEcuM_Core.c
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDcm/infSwcServiceDcmSwcServiceSchM_Core.c
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDcm/infSwcServiceDcmSwcServicePduR_eCopyPduRx.c
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDcm/infSwcServiceDcmSwcServicePduR_eCopyPduTx.c
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDcm/infSwcServiceDcmSwcServicePduR_eStartReception.c
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDcm/infSwcServiceDcmSwcServicePduR_vTpRxIndication.c
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDcm/infSwcServiceDcmSwcServicePduR_vTpTxConfirmation.c
   ${PROJECT_SOURCE_DIR}/source/SwcServiceDet/SwcServiceDet.c
   ${PROJECT_SOURCE_DIR}/source/wrappers/SwcApplDcm.c
   ${PROJECT_SOURCE_DIR}/source/wrappers/wrappers.c
)

target_include_directories(
   ${PROJECT_NAME} PUBLIC
   "${PROJECT_SOURCE_DIR}/source/wrappers"
   "${PROJECT_SOURCE_DIR}/source/common"
   "${PROJECT_SOURCE_DIR}/source/ProjectCompiler"
   "${PROJECT_SOURCE_DIR}/source/ProjectCfg"
   "${PROJECT_SOURCE_DIR}/source/LibAutosar"
   "${PROJECT_SOURCE_DIR}/source/McalAdc"
#  "${PROJECT_SOURCE_DIR}/source/McalCan"
   "${PROJECT_SOURCE_DIR}/source/McalMcu"
   "${PROJECT_SOURCE_DIR}/source/McalWdg"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceComM"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceDcm"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceDet"
)

