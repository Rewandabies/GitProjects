/*================================================================
*    @file             : utilities.c
*    @brief            : utilities for clinic management system 
*    @author           : Rewan Dabies
=================================================================*/

/* Linking Section starts */
#include <stdio.h>
#include <stdlib.h>
#include "utilities.h"
/* Linking Section ends */

int generateId(){
static int id  = 0;
return (++id);
}

int generatepatientId(){
static int id  = 0;
return (++id);
}

int generatedoctorId(){
static int id  = 0;
return (++id);
}

int generateappointmentId(){
static int id  = 0;
return (++id);
}

int generatebillId(){
static int id  = 0;
return (++id);
}

/*=======================================================================================

    Date                By                  Description
    ------------        ------------        ------------
    31August2024        Rewan Dabies        creating utilities file for clinic management 
=========================================================================================*/

