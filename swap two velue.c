#include <stdio.h>
int main(){
int a,b,temp;
printf("enter two numbers:\n");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("after swap :a=%d,b=%d\n",a,b);
return 0;
}
