/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of COOLSAND Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("COOLSAND SOFTWARE")
*  RECEIVED FROM COOLSAND AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. COOLSAND EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES COOLSAND PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE COOLSAND SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. COOLSAND SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY COOLSAND SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND COOLSAND'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE COOLSAND SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT COOLSAND'S OPTION, TO REVISE OR REPLACE THE COOLSAND SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  COOLSAND FOR SUCH COOLSAND SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *    drv_sap.h
 *
 * Project:
 * --------
 
 *
 * Description:
 * ------------
 *   This file is intends for SAP of driver.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 
 *------------------------------------------------------------------------------
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 
 *============================================================================
 ****************************************************************************/

/*UART*/
ADD_MAG(MSG_ID_UART_READY_TO_READ_IND = DRIVER_MSG_CODE_BEGIN),
ADD_MAG(MSG_ID_UART_READY_TO_WRITE_IND),
ADD_MAG(MSG_ID_UART_DSR_CHANGE_IND),
ADD_MAG(MSG_ID_UART_ESCAPE_DETECTED_IND),
ADD_MAG(MSG_ID_UART_PLUGIN_IND),
ADD_MAG(MSG_ID_UART_PLUGOUT_IND),
/*BMT*/
ADD_MAG(MSG_ID_BMT_CHARGER_IND),
ADD_MAG(MSG_ID_BMT_ADC_DATA_REQ),
ADD_MAG(MSG_ID_BMT_ADC_DATA_CONF),

ADD_MAG(MSG_ID_BMT_ADC_MEASURE_DONE_CONF),
ADD_MAG(MSG_ID_BMT_ADC_ADD_ITEM_REQ),
ADD_MAG(MSG_ID_BMT_ADC_REMOVE_ITEM_REQ),
ADD_MAG(MSG_ID_BMT_ADC_MODIFY_PARAMETERS_REQ),

/*AUX*/
ADD_MAG(MSG_ID_AUX_PLUGIN),
ADD_MAG(MSG_ID_AUX_PLUGOUT),
ADD_MAG(MSG_ID_AUX_DETECT),   /*old*/
ADD_MAG(MSG_ID_AUX_CALL_SETUP_REQ_IND), 
ADD_MAG(MSG_ID_AUX_CALL_CONNECT_REQ_IND),
ADD_MAG(MSG_ID_AUX_CALL_DISCONNECT_REQ_IND),
ADD_MAG(MSG_ID_AUX_ID),
ADD_MAG(MSG_ID_READ_ALL_ADC_CHANNEL_REQ),
ADD_MAG(MSG_ID_ADC_ALL_CHANNEL_CONF),

/*USB*/
ADD_MAG(MSG_ID_USB_A_PLUGIN_IND),
ADD_MAG(MSG_ID_USB_A_PLUGOUT_IND),
ADD_MAG(MSG_ID_USB_B_PLUGIN_IND),
ADD_MAG(MSG_ID_USB_B_PLUGOUT_IND),
ADD_MAG(MSG_ID_DRVUEM_USBCFG_REQ),
ADD_MAG(MSG_ID_DRVUEM_USBCFG_CNF),
ADD_MAG(MSG_ID_USBD_START_HNP),
#ifdef __P_PROPRIETARY_COPYRIGHT__
ADD_MAG(MSG_ID_DRVMMI_MS_INIT_DONE),
#endif
ADD_MAG(MSG_ID_USB_RESET_IND),				/* mass storage messages */
ADD_MAG(MSG_ID_USB_MSDRV_REC_DONE_CONF),
ADD_MAG(MSG_ID_USB_MSDRV_TRX_DONE_CONF),
ADD_MAG(MSG_ID_USB_FT_IND),					/* CDC ACM factory mode messages */
ADD_MAG(MSG_ID_USB_FT_TX_DONE_IND),
ADD_MAG(MSG_ID_USB_FT_RX_DATA_IND),

/*USB video and media msg */
ADD_MAG(MSG_ID_USB_MED_SET_CAMERA_ATTR_REQ),
ADD_MAG(MSG_ID_USB_MED_SET_CAMERA_ATTR_CNF),
ADD_MAG(MSG_ID_MED_USB_START_VIDEO_REQ), 
ADD_MAG(MSG_ID_USB_MED_START_VIDEO_CNF),
ADD_MAG(MSG_ID_USB_MED_CHANGE_VIDEO_IND),
ADD_MAG(MSG_ID_USB_MED_START_STILL_IND),
ADD_MAG(MSG_ID_USB_MED_START_VIDEO_IND),
ADD_MAG(MSG_ID_MED_USB_DEVICE_STILL_REQ),
ADD_MAG(MSG_ID_USB_MED_DEVICE_STILL_CNF),
ADD_MAG(MSG_ID_MED_USB_PAUSE_REQ),
ADD_MAG(MSG_ID_USB_MED_PAUSE_CNF),
ADD_MAG(MSG_ID_MED_USB_RESUME_VIDEO_REQ),
ADD_MAG(MSG_ID_USB_MED_RESUME_VIDEO_CNF),
ADD_MAG(MSG_ID_USB_MED_STOP_IND),
ADD_MAG(MSG_ID_USB_MED_ABORT_IND),
ADD_MAG(MSG_ID_MED_USB_STOP_REQ),
ADD_MAG(MSG_ID_USB_MED_STOP_CNF),

/*USB video internal msg */
ADD_MAG(MSG_ID_USB_ENUM_DONE),
ADD_MAG(MSG_ID_USB_VIDEO_COMPLETE),
ADD_MAG(MSG_ID_USB_VIDEO_DMA_DONE),
ADD_MAG(MSG_ID_USB_VIDEO_CHANGE_SIZE),
ADD_MAG(MSG_ID_USB_STILL_CAPTURE),
ADD_MAG(MSG_ID_USB_STILL_COMPLETE),
ADD_MAG(MSG_ID_USB_VIDEO_STILL_DMA_DONE),
ADD_MAG(MSG_ID_USB_VIDEO_STILL_DMA_PARTIAL),
ADD_MAG(MSG_ID_USB_VIDEO_INCALL_DMA_DONE),
ADD_MAG(MSG_ID_USB_VIDEO_INCALL_TIMEOUT),
ADD_MAG(MSG_ID_USB_VIDEO_INCALL_CHANGE_SIZE),
ADD_MAG(MSG_ID_USB_VIDEO_ABORT),
/*MSDC*/
ADD_MAG(MSG_ID_MSDC_CARD_DETECT_IND),

/*USB charging*/
ADD_MAG(MSG_ID_BMT_USB_IND),
ADD_MAG(MSG_ID_BMT_USB_READ_CALI_DONE_IND),

/*touch panel*/
ADD_MAG(MSG_ID_TP_EVENT_IND),
ADD_MAG(MSG_ID_TP_PEN_DOWN_IND),