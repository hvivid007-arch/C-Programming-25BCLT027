#include <stdio.h>
int main(){
int a,b;
printf("enter two numbers:\n");
scanf("%d %d",&a,&b);
printf("sum=%d\n",a+b);
printf("difference=%d\n",a-b);
printf("product=%d\n",a*b);
printf("quotient=%.ff\n",(float)a/b);
return 0;
}
