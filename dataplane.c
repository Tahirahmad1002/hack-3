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




if(user_avg>average){

float a = user_avg * 30;

printf("\n%.1f days used, %.1f days remaining\n\n",curr_day,rem_day);

printf("Average daily use: %.2f GB/day\n\n",user_avg);

printf("\n\nYou are EXCEEDING your average daily use ( %.2f GB/day).\n
Continuing this high usage, you'll exceed your data plan %.2f GB \n\n",average,a);


}


else if(user_avg<average){

printf("\n%.1f days used, %.1f days remaining\n\n",curr_day,rem_day);

printf("Average daily use: %.2f GB/day\n\n",user_avg);

printf("You are at or below your average daily use (33.333 GB/day).\n
You can use up to 34.482 GB/day and stay below your data plan limit")

}


}
