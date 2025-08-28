#include <stdio.h>
int main(){
float P,R,N,I;
printf("enter principal,rate, and time:\n");
scanf("%f %f %f",&P,&R,&N);
I=(P*R*N)/100;
printf("interest=%.2f\n",I);
return 0;
}
