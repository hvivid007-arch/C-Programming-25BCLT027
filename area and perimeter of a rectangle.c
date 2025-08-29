#include <stdio.h>
int main(){
float L,B,area,peri;
printf("enter lenght and breadth:\n");
scanf("%f %f",&L,&B);
area=L*B;
peri=2*(L+B);
printf("Area=%.2f perimeter=%.2f\n",area,peri);
return 0;
}
