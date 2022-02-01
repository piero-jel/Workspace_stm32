#define version_projectEnable 1 /**<@brief enable/disable the project */
/** \addtogroup version_h version.h module
 ** @{ */
/********************************[ copyright ]*************************************//**
 *@copyright 2016, Luccioni Jesus Emanuel
 * All rights reserved.
 * This file is part of version
 * Redistribution is not allowed on binary and source forms,
 * with or without modification.
 * Use is permitted with prior authorization by
 * the copyright holder
 * 
 meil :
 * 	- piero.jel@gmail.com
 *************************************************************************************/
//
/********************************[Header File]*************************************//**
 * @file    version.h
 * @brief Header File para versionado de codigo y utilidades de
 * perifericos SoC (incluidos en el chip-Microcontrolados)
 * @version 01v00
 * @date  28 Octubre 2016
 * @note none
 * @author Luccioni Jesus Emanuel
 *************************************************************************************/
#ifndef __version_h__ 
#define __version_h__
//
//
#if(version_projectEnable == 1)
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * ==================================[begin of project version ]==================================
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
//
//
//
/*============================[Open, cplusplus]============================*/
//
#ifdef __cplusplus
extern "C" {
#endif 
//
//
/* **********************************************************************************************
 *
 * ==========================[ Begin labels enable/disable functions ]===========================
 *
 * ******************************************************************************************** **/
//
// TODO: labels enable/disable functions
//
#define version_USE_GlobalMacro       	1 /**<@brief enable/disable the use Global Macros/Labels */
#define version_USE_GlobalTypedef     	0	 /**<@brief enable/disable the use Global Typedef */
#define version_USE_GlobalData        	0 /**<@brief enable/disable the use Global Data */
#define version_USE_GlobalMacroApis		1 /**<@brief enable/disable the use Gobal macros functions */
#define version_USE_BARE_METAL			0 /**<@brief enable/disable the use Bare metal, programacion
a bajo nivel de hardware sin S.O */
//
//
/* **********************************************************************************************
 *
 * ==========================[ End labels enable/disable functions ]===========================
 *
 * ******************************************************************************************** **/

//
//
//
/* **********************************************************************************************
 *
 * ==========================[ Begin Global Macros/labels definition]===========================
 *
 * ******************************************************************************************** **/
#if(version_USE_GlobalMacro==1)

/**
* Formato :
* 	<y1>v<y0>{p:e}<x>
*    |    |    |   |
*    |    |    |    --> 0 ~ 9, indicamos los pasos, cambios pequeños locales
*    |    |    --> p : provisoria, en depuracion
*    |    |        e : estable
*    |    --> Cifra menos sisgnificativa del control de versionado 0~9
*    --> Cifra mas Significativa del control de versionado 1~9
*    Amaba cifras conforman la especificacion en cuanto a cambio globales
*    should be
*    		+ 1v0d1
*    		+ 1v1d1
*    		+ 1v2d1
*    		...
*    		..
*    		+ 1v0e1
*    		+ 1v1e1
*    		+ 1v1e2
*
*/


// 
// 
// 
/* ********************************************************************************************** 
 * 
 * ===================[ Begin, Listado Versionado 'd',estado en depuracion ]==================== 
 *
 * ******************************************************************************************** */  




/*--TODO: version 01vXdX */


#define version_List_01v0d0	 0x10d0
#define version_List_01v0d1	 0x10d1
#define version_List_01v0d2	 0x10d2
#define version_List_01v0d3	 0x10d3
#define version_List_01v0d4	 0x10d4
#define version_List_01v0d5	 0x10d5
#define version_List_01v0d6	 0x10d6
#define version_List_01v0d7	 0x10d7
#define version_List_01v0d8	 0x10d8
#define version_List_01v0d9	 0x10d9
//
#define version_List_01v1d0	 0x11d0
#define version_List_01v1d1	 0x11d1
#define version_List_01v1d2	 0x11d2
#define version_List_01v1d3	 0x11d3
#define version_List_01v1d4	 0x11d4
#define version_List_01v1d5	 0x11d5
#define version_List_01v1d6	 0x11d6
#define version_List_01v1d7	 0x11d7
#define version_List_01v1d8	 0x11d8
#define version_List_01v1d9	 0x11d9
//
#define version_List_01v2d0	 0x12d0
#define version_List_01v2d1	 0x12d1
#define version_List_01v2d2	 0x12d2
#define version_List_01v2d3	 0x12d3
#define version_List_01v2d4	 0x12d4
#define version_List_01v2d5	 0x12d5
#define version_List_01v2d6	 0x12d6
#define version_List_01v2d7	 0x12d7
#define version_List_01v2d8	 0x12d8
#define version_List_01v2d9	 0x12d9
//
#define version_List_01v3d0	 0x13d0
#define version_List_01v3d1	 0x13d1
#define version_List_01v3d2	 0x13d2
#define version_List_01v3d3	 0x13d3
#define version_List_01v3d4	 0x13d4
#define version_List_01v3d5	 0x13d5
#define version_List_01v3d6	 0x13d6
#define version_List_01v3d7	 0x13d7
#define version_List_01v3d8	 0x13d8
#define version_List_01v3d9	 0x13d9
//
#define version_List_01v4d0	 0x14d0
#define version_List_01v4d1	 0x14d1
#define version_List_01v4d2	 0x14d2
#define version_List_01v4d3	 0x14d3
#define version_List_01v4d4	 0x14d4
#define version_List_01v4d5	 0x14d5
#define version_List_01v4d6	 0x14d6
#define version_List_01v4d7	 0x14d7
#define version_List_01v4d8	 0x14d8
#define version_List_01v4d9	 0x14d9
//
#define version_List_01v5d0	 0x15d0
#define version_List_01v5d1	 0x15d1
#define version_List_01v5d2	 0x15d2
#define version_List_01v5d3	 0x15d3
#define version_List_01v5d4	 0x15d4
#define version_List_01v5d5	 0x15d5
#define version_List_01v5d6	 0x15d6 
#define version_List_01v5d7	 0x15d7
#define version_List_01v5d8	 0x15d8
#define version_List_01v5d9	 0x15d9
//
#define version_List_01v6d0	 0x16d0
#define version_List_01v6d1	 0x16d1
#define version_List_01v6d2	 0x16d2
#define version_List_01v6d3	 0x16d3
#define version_List_01v6d4	 0x16d4
#define version_List_01v6d5	 0x16d5
#define version_List_01v6d6	 0x16d6
#define version_List_01v6d7	 0x16d7
#define version_List_01v6d8	 0x16d8
#define version_List_01v6d9	 0x16d9
//
#define version_List_01v7d0	 0x17d0
#define version_List_01v7d1	 0x17d1
#define version_List_01v7d2	 0x17d2
#define version_List_01v7d3	 0x17d3
#define version_List_01v7d4	 0x17d4
#define version_List_01v7d5	 0x17d5
#define version_List_01v7d6	 0x17d6
#define version_List_01v7d7	 0x17d7
#define version_List_01v7d8	 0x17d8
#define version_List_01v7d9	 0x17d9
//
#define version_List_01v8d0	 0x18d0
#define version_List_01v8d1	 0x18d1
#define version_List_01v8d2	 0x18d2
#define version_List_01v8d3	 0x18d3
#define version_List_01v8d4	 0x18d4
#define version_List_01v8d5	 0x18d5
#define version_List_01v8d6	 0x18d6
#define version_List_01v8d7	 0x18d7
#define version_List_01v8d8	 0x18d8
#define version_List_01v8d9	 0x18d9
//
#define version_List_01v9d0	 0x19d0
#define version_List_01v9d1	 0x19d1
#define version_List_01v9d2	 0x19d2
#define version_List_01v9d3	 0x19d3
#define version_List_01v9d4	 0x19d4
#define version_List_01v9d5	 0x19d5
#define version_List_01v9d6	 0x19d6
#define version_List_01v9d7	 0x19d7
#define version_List_01v9d8	 0x19d8
#define version_List_01v9d9	 0x19d9
//
/*--TODO: version 02vXdX */
#define version_List_02v0d0	 0x20d0
#define version_List_02v0d1	 0x20d1
#define version_List_02v0d2	 0x20d2
#define version_List_02v0d3	 0x20d3
#define version_List_02v0d4	 0x20d4
#define version_List_02v0d5	 0x20d5
#define version_List_02v0d6	 0x20d6
#define version_List_02v0d7	 0x20d7
#define version_List_02v0d8	 0x20d8
#define version_List_02v0d9	 0x20d9
//
#define version_List_02v1d0	 0x21d0
#define version_List_02v1d1	 0x21d1
#define version_List_02v1d2	 0x21d2
#define version_List_02v1d3	 0x21d3
#define version_List_02v1d4	 0x21d4
#define version_List_02v1d5	 0x21d5
#define version_List_02v1d6	 0x21d6
#define version_List_02v1d7	 0x21d7
#define version_List_02v1d8	 0x21d8
#define version_List_02v1d9	 0x21d9
//
#define version_List_02v2d0	 0x22d0
#define version_List_02v2d1	 0x22d1
#define version_List_02v2d2	 0x22d2
#define version_List_02v2d3	 0x22d3
#define version_List_02v2d4	 0x22d4
#define version_List_02v2d5	 0x22d5
#define version_List_02v2d6	 0x22d6
#define version_List_02v2d7	 0x22d7
#define version_List_02v2d8	 0x22d8
#define version_List_02v2d9	 0x22d9
//
#define version_List_02v3d0	 0x23d0
#define version_List_02v3d1	 0x23d1
#define version_List_02v3d2	 0x23d2
#define version_List_02v3d3	 0x23d3
#define version_List_02v3d4	 0x23d4
#define version_List_02v3d5	 0x23d5
#define version_List_02v3d6	 0x23d6
#define version_List_02v3d7	 0x23d7
#define version_List_02v3d8	 0x23d8
#define version_List_02v3d9	 0x23d9
//
#define version_List_02v4d0	 0x24d0
#define version_List_02v4d1	 0x24d1
#define version_List_02v4d2	 0x24d2
#define version_List_02v4d3	 0x24d3
#define version_List_02v4d4	 0x24d4
#define version_List_02v4d5	 0x24d5
#define version_List_02v4d6	 0x24d6
#define version_List_02v4d7	 0x24d7
#define version_List_02v4d8	 0x24d8
#define version_List_02v4d9	 0x24d9
//
#define version_List_02v5d0	 0x25d0
#define version_List_02v5d1	 0x25d1
#define version_List_02v5d2	 0x25d2
#define version_List_02v5d3	 0x25d3
#define version_List_02v5d4	 0x25d4
#define version_List_02v5d5	 0x25d5
#define version_List_02v5d6	 0x25d6
#define version_List_02v5d7	 0x25d7
#define version_List_02v5d8	 0x25d8
#define version_List_02v5d9  0x25d9
//
#define version_List_02v6d0	 0x26d0
#define version_List_02v6d1	 0x26d1
#define version_List_02v6d2	 0x26d2
#define version_List_02v6d3	 0x26d3
#define version_List_02v6d4	 0x26d4
#define version_List_02v6d5	 0x26d5
#define version_List_02v6d6	 0x26d6
#define version_List_02v6d7	 0x26d7
#define version_List_02v6d8	 0x26d8
#define version_List_02v6d9	 0x26d9
//
#define version_List_02v7d0	 0x27d0
#define version_List_02v7d1	 0x27d1
#define version_List_02v7d2	 0x27d2
#define version_List_02v7d3	 0x27d3
#define version_List_02v7d4	 0x27d4
#define version_List_02v7d5	 0x27d5
#define version_List_02v7d6	 0x27d6
#define version_List_02v7d7	 0x27d7
#define version_List_02v7d8	 0x27d8
#define version_List_02v7d9	 0x27d9
//
#define version_List_02v8d0	 0x28d0
#define version_List_02v8d1	 0x28d1
#define version_List_02v8d2	 0x28d2
#define version_List_02v8d3	 0x28d3
#define version_List_02v8d4	 0x28d4
#define version_List_02v8d5	 0x28d5
#define version_List_02v8d6	 0x28d6
#define version_List_02v8d7	 0x28d7
#define version_List_02v8d8	 0x28d8 
#define version_List_02v8d9	 0x28d9
//
#define version_List_02v9d0	 0x29d0
#define version_List_02v9d1	 0x29d1
#define version_List_02v9d2	 0x29d2
#define version_List_02v9d3	 0x29d3
#define version_List_02v9d4	 0x29d4
#define version_List_02v9d5	 0x29d5
#define version_List_02v9d6	 0x29d6
#define version_List_02v9d7	 0x29d7
#define version_List_02v9d8	 0x29d8
#define version_List_02v9d9	 0x29d9
//
/*--TODO: version 03vXdX */
#define version_List_03v0d0	 0x30d0
#define version_List_03v0d1	 0x30d1
#define version_List_03v0d2	 0x30d2
#define version_List_03v0d3	 0x30d3
#define version_List_03v0d4	 0x30d4
#define version_List_03v0d5	 0x30d5
#define version_List_03v0d6	 0x30d6
#define version_List_03v0d7	 0x30d7
#define version_List_03v0d8	 0x30d8
#define version_List_03v0d9	 0x30d9
//
#define version_List_03v1d0	 0x31d0
#define version_List_03v1d1	 0x31d1
#define version_List_03v1d2	 0x31d2
#define version_List_03v1d3	 0x31d3
#define version_List_03v1d4	 0x31d4
#define version_List_03v1d5	 0x31d5
#define version_List_03v1d6	 0x31d6
#define version_List_03v1d7	 0x31d7
#define version_List_03v1d8	 0x31d8
#define version_List_03v1d9	 0x31d9
//
#define version_List_03v2d0	 0x32d0
#define version_List_03v2d1	 0x32d1
#define version_List_03v2d2	 0x32d2
#define version_List_03v2d3	 0x32d3
#define version_List_03v2d4	 0x32d4 
#define version_List_03v2d5	 0x32d5
#define version_List_03v2d6	 0x32d6
#define version_List_03v2d7	 0x32d7 
#define version_List_03v2d8	 0x32d8
#define version_List_03v2d9	 0x32d9
//
#define version_List_03v3d0	 0x33d0
#define version_List_03v3d1	 0x33d1
#define version_List_03v3d2	 0x33d2
#define version_List_03v3d3	 0x33d3
#define version_List_03v3d4	 0x33d4
#define version_List_03v3d5	 0x33d5
#define version_List_03v3d6	 0x33d6
#define version_List_03v3d7	 0x33d7
#define version_List_03v3d8	 0x33d8
#define version_List_03v3d9	 0x33d9
//
#define version_List_03v4d0	 0x34d0
#define version_List_03v4d1	 0x34d1
#define version_List_03v4d2	 0x34d2
#define version_List_03v4d3	 0x34d3
#define version_List_03v4d4	 0x34d4
#define version_List_03v4d5	 0x34d5
#define version_List_03v4d6	 0x34d6
#define version_List_03v4d7	 0x34d7
#define version_List_03v4d8	 0x34d8
#define version_List_03v4d9	 0x34d9
//
#define version_List_03v5d0	 0x35d0
#define version_List_03v5d1	 0x35d1
#define version_List_03v5d2	 0x35d2
#define version_List_03v5d3	 0x35d3
#define version_List_03v5d4	 0x35d4
#define version_List_03v5d5	 0x35d5
#define version_List_03v5d6	 0x35d6
#define version_List_03v5d7	 0x35d7
#define version_List_03v5d8	 0x35d8
#define version_List_03v5d9	 0x35d9
//
#define version_List_03v6d0	 0x36d0
#define version_List_03v6d1	 0x36d1
#define version_List_03v6d2	 0x36d2
#define version_List_03v6d3	 0x36d3
#define version_List_03v6d4	 0x36d4
#define version_List_03v6d5	 0x36d5
#define version_List_03v6d6	 0x36d6
#define version_List_03v6d7	 0x36d7
#define version_List_03v6d8	 0x36d8
#define version_List_03v6d9	 0x36d9
//
#define version_List_03v7d0	 0x37d0
#define version_List_03v7d1	 0x37d1
#define version_List_03v7d2	 0x37d2
#define version_List_03v7d3	 0x37d3
#define version_List_03v7d4	 0x37d4
#define version_List_03v7d5	 0x37d5
#define version_List_03v7d6	 0x37d6
#define version_List_03v7d7	 0x37d7
#define version_List_03v7d8	 0x37d8
#define version_List_03v7d9	 0x37d9
//
#define version_List_03v8d0	 0x38d0
#define version_List_03v8d1	 0x38d1
#define version_List_03v8d2	 0x38d2
#define version_List_03v8d3	 0x38d3
#define version_List_03v8d4	 0x38d4
#define version_List_03v8d5	 0x38d5
#define version_List_03v8d6	 0x38d6
#define version_List_03v8d7	 0x38d7
#define version_List_03v8d8	 0x38d8
#define version_List_03v8d9	 0x38d9
//
#define version_List_03v9d0	 0x39d0
#define version_List_03v9d1	 0x39d1
#define version_List_03v9d2	 0x39d2
#define version_List_03v9d3	 0x39d3
#define version_List_03v9d4	 0x39d4
#define version_List_03v9d5	 0x39d5
#define version_List_03v9d6	 0x39d6
#define version_List_03v9d7	 0x39d7
#define version_List_03v9d8	 0x39d8
#define version_List_03v9d9	 0x39d9
//
/*--TODO: version 04vXdX */
#define version_List_04v0d0	 0x40d0
#define version_List_04v0d1	 0x40d1
#define version_List_04v0d2	 0x40d2
#define version_List_04v0d3	 0x40d3
#define version_List_04v0d4	 0x40d4
#define version_List_04v0d5	 0x40d5
#define version_List_04v0d6	 0x40d6
#define version_List_04v0d7	 0x40d7
#define version_List_04v0d8	 0x40d8
#define version_List_04v0d9	 0x40d9
//
#define version_List_04v1d0	 0x41d0
#define version_List_04v1d1	 0x41d1
#define version_List_04v1d2	 0x41d2
#define version_List_04v1d3	 0x41d3
#define version_List_04v1d4	 0x41d4
#define version_List_04v1d5	 0x41d5
#define version_List_04v1d6	 0x41d6
#define version_List_04v1d7	 0x41d7
#define version_List_04v1d8	 0x41d8
#define version_List_04v1d9	 0x41d9 
//
#define version_List_04v2d0	 0x42d0
#define version_List_04v2d1	 0x42d1
#define version_List_04v2d2	 0x42d2
#define version_List_04v2d3	 0x42d3
#define version_List_04v2d4	 0x42d4
#define version_List_04v2d5	 0x42d5
#define version_List_04v2d6	 0x42d6
#define version_List_04v2d7	 0x42d7
#define version_List_04v2d8	 0x42d8
#define version_List_04v2d9	 0x42d9
//
#define version_List_04v3d0	 0x43d0
#define version_List_04v3d1	 0x43d1
#define version_List_04v3d2	 0x43d2
#define version_List_04v3d3	 0x43d3
#define version_List_04v3d4	 0x43d4
#define version_List_04v3d5	 0x43d5
#define version_List_04v3d6	 0x43d6
#define version_List_04v3d7	 0x43d7
#define version_List_04v3d8	 0x43d8
#define version_List_04v3d9	 0x43d9
//
#define version_List_04v4d0	 0x44d0
#define version_List_04v4d1	 0x44d1
#define version_List_04v4d2	 0x44d2
#define version_List_04v4d3	 0x44d3
#define version_List_04v4d4	 0x44d4
#define version_List_04v4d5	 0x44d5
#define version_List_04v4d6	 0x44d6
#define version_List_04v4d7	 0x44d7
#define version_List_04v4d8	 0x44d8
#define version_List_04v4d9	 0x44d9
//
#define version_List_04v5d0	 0x45d0
#define version_List_04v5d1	 0x45d1
#define version_List_04v5d2	 0x45d2
#define version_List_04v5d3	 0x45d3
#define version_List_04v5d4	 0x45d4
#define version_List_04v5d5	 0x45d5
#define version_List_04v5d6	 0x45d6
#define version_List_04v5d7	 0x45d7
#define version_List_04v5d8	 0x45d8
#define version_List_04v5d9	 0x45d9
//
#define version_List_04v6d0	 0x46d0
#define version_List_04v6d1	 0x46d1
#define version_List_04v6d2	 0x46d2
#define version_List_04v6d3	 0x46d3
#define version_List_04v6d4	 0x46d4
#define version_List_04v6d5	 0x46d5
#define version_List_04v6d6	 0x46d6
#define version_List_04v6d7	 0x46d7
#define version_List_04v6d8	 0x46d8
#define version_List_04v6d9	 0x46d9
//
#define version_List_04v7d0	 0x47d0
#define version_List_04v7d1	 0x47d1
#define version_List_04v7d2	 0x47d2
#define version_List_04v7d3	 0x47d3
#define version_List_04v7d4	 0x47d4
#define version_List_04v7d5	 0x47d5
#define version_List_04v7d6	 0x47d6
#define version_List_04v7d7	 0x47d7
#define version_List_04v7d8	 0x47d8
#define version_List_04v7d9	 0x47d9
//
#define version_List_04v8d0	 0x48d0
#define version_List_04v8d1	 0x48d0
#define version_List_04v8d2	 0x48d0
#define version_List_04v8d3	 0x48d0
#define version_List_04v8d4	 0x48d0
#define version_List_04v8d5	 0x48d0
#define version_List_04v8d6	 0x48d0
#define version_List_04v8d7	 0x48d0
#define version_List_04v8d8	 0x48d0
#define version_List_04v8d9	 0x48d0
//
#define version_List_04v9d0	 0x49d0
#define version_List_04v9d1	 0x49d1
#define version_List_04v9d2	 0x49d2
#define version_List_04v9d3	 0x49d3
#define version_List_04v9d4	 0x49d4
#define version_List_04v9d5	 0x49d5
#define version_List_04v9d6	 0x49d6
#define version_List_04v9d7	 0x49d7
#define version_List_04v9d8	 0x49d8
#define version_List_04v9d9	 0x49d9 
//
/*--TODO: version 05vXdX */
#define version_List_05v0d0	 0x50d0
#define version_List_05v0d1	 0x50d1
#define version_List_05v0d2	 0x50d2
#define version_List_05v0d3	 0x50d3
#define version_List_05v0d4	 0x50d4
#define version_List_05v0d5	 0x50d5
#define version_List_05v0d6	 0x50d6
#define version_List_05v0d7	 0x50d7
#define version_List_05v0d8	 0x50d8
#define version_List_05v0d9	 0x50d9
//
#define version_List_05v1d0	 0x51d0
#define version_List_05v1d1	 0x51d1
#define version_List_05v1d2	 0x51d2
#define version_List_05v1d3	 0x51d3
#define version_List_05v1d4	 0x51d4
#define version_List_05v1d5	 0x51d5
#define version_List_05v1d6	 0x51d6
#define version_List_05v1d7	 0x51d7
#define version_List_05v1d8	 0x51d8
#define version_List_05v1d9	 0x51d9
//
#define version_List_05v2d0	 0x52d0
#define version_List_05v2d1	 0x52d1
#define version_List_05v2d2	 0x52d2
#define version_List_05v2d3	 0x52d3
#define version_List_05v2d4	 0x52d4
#define version_List_05v2d5	 0x52d5
#define version_List_05v2d6	 0x52d6
#define version_List_05v2d7	 0x52d7
#define version_List_05v2d8	 0x52d8
#define version_List_05v2d9	 0x52d9
//
#define version_List_05v3d0	 0x53d0
#define version_List_05v3d1	 0x53d1
#define version_List_05v3d2	 0x53d2
#define version_List_05v3d3	 0x53d3
#define version_List_05v3d4	 0x53d4
#define version_List_05v3d5	 0x53d5
#define version_List_05v3d6	 0x53d6
#define version_List_05v3d7	 0x53d7
#define version_List_05v3d8	 0x53d8
#define version_List_05v3d9	 0x53d9 
//
#define version_List_05v4d0	 0x54d0
#define version_List_05v4d1	 0x54d1
#define version_List_05v4d2	 0x54d2
#define version_List_05v4d3	 0x54d3
#define version_List_05v4d4	 0x54d4
#define version_List_05v4d5	 0x54d5
#define version_List_05v4d6	 0x54d6
#define version_List_05v4d7	 0x54d7
#define version_List_05v4d8	 0x54d8
#define version_List_05v4d9	 0x54d9
//
#define version_List_05v5d0	 0x55d0
#define version_List_05v5d1	 0x55d1
#define version_List_05v5d2	 0x55d2
#define version_List_05v5d3	 0x55d3
#define version_List_05v5d4	 0x55d4
#define version_List_05v5d5	 0x55d5
#define version_List_05v5d6	 0x55d6
#define version_List_05v5d7	 0x55d7
#define version_List_05v5d8	 0x55d8
#define version_List_05v5d9	 0x55d9
//
#define version_List_05v6d0	 0x56d0
#define version_List_05v6d1	 0x56d1
#define version_List_05v6d2	 0x56d2
#define version_List_05v6d3	 0x56d3
#define version_List_05v6d4	 0x56d4
#define version_List_05v6d5	 0x56d5
#define version_List_05v6d6	 0x56d6
#define version_List_05v6d7	 0x56d7
#define version_List_05v6d8	 0x56d8
#define version_List_05v6d9	 0x56d9
//
#define version_List_05v7d0	 0x57d0
#define version_List_05v7d1	 0x57d1
#define version_List_05v7d2	 0x57d2
#define version_List_05v7d3	 0x57d3
#define version_List_05v7d4	 0x57d4
#define version_List_05v7d5	 0x57d5
#define version_List_05v7d6	 0x57d6
#define version_List_05v7d7	 0x57d7
#define version_List_05v7d8	 0x57d8
#define version_List_05v7d9	 0x57d9 
//
#define version_List_05v8d0	 0x58d0
#define version_List_05v8d1	 0x58d0
#define version_List_05v8d2	 0x58d0
#define version_List_05v8d3	 0x58d0
#define version_List_05v8d4	 0x58d0
#define version_List_05v8d5	 0x58d0
#define version_List_05v8d6	 0x58d0
#define version_List_05v8d7	 0x58d0
#define version_List_05v8d8	 0x58d0
#define version_List_05v8d9	 0x58d0
//
#define version_List_05v9d0	 0x59d0
#define version_List_05v9d1	 0x59d1
#define version_List_05v9d2	 0x59d2
#define version_List_05v9d3	 0x59d3
#define version_List_05v9d4	 0x59d4
#define version_List_05v9d5	 0x59d5
#define version_List_05v9d6	 0x59d6
#define version_List_05v9d7	 0x59d7
#define version_List_05v9d8	 0x59d8
#define version_List_05v9d9	 0x59d9
//
/*--TODO: version 06vXdX */
#define version_List_06v0d0	 0x60d0
#define version_List_06v0d1	 
#define version_List_06v0d2	 
#define version_List_06v0d3	 
#define version_List_06v0d4	 
#define version_List_06v0d5	 
#define version_List_06v0d6	 
#define version_List_06v0d7	 
#define version_List_06v0d8	 
#define version_List_06v0d9	 
//
#define version_List_06v1d0	 0x61d0
#define version_List_06v1d1	 
#define version_List_06v1d2	 
#define version_List_06v1d3	 
#define version_List_06v1d4	 
#define version_List_06v1d5	 
#define version_List_06v1d6	 
#define version_List_06v1d7	 
#define version_List_06v1d8	 
#define version_List_06v1d9	 
//
#define version_List_06v2d0	 0x62d0
#define version_List_06v2d1	 
#define version_List_06v2d2	 
#define version_List_06v2d3	 
#define version_List_06v2d4	 
#define version_List_06v2d5	 
#define version_List_06v2d6	 
#define version_List_06v2d7	 
#define version_List_06v2d8	 
#define version_List_06v2d9	 
//
#define version_List_06v3d0	 0x63d0
#define version_List_06v3d1	 
#define version_List_06v3d2	 
#define version_List_06v3d3	 
#define version_List_06v3d4	 
#define version_List_06v3d5	 
#define version_List_06v3d6	 
#define version_List_06v3d7	 
#define version_List_06v3d8	 
#define version_List_06v3d9	 
//
#define version_List_06v4d0	 0x64d0
#define version_List_06v4d1	 
#define version_List_06v4d2	 
#define version_List_06v4d3	 
#define version_List_06v4d4	 
#define version_List_06v4d5	 
#define version_List_06v4d6	 
#define version_List_06v4d7	 
#define version_List_06v4d8	 
#define version_List_06v4d9	 
//
#define version_List_06v5d0	 0x65d0
#define version_List_06v5d1	 
#define version_List_06v5d2	 
#define version_List_06v5d3	 
#define version_List_06v5d4	 
#define version_List_06v5d5	 
#define version_List_06v5d6	 
#define version_List_06v5d7	 
#define version_List_06v5d8	 
#define version_List_06v5d9	 
//
#define version_List_06v6d0	 0x66d0
#define version_List_06v6d1	 
#define version_List_06v6d2	 
#define version_List_06v6d3	 
#define version_List_06v6d4	 
#define version_List_06v6d5	 
#define version_List_06v6d6	 
#define version_List_06v6d7	 
#define version_List_06v6d8	 
#define version_List_06v6d9	 
//
#define version_List_06v7d0	 0x67d0
#define version_List_06v7d1	 
#define version_List_06v7d2	 
#define version_List_06v7d3	 
#define version_List_06v7d4	 
#define version_List_06v7d5	 
#define version_List_06v7d6	 
#define version_List_06v7d7	 
#define version_List_06v7d8	 
#define version_List_06v7d9	 
//
#define version_List_06v8d0	 0x68d0
#define version_List_06v8d1	 
#define version_List_06v8d2	 
#define version_List_06v8d3	 
#define version_List_06v8d4	 
#define version_List_06v8d5	 
#define version_List_06v8d6	 
#define version_List_06v8d7	 
#define version_List_06v8d8	 
#define version_List_06v8d9	 
//
#define version_List_06v9d0	 0x69d0
#define version_List_06v9d1	 
#define version_List_06v9d2	 
#define version_List_06v9d3	 
#define version_List_06v9d4	 
#define version_List_06v9d5	 
#define version_List_06v9d6	 
#define version_List_06v9d7	 
#define version_List_06v9d8	 
#define version_List_06v9d9	 
//
/*--TODO: version 07vXdX */
#define version_List_07v0d0	 0x70d0
#define version_List_07v0d1	 
#define version_List_07v0d2	 
#define version_List_07v0d3	 
#define version_List_07v0d4	 
#define version_List_07v0d5	 
#define version_List_07v0d6	 
#define version_List_07v0d7	 
#define version_List_07v0d8	 
#define version_List_07v0d9	 
//
#define version_List_07v1d0	 0x71d0
#define version_List_07v1d1	 
#define version_List_07v1d2	 
#define version_List_07v1d3	 
#define version_List_07v1d4	 
#define version_List_07v1d5	 
#define version_List_07v1d6	 
#define version_List_07v1d7	 
#define version_List_07v1d8	 
#define version_List_07v1d9	 
//
#define version_List_07v2d0	 0x72d0
#define version_List_07v2d1	 
#define version_List_07v2d2	 
#define version_List_07v2d3	 
#define version_List_07v2d4	 
#define version_List_07v2d5	 
#define version_List_07v2d6	 
#define version_List_07v2d7	 
#define version_List_07v2d8	 
#define version_List_07v2d9	 
//
#define version_List_07v3d0	 0x73d0
#define version_List_07v3d1	 
#define version_List_07v3d2	 
#define version_List_07v3d3	 
#define version_List_07v3d4	 
#define version_List_07v3d5	 
#define version_List_07v3d6	 
#define version_List_07v3d7	 
#define version_List_07v3d8	 
#define version_List_07v3d9	 
//
#define version_List_07v4d0	 0x74d0
#define version_List_07v4d1	 
#define version_List_07v4d2	 
#define version_List_07v4d3	 
#define version_List_07v4d4	 
#define version_List_07v4d5	 
#define version_List_07v4d6	 
#define version_List_07v4d7	 
#define version_List_07v4d8	 
#define version_List_07v4d9	 
//
#define version_List_07v5d0	 0x75d0
#define version_List_07v5d1	 
#define version_List_07v5d2	 
#define version_List_07v5d3	 
#define version_List_07v5d4	 
#define version_List_07v5d5	 
#define version_List_07v5d6	 
#define version_List_07v5d7	 
#define version_List_07v5d8	 
#define version_List_07v5d9	 
//
#define version_List_07v6d0	 0x76d0
#define version_List_07v6d1	 
#define version_List_07v6d2	 
#define version_List_07v6d3	 
#define version_List_07v6d4	 
#define version_List_07v6d5	 
#define version_List_07v6d6	 
#define version_List_07v6d7	 
#define version_List_07v6d8	 
#define version_List_07v6d9	 
//
#define version_List_07v7d0	 0x77d0
#define version_List_07v7d1	 
#define version_List_07v7d2	 
#define version_List_07v7d3	 
#define version_List_07v7d4	 
#define version_List_07v7d5	 
#define version_List_07v7d6	 
#define version_List_07v7d7	 
#define version_List_07v7d8	 
#define version_List_07v7d9	 
//
#define version_List_07v8d0	 0x78d0
#define version_List_07v8d1	 
#define version_List_07v8d2	 
#define version_List_07v8d3	 
#define version_List_07v8d4	 
#define version_List_07v8d5	 
#define version_List_07v8d6	 
#define version_List_07v8d7	 
#define version_List_07v8d8	 
#define version_List_07v8d9	 
//
#define version_List_07v9d0	 0x79d0
#define version_List_07v9d1	 
#define version_List_07v9d2	 
#define version_List_07v9d3	 
#define version_List_07v9d4	 
#define version_List_07v9d5	 
#define version_List_07v9d6	 
#define version_List_07v9d7	 
#define version_List_07v9d8	 
#define version_List_07v9d9	 
//
/*--TODO: version 08vXdX */
#define version_List_08v0d0	 0x80d0
#define version_List_08v0d1	 
#define version_List_08v0d2	 
#define version_List_08v0d3	 
#define version_List_08v0d4	 
#define version_List_08v0d5	 
#define version_List_08v0d6	 
#define version_List_08v0d7	 
#define version_List_08v0d8	 
#define version_List_08v0d9	 
//
#define version_List_08v1d0	 0x81d0
#define version_List_08v1d1	 
#define version_List_08v1d2	 
#define version_List_08v1d3	 
#define version_List_08v1d4	 
#define version_List_08v1d5	 
#define version_List_08v1d6	 
#define version_List_08v1d7	 
#define version_List_08v1d8	 
#define version_List_08v1d9	 
//
#define version_List_08v2d0	 0x82d0
#define version_List_08v2d1	 
#define version_List_08v2d2	 
#define version_List_08v2d3	 
#define version_List_08v2d4	 
#define version_List_08v2d5	 
#define version_List_08v2d6	 
#define version_List_08v2d7	 
#define version_List_08v2d8	 
#define version_List_08v2d9	 
//
#define version_List_08v3d0	 0x83d0
#define version_List_08v3d1	 
#define version_List_08v3d2	 
#define version_List_08v3d3	 
#define version_List_08v3d4	 
#define version_List_08v3d5	 
#define version_List_08v3d6	 
#define version_List_08v3d7	 
#define version_List_08v3d8	 
#define version_List_08v3d9	 
//
#define version_List_08v4d0	 0x84d0
#define version_List_08v4d1	 
#define version_List_08v4d2	 
#define version_List_08v4d3	 
#define version_List_08v4d4	 
#define version_List_08v4d5	 
#define version_List_08v4d6	 
#define version_List_08v4d7	 
#define version_List_08v4d8	 
#define version_List_08v4d9	 
//
#define version_List_08v5d0	 0x85d0
#define version_List_08v5d1	 
#define version_List_08v5d2	 
#define version_List_08v5d3	 
#define version_List_08v5d4	 
#define version_List_08v5d5	 
#define version_List_08v5d6	 
#define version_List_08v5d7	 
#define version_List_08v5d8	 
#define version_List_08v5d9	 
//
#define version_List_08v6d0	 0x86d0
#define version_List_08v6d1	 
#define version_List_08v6d2	 
#define version_List_08v6d3	 
#define version_List_08v6d4	 
#define version_List_08v6d5	 
#define version_List_08v6d6	 
#define version_List_08v6d7	 
#define version_List_08v6d8	 
#define version_List_08v6d9	 
//
#define version_List_08v7d0	 0x87d0
#define version_List_08v7d1	 
#define version_List_08v7d2	 
#define version_List_08v7d3	 
#define version_List_08v7d4	 
#define version_List_08v7d5	 
#define version_List_08v7d6	 
#define version_List_08v7d7	 
#define version_List_08v7d8	 
#define version_List_08v7d9	 
//
#define version_List_08v8d0	 0x88d0
#define version_List_08v8d1	 
#define version_List_08v8d2	 
#define version_List_08v8d3	 
#define version_List_08v8d4	 
#define version_List_08v8d5	 
#define version_List_08v8d6	 
#define version_List_08v8d7	 
#define version_List_08v8d8	 
#define version_List_08v8d9	 
//
#define version_List_08v9d0	 0x89d0
#define version_List_08v9d1	 
#define version_List_08v9d2	 
#define version_List_08v9d3	 
#define version_List_08v9d4	 
#define version_List_08v9d5	 
#define version_List_08v9d6	 
#define version_List_08v9d7	 
#define version_List_08v9d8	 
#define version_List_08v9d9	 
//
/*--TODO: version 09vXdX */
#define version_List_09v0d0	 0x90d0
#define version_List_09v0d1	 
#define version_List_09v0d2	 
#define version_List_09v0d3	 
#define version_List_09v0d4	 
#define version_List_09v0d5	 
#define version_List_09v0d6	 
#define version_List_09v0d7	 
#define version_List_09v0d8	 
#define version_List_09v0d9	 
//
#define version_List_09v1d0	 0x91d0
#define version_List_09v1d1	 
#define version_List_09v1d2	 
#define version_List_09v1d3	 
#define version_List_09v1d4	 
#define version_List_09v1d5	 
#define version_List_09v1d6	 
#define version_List_09v1d7	 
#define version_List_09v1d8	 
#define version_List_09v1d9	 
//
#define version_List_09v2d0	 0x92d0
#define version_List_09v2d1	 
#define version_List_09v2d2	 
#define version_List_09v2d3	 
#define version_List_09v2d4	 
#define version_List_09v2d5	 
#define version_List_09v2d6	 
#define version_List_09v2d7	 
#define version_List_09v2d8 
#define version_List_09v2d9	 
//
#define version_List_09v3d0	 0x93d0
#define version_List_09v3d1	 
#define version_List_09v3d2	 
#define version_List_09v3d3	 
#define version_List_09v3d4	 
#define version_List_09v3d5	 
#define version_List_09v3d6	 
#define version_List_09v3d7	 
#define version_List_09v3d8	 
#define version_List_09v3d9	 
//
#define version_List_09v4d0	 0x94d0
#define version_List_09v4d1	 
#define version_List_09v4d2	 
#define version_List_09v4d3	 
#define version_List_09v4d4	 
#define version_List_09v4d5	 
#define version_List_09v4d6	 
#define version_List_09v4d7	 
#define version_List_09v4d8	 
#define version_List_09v4d9	 
//
#define version_List_09v5d0	 0x95d0
#define version_List_09v5d1	 
#define version_List_09v5d2	 
#define version_List_09v5d3	 
#define version_List_09v5d4	 
#define version_List_09v5d5	 
#define version_List_09v5d6	 
#define version_List_09v5d7	 
#define version_List_09v5d8	 
#define version_List_09v5d9	 
//
#define version_List_09v6d0	 0x96d0
#define version_List_09v6d1	 
#define version_List_09v6d2	 
#define version_List_09v6d3	 
#define version_List_09v6d4	 
#define version_List_09v6d5	 
#define version_List_09v6d6	 
#define version_List_09v6d7	 
#define version_List_09v6d8	 
#define version_List_09v6d9	 
//
#define version_List_09v7d0	 0x97d0
#define version_List_09v7d1	 
#define version_List_09v7d2	 
#define version_List_09v7d3	 
#define version_List_09v7d4	 
#define version_List_09v7d5	 
#define version_List_09v7d6	 
#define version_List_09v7d7	 
#define version_List_09v7d8	 
#define version_List_09v7d9	 
//
#define version_List_09v8d0	 0x98d0
#define version_List_09v8d1	 
#define version_List_09v8d2	 
#define version_List_09v8d3	 
#define version_List_09v8d4	 
#define version_List_09v8d5	 
#define version_List_09v8d6	 
#define version_List_09v8d7	 
#define version_List_09v8d8	 
#define version_List_09v8d9	 
//
#define version_List_09v9d0	 0x99d0
#define version_List_09v9d1	 
#define version_List_09v9d2	 
#define version_List_09v9d3	 
#define version_List_09v9d4	 
#define version_List_09v9d5	 
#define version_List_09v9d6	 
#define version_List_09v9d7	 
#define version_List_09v9d8	 
#define version_List_09v9d9	 

/*
 * ------------------------------------------------------------------------------------
 * 
 * ==========[ End, version 9vYeX ]========== 
 *
 * ------------------------------------------------------------------------------------*/







/* **********************************************************************************************
 * 
 * ===================[ End, Listado Versionado 'e', estable ]====================
 * 
 * ******************************************************************************************** */

#endif /* #if(version_USE_GlobalMacro==1)*/
/* **********************************************************************************************
 *
 * ==========================[ End Macros/labels Globals ]===========================
 *
 * ******************************************************************************************** **/
/*
 * 
 * *********************************************************************************************
 *
 * ===========================[ Begin Global Macros functions ]==================================
 *
 ********************************************************************************************** */
 #if(version_USE_GlobalMacroApis==1)
/**
 * 
 ******************************************************************
 * @brief Macro API, para obtener el numero interno que hace referencia
 * a la version en uso.
 * @param XvYdZ : referencia a la numeracion
 * should be :
 * 		+ 1v0d0
 * 		+ 1v0d1
 * 		+...
 * @return valor que representa internamente a la version que se
 * hace referenica con la etiqueta 'XvYdZ'
 * @note
 * @par example :
 <pre>
 a = version_GetNumber(1v9d0);
 </pre>
 *********************************************************************/
#define version_GetNumber(XvYdZ)	(version_List_##XvYdZ)/**< Macro p/Obtener el Numero interno */
/*
 *
 *******************************************************************
 * @brief Macro API, para Estblecer el numero interno que hace referencia
 * a la version en uso.
 * @param XvYdZ : referencia a la numeracion
 * should be :
 * 		+ 1v0d0
 * 		+ 1v0d1
 * 		+...
 * @return valor que representa internamente a la version que se
 * hace referenica con la etiqueta 'XvYdZ'
 * @note
 * @par example :
 <pre>
#define CURRENT_VERSION  version_SetNumber(1v9d0)
 </pre>
 *********************************************************************/
#define version_SetNumber(YYvXdX)	(version_List_##YYvXdX)/**< Macro p/Establecer el Numero interno */
/*
 *
 *******************************************************************
 * @brief Macro API, para consultar por el valor de una etiqueta
 * previamente definida con @ref version_SetNumber(XvYdZ)
 * @param label : etiqueta prevaimetne definida de la siguente manera
 <pre>
#define CURRENT_VERSION  version_SetNumber(1v9d0)
 </pre>
 * @param XvYdZ : referencia a la numeracion
 * should be :
 * 		+ 1v0d0
 * 		+ 1v0d1
 * 		+...
 * @return valor que representa internamente a la version que se
 * hace referenica con la etiqueta 'XvYdZ'
 * @note
 * @par example :
 <pre>
#define CURRENT_VERSION  version_SetNumber(1v9d0)
... more code
#if(version_QueryNumber(CURRENT_VERSION,1v9d0))
... more code
#elif(version_QueryNumber(CURRENT_VERSION,1v9d1))
... more code
#endif
 </pre>
 *********************************************************************/
#define version_QueryNumber(labels,YYvXdX) \
	(((version_List_##YYvXdX)^(labels))==0)
    





/*
 * 
 * *******************************************************************
 * @brief Macro API, para Estblecer el numero interno que hace referencia
 * a la version en uso.
 * @param XvYdZ : referencia a la numeracion
 * should be :
 * 		+ 1v0d0
 * 		+ 1v0d1
 * 		+...
 * @return valor que representa internamente a la version que se
 * hace referenica con la etiqueta 'XvYdZ'
 * @note
 * @par example :
 <pre>
#define CURRENT_VERSION  version_SetNumber(1v9d0)
 </pre>
 *********************************************************************/
#define version_SetSubNumber(WpXpYpZ)	version_ListPart_##WpXpYpZ/**< Macro p/Establecer el Numero interno */


/*
 * 
 * *******************************************************************
 * @brief Macro API, para consultar por el valor de una etiqueta
 * previamente definida con @ref version_SetNumber(XvYdZ)
 * @param label : etiqueta prevaimetne definida de la siguente manera
 <pre>
#define CURRENT_VERSION  version_SetNumber(1v9d0)
 </pre>
 * @param XvYdZ : referencia a la numeracion
 * should be :
 * 		+ 1v0d0
 * 		+ 1v0d1
 * 		+...
 * @return valor que representa internamente a la version que se
 * hace referenica con la etiqueta 'XvYdZ'
 * @note
 * @par example :
 <pre>
#define CURRENT_VERSION  version_SetNumber(1v9d0)
... more code
#if(version_QueryNumber(CURRENT_VERSION,1v9d0))
... more code
#elif(version_QueryNumber(CURRENT_VERSION,1v9d1))
... more code
#endif
 </pre>
 *********************************************************************/
#define version_QuerySubNumber(label,WpXpYpZ) \
		(label == version_ListPart_##WpXpYpZ)



        






#endif /* #if(version_USE_GlobalMacroApis==1)*/
/* **********************************************************************************************
 *
 * ===========================[ End Global Macros functions ]==================================
 *
 ********************************************************************************************** */

/*
 * ============================[close, cplusplus]============================
*/
#ifdef __cplusplus
}
#endif
/** @} doxygen end group definition */
/*==============================[end of version]==============================*/
#endif /* #ifndef __version_h__ */
/*
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * ===================================[end of project version]===================================
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#endif /* #if(version_projectEnable == 1) */
