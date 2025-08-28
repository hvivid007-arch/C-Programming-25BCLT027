#include <stdio.h>
int main(){
float L,area,peri;
printf("enter lenth of side:\n");
scanf("%f",&L);
area=L*L;
peri=4*L;
printf("Area=%.2f,Perimeter=%.2f\n",area,peri);
return 0;
}
