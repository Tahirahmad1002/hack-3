// name : Tahir ahmad
// Reg no :SP23-BSE-098

#include <stdio.h>
#include<stdlib.h>
int main (int argv, char **argc) {


float gb_in_plan = atof(argc[1]);

float curr_day = atof(argc[2]);

float gb_used = atof(argc[3]);

// i convert the inputs of command line arguement into float

float average = gb_in_plan/30;

float rem_gb = gb_used - gb_in_plan;

float user_avg = gb_used/curr_day;

float rem_day = 30-curr_day;


printf("\n%.1f days used, %.1f days remaining\n\n",curr_day,rem_day);




}
