/*================================================================
*    @file             : records.c
*    @brief            : records management high level code
*    @author           : Rewan Dabies
=================================================================*/

/* Linking Section starts */
#include <stdio.h>
#include <stdlib.h>
#include "records.h"
#include "patient.h"
#include "doctor.h"
#include "appointment.h"
#include "billing.h"
/* Linking Section ends */

void managerecords(){
printf("Record Management System\n");
displaypatients();
displaydoctors();
displayappointments();
displaybills();
}

/*==============================================================================

    Date                By                  Description
    ------------        ------------        ------------
    31August2024        Rewan Dabies        creating records management file
==============================================================================*/
