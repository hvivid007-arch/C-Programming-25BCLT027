#include <stdio.h>
int main(){
float A1,A2,A3,total,avg;
printf("enter marks of three subjects:\n");
scanf("%F %f %f",&A1,&A2,&A3);
total=A1+A2+A3;
avg=total/3;
printf("total=%.2f,average=%.2f\n",total,avg);
return 0;
}
