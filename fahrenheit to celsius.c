#include <stdio.h>
int main(){
float f,c;
printf("enter temperature in fahrenheit:\n");
scanf("%f",&f);
c=(5.0/9.0)*(f-32);
printf("celsius=%.2f\n",c);
return 0;
}
