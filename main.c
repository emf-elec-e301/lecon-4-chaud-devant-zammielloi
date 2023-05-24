/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18855
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include "ultrason.h"

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    while (1)
    {
        /* 
         * Ajouter votre code à partir de ce point
         * 
         * Les instructions d'attente suivantes sont disponibles:
         * - DELAY_milliseconds(xx); xx doit être un nombre entier positif
         * - DELAY_microseconds(xx); xx doit être un nombre entier positif
         * 
         * Les instructions permettant de modifier la pattes du buzzer sont:
         * - IO_BUZZER_SetHigh();
         * - IO_BUZZER_SetLow();
         * - IO_BUZZER_Toggle();
         * 
         * Les fonctions permettant d'utiliser le capteur à ultrason des yeux
         * se trouvent dans les fichiers ultrason.c et ultrason.h
         * - Pour génèrer une impulsion de 5us et mesurer l'impulsion de retour
         *   void yeux_start_mesure(void);
         * - Pour avoir la durée de l'impulsion de retour en us
         *   double yeux_get_largeur_impulsion_us(void);
         * - Pour convertire la durée de l'impulsion de retour en distance en mm
         *   uint16_t yeux_convertir_impulsion_vers_distance_mm(double largeur_impulsion_us)
         * 
         */
        

    }
}
/**
 End of File
*/
