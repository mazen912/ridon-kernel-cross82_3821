/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * med_audio_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related function or definition.
 *
 * Author:
 * -------
 * Chipeng Chang
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$

 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef MED_AUDIO_CUSTOM_H
#define MED_AUDIO_CUSTOM_H
// normal mode parameters ------------------------
#define NORMAL_SPEECH_OUTPUT_FIR_COEFF \
      155,  -304,   184,  -243,    -6,\
     -231,   -35,   -48,    36,   454,\
     -504,   443,   -69,  1268, -1321,\
     1925, -1054,  1335, -5587,  4143,\
    -6767, 24856, 24856, -6767,  4143,\
    -5587,  1335, -1054,  1925, -1321,\
     1268,   -69,   443,  -504,   454,\
       36,   -48,   -35,  -231,    -6,\
     -243,   184,  -304,   155,     0,\
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// headset mode parameters ------------------------
#define HEADSET_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,  0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// handfree mode parameters ------------------------
#define HANDFREE_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,  0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// VoIP_BT  mode parameters ------------------------
#define VOIPBT_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,  0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// VoIP_NORMAL mode parameters ------------------------
#define VOIPNORMAL_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,  0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// VoIP_Handfree mode parameters ------------------------
#define VOIPHANDFREE_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// AUX1 mode parameters ------------------------
#define AUX1_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
// AUX2 mode parameters ------------------------
#define AUX2_SPEECH_OUTPUT_FIR_COEFF \
    32767,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    0,	  0,	 0, 	0,   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    \
    32767,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0, \
    0,	  0,	 0, 	0,	   0
#define SPEECH_OUTPUT_MED_FIR_COEFF \
    NORMAL_SPEECH_OUTPUT_FIR_COEFF,\
    HEADSET_SPEECH_OUTPUT_FIR_COEFF ,\
    HANDFREE_SPEECH_OUTPUT_FIR_COEFF ,\
    VOIPBT_SPEECH_OUTPUT_FIR_COEFF,\
    VOIPNORMAL_SPEECH_OUTPUT_FIR_COEFF,\
    VOIPHANDFREE_SPEECH_OUTPUT_FIR_COEFF,\
    AUX1_SPEECH_OUTPUT_FIR_COEFF,\
    AUX2_SPEECH_OUTPUT_FIR_COEFF
#define SPEECH_INPUT_MED_FIR_COEFF\
      198,  -133,   368,  -218,    48,\
     -385,  -258,  -178,  -177,   408,\
     -195,   682,  -703,  1170,  -873,\
     2197, -1685,  2695, -4288,  4794,\
    -9330, 27254, 27254, -9330,  4794,\
    -4288,  2695, -1685,  2197,  -873,\
     1170,  -703,   682,  -195,   408,\
     -177,  -178,  -258,  -385,    48,\
     -218,   368,  -133,   198,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0
#define FIR_output_index \
    0,0,0,0,0,0,0,0
#define FIR_input_index \
    0,0,0,0,0,0,0,0
#define MED_SPEECH_NORMAL_MODE_PARA \
     0,     0,     0,     0,     0,     0,     0,     0,\ 
     0,     0,     0,     0,     0,     0,     0,     0 
#define MED_SPEECH_EARPHONE_MODE_PARA \
     0,     0,     0,     0,     0,     0,     0,     0,\ 
     0,     0,     0,     0,     0,     0,     0,     0 
#define MED_SPEECH_BT_EARPHONE_MODE_PARA \
     0,     0,     0,     0,     0,     0,     0,     0,\ 
     0,     0,     0,     0,     0,     0,     0,     0 
#define MED_SPEECH_LOUDSPK_MODE_PARA \
     0,     0,     0,     0,     0,     0,     0,     0,\ 
     0,     0,     0,     0,     0,     0,     0,     0 
#define MED_SPEECH_CARKIT_MODE_PARA \
     0,     0,     0,     0,     0,     0,     0,     0,\ 
     0,     0,     0,     0,     0,     0,     0,     0 
#define MED_SPEECH_BT_CORDLESS_MODE_PARA \
    0,      0,      0,      0,      0,      0,      0,      0, \
    0,      0,      0,      0,      0,      0,      0,      0
#define MED_SPEECH_AUX1_MODE_PARA \
    0,      0,      0,      0,      0,      0,      0,      0, \
    0,      0,      0,      0,      0,      0,      0,      0
#define MED_SPEECH_AUX2_MODE_PARA \
    0,      0,      0,      0,      0,      0,      0,      0, \
    0,      0,      0,      0,      0,      0,      0,      0
#endif
