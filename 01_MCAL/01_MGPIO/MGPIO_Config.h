/******************************************************************************/
/* Auther                : Moussa Mokhlef                                     */
/* Version               : V1.0.0                                             */
/* Date                  : 6 May 2023                                         */
/* Description           : MGPIO_Config.h                                     */
/* Features              : Configration of GPIO                               */
/******************************************************************************/


/******************************************************************************/
/*              Guard of File with Call on time in .c                         */
/******************************************************************************/

#ifndef MGPIO_CONFIG_H_
#define MGPIO_CONFIG_H_

/***********************************************************************************************************************************************/
/*    ADD | by  : Mohamed Yehia  ,
/*                                                             Configure IF The User'll  Use  These  APIs or NOT
/*                                                              Choose ( MGPIO_ENABLE  or  MGPIO_DISABLE )
/***********************************************************************************************************************************************/

#define MGPIO_PIN_APIs                                                                       MGPIO_ENABLE

#define MGPIO_GROUP_OF_PINs_APIs                                                MGPIO_ENABLE

#define MGPIO_PORTs_APIs                                                                   MGPIO_DISABLE

/***********************************************************************************************************************************************/
#endif /* MGPIO_CONFIG_H_ */
