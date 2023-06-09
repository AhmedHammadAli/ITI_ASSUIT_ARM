/***********************************************************************************************************/
/* Author :                           Mohamed Yehia El-Greatly                                             */
/* Description :                          HCLCD_Config.h                                                   */
/***********************************************************************************************************/
/* Version :V1.0.0                                                                                         */
/* Date :     13 May 2023                                                                                  */
/***********************************************************************************************************/
/*#########################################################################################################*/
/***********************************************************************************************************/
/*                           Guard for calling one time in .c files                                        */
/***********************************************************************************************************/
/*#########################################################################################################*/
#ifndef HAL_LCD_LCD_CFG_H_
#define HAL_LCD_LCD_CFG_H_
/***********************************************************************************************************/
/*                                 Configure The LCD MODE                                                  */
/*                         Choose ( _8_BIT_MODE_  or  _4_BIT_MODE_ )                                       */
/***********************************************************************************************************/
#define     HCLCD_MODE                           _4_BIT_MODE_
/***********************************************************************************************************/
/*                                  Configure The LCD PORT                                                 */
/*            Choose The Connection Of All PINs with  ( _ONE_PORT_  or  _TWO_PORT_  )                      */
/*               Choose  From (  MGPIO_PORTA , MGPIO_PORTB , MGPIO_PORTC )                                 */
/***********************************************************************************************************/
#define     HCLCD_PORT_MODE                       _ONE_PORT_
/***********************************************************************************************************/
typedef enum
{
#if    HCLCD_PORT_MODE         ==         _ONE_PORT_

	HCLCD_PORT_ALLPINs          =  MGPIO_PORTB ,
	HCLCD_PORT_CLOCK            =  MRCC_GPIOB_EN,
#elif    HCLCD_PORT_MODE      ==         _TWO_PORT_

	HCLCD_PORT_DataPINs         =  MGPIO_PORTB ,
	HCLCD_PORT_ControlPINs    =  MGPIO_PORTC ,
	HCLCD_PORTData_CLK          = MRCC_GPIOB_EN,
	HCLCD_PORTControl_CLK     = MRCC_GPIOC_EN,
#endif
}HCLCD_PORTs;
/***********************************************************************************************************/
/*                                Configure The LCD PINs                                                   */
/*                  Choose From ( MGPIO_PIN0 -> MGPIO_PIN15 ) if PORT A or B                               */
/*                  Choose From ( MGPIO_PIN13 -> MGPIO_PIN15 ) if PORT   C                                 */
/***********************************************************************************************************/
typedef enum
{
#if HCLCD_MODE                       ==            _8_BIT_MODE_

	HCLCD_RS    = MGPIO_PIN0,       //Control PINs
	HCLCD_RW,
	HCLCD_E      = MGPIO_PIN2,

	HCLCD_D0   = MGPIO_PIN3,        //Data PINs
	HCLCD_D1,
	HCLCD_D2,
	HCLCD_D3,
	HCLCD_D4,
	HCLCD_D5,
	HCLCD_D6,
	HCLCD_D7   = MGPIO_PIN10,

#elif HCLCD_MODE                    ==            _4_BIT_MODE_

	HCLCD_RS   = MGPIO_PIN0,       //Control PINs
	HCLCD_RW,
	HCLCD_E     = MGPIO_PIN2,

	HCLCD_D4 = MGPIO_PIN3,         //Data PINs
	HCLCD_D5,
	HCLCD_D6,
	HCLCD_D7 =MGPIO_PIN6,

#endif
}HCLCD_PINs;

/***********************************************************************************************************/
/*                                            The   End                                                    */
/***********************************************************************************************************/
#endif /* HAL_LCD_LCD_CFG_H_ */
