#ifndef _CFGSWCSERVICECOMM_H
#define _CFGSWCSERVICECOMM_H
/******************************************************************************/
/* File   : CfgSwcServiceComM.h                                               */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright � 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* git@github.com:RaajnaagHuliyapuradaMata/<module_name>.git                  */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Types_SwcServiceComM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define COMM_MODULE_ID                                                       12u
#define COMM_VENDOR_ID                                                        1u
#define COMM_AR_RELEASE_MAJOR_VERSION                                         4u
#define COMM_AR_RELEASE_MINOR_VERSION                                         2u
#define COMM_AR_RELEASE_REVISION_VERSION                                      2u
#define COMM_SW_MAJOR_VERSION                                                 9u
#define COMM_SW_MINOR_VERSION                                                 0u
#define COMM_SW_PATCH_VERSION                                                 0u
#define COMM_VARIANT_PRECOMPILE                                             0x00
#define COMM_VARIANT_POSTBUILD_LOADABLE                                     0x01
#define COMM_CONFIGURATION_VARIANT                       COMM_VARIANT_PRECOMPILE
#define COMM_ECUC_RB_RTE_IN_USE                                          STD_OFF
#define ComMConf_ComMChannel_ComMChannel_Can_Network_0_Channel ((Type_StackCom_tHandleNetwork)0)

#define ComMConf_ComMUser_ComMUser_Can_Network_0_Channel ((ComM_UserHandleType)(0))

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
#endif
