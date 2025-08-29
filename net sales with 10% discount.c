#include <stdio.h>
int main(){
float gross,net;
printf("enter gross sales:\n");
scanf("%f",&gross);
net=gross-(0.10*gross);
printf("net sales =%.2f\n",net);
return 0;
}
