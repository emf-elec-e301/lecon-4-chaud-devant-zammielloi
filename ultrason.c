/*
 * File:   ultrason.c
 * Author: olivier Nasrallah
 *
 * Created on May 13, 2022, 5:35 PM
 */


#include "mcc_generated_files/mcc.h"
#include "ultrason.h"

void yeux_start_mesure()
{
    //Start a peripheral measurement
    SMT1_ManualTimerReset();
    SMT1_ManualPulseWidthBufferUpdate();
    SMT1CON0bits.EN=0; //Disable SMT
    //SMT1SIGPPS = 0x11;   //RC1->SMT1:SMT1SIG; 
    RC1_SetDigitalOutput();
    RC1_SetHigh();
    __delay_us(5);
    RC1_SetLow();
    RC1_SetDigitalInput();
    SMT1CON0bits.EN=1; //Enable SMT
    SMT1_DataAcquisitionEnable();
    while(!SMT1_IsSignalAcquisitionInProgress()); //While no measurement started
    while(SMT1_IsSignalAcquisitionInProgress()); //While no measurement stoped
    SMT1_DataAcquisitionDisable();
}

double yeux_get_largeur_impulsion_us()
{
    return (SMT1_GetCapturedPulseWidth()>>1)*0.0625;
}

uint16_t yeux_convertir_impulsion_vers_distance_mm(double largeur_impulsion_us)
{
    return (uint32_t)(largeur_impulsion_us*0.17); //*340[m/s]/2
}
