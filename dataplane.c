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

printf("\n\nYou are EXCEEDING your average daily use ( %.2f GB/day).\nContinuing this high usage, you'll exceed your data plan %.2f GB \n\n",average,a);


}


 if(user_avg<average){

    
float b = rem_day / rem_gb;

printf("\n%.1f days used, %.1f days remaining\n\n",curr_day,rem_day);

printf("Average daily use: %.2f GB/day\n\n",user_avg);

printf("\n\nYou are at or below your average daily use ( %.2f GB/day).\nYou can use up to %.2f GB/day and stay below your data plan limit" ,user_avg,b);


}

if(gb_used>gb_in_plan){

printf("\n%.1f days used, %.1f days remaining\n\n",curr_day,rem_day);

printf("Average daily use: %.2f GB/day\n\n",user_avg);

printf("\n\n You have already met your limit for this month.  Looks like you're getting some overage charges...");

}


}
