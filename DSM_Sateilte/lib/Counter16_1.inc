;;*****************************************************************************
;;*****************************************************************************
;;  FILENAME: Counter16_1.inc
;;   Version: 2.5, Updated on 2015/3/4 at 22:23:43
;;  Generated by PSoC Designer 5.4.3191
;;
;;  DESCRIPTION: Assembler declarations for the Counter16 user module interface
;;-----------------------------------------------------------------------------
;;  Copyright (c) Cypress Semiconductor 2015. All Rights Reserved.
;;*****************************************************************************
;;*****************************************************************************

include "m8c.inc"


;--------------------------------------------------
; Constants for Counter16_1 API's.
;--------------------------------------------------

Counter16_1_CONTROL_REG_START_BIT:         equ 0x01    ; Control register start bit
Counter16_1_INT_REG:                       equ 0x0e1
Counter16_1_INT_MASK:                      equ 0x02


;--------------------------------------------------
; Constants for Counter16_1 user defined values
;--------------------------------------------------

Counter16_1_PERIOD:                        equ 0xffff
Counter16_1_COMPARE_VALUE:                 equ 0x0


;--------------------------------------------------
; Register Address Constants for Counter16_1
;--------------------------------------------------

Counter16_1_COUNTER_LSB_REG:           equ 0x20   ; DR0 Counter register
Counter16_1_COUNTER_MSB_REG:           equ 0x24
Counter16_1_PERIOD_LSB_REG:            equ 0x21   ; DR1 Period register
Counter16_1_PERIOD_MSB_REG:            equ 0x25
Counter16_1_COMPARE_LSB_REG:           equ 0x22   ; DR2 CompareValue register
Counter16_1_COMPARE_MSB_REG:           equ 0x26
Counter16_1_CONTROL_LSB_REG:           equ 0x23   ; Control register
Counter16_1_CONTROL_MSB_REG:           equ 0x27
Counter16_1_FUNC_LSB_REG:              equ 0x20   ; Function register
Counter16_1_FUNC_MSB_REG:              equ 0x24
Counter16_1_INPUT_LSB_REG:             equ 0x21   ; Input register
Counter16_1_INPUT_MSB_REG:             equ 0x25
Counter16_1_OUTPUT_LSB_REG:            equ 0x22   ; Output register
Counter16_1_OUTPUT_MSB_REG:            equ 0x26


;--------------------------------------------------
; Counter16_1 Macro 'Functions'
;--------------------------------------------------

   macro Counter16_1_Start_M
   or    reg[Counter16_1_CONTROL_LSB_REG],  Counter16_1_CONTROL_REG_START_BIT
   endm

   macro Counter16_1_Stop_M
   and   reg[Counter16_1_CONTROL_LSB_REG], ~Counter16_1_CONTROL_REG_START_BIT
   endm

   macro Counter16_1_EnableInt_M
   M8C_EnableIntMask Counter16_1_INT_REG, Counter16_1_INT_MASK
   endm

   macro Counter16_1_DisableInt_M
   M8C_DisableIntMask Counter16_1_INT_REG, Counter16_1_INT_MASK
   endm


; end of file Counter16_1.inc

