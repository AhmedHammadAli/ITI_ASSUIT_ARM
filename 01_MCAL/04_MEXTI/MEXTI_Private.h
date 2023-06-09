/***********************************************************************************************************/
/* Author :                           Mohamed Yehia El-Greatly                                             */
/* Description :                         MEXTI_Private.h                                                   */
/***********************************************************************************************************/
/* Version :V1.0.0                                                                                         */
/* Date :     19 May 2023                                                                                  */
/***********************************************************************************************************/

/***********************************************************************************************************/
/*                               Guard of File with Call on time in .c                                     */
/***********************************************************************************************************/
/*#########################################################################################################*/
#ifndef INCLUDE_MEXTI_PRIVATE_H_
#define INCLUDE_MEXTI_PRIVATE_H_
/*#########################################################################################################*/

/***********************************************************************************************************/
/*                          Object Like Macro For  Base Address Registers                                  */
/***********************************************************************************************************/

#define EXTI_IMR_BASE_ADDRESS       0x40013C00

#define  EXTI_x_OFFSET_ADDRESS        0x4

/***********************************************************************************************************/
/*                                  Define MEXTI  Registers Names                                          */
/***********************************************************************************************************/
typedef enum
{
	IMR  = 0 ,
	EMR      ,
	RTSR     ,
	FTSR     ,
	SWIER    ,
	PR
}MEXTI_RegName_t;
/***********************************************************************************************************/
/*                              MEXTI Registers Definition by Macro Function                               */
/***********************************************************************************************************/

#define  EXTI_REG( _COPY_REG_NAME_  )     ( ( volatile u32* )( ( EXTI_IMR_BASE_ADDRESS ) + ( ( _COPY_REG_NAME_ ) * ( EXTI_x_OFFSET_ADDRESS ) ) ) )

/***********************************************************************************************************/
/*                                MEXTI Registers Definition by structure                                  */
/***********************************************************************************************************/

typedef struct
{
    volatile u32 IMR      ;
    volatile u32 EMR      ;
    volatile u32 RTSR     ;
    volatile u32 FTSR     ;
    volatile u32 SWIER    ;
    volatile u32 PR       ;
}MEXTI_x_t;

/***********************************************************************************************************/
/*                                       MEXTI Registers pointer                                           */
/***********************************************************************************************************/

#define MEXTI                 ((MEXTI_x_t*)(EXTI_IMR_BASE_ADDRESS))

/***********************************************************************************************************/
/*                                       EXTICR Registers pointer                                          */
/***********************************************************************************************************/

#define SYSCFG_EXTICR(  INDx  )             * ( volatile u32* )( (0x40013808) +( (EXTI_x_OFFSET_ADDRESS) * (INDx) ) )
/***********************************************************************************************************/
/*                                         MEXTI   BIT- MASK                                               */
/***********************************************************************************************************/


/***********************************************************************************************************/
/*                                       THE END OF DIFINITION                                             */
/***********************************************************************************************************/
/*#########################################################################################################*/
#endif /* INCLUDE_MEXTI_PRIVATE_H_ */
/*#########################################################################################################*/
