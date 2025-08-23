#include <stdio.h>
int main(){
int minutes;
float hours;
printf("enter minutes:\n");
scanf("%d",&minutes);
hours=(float)minutes/60;
printf("hours=%.2f\n",hours);
return 0;
}
