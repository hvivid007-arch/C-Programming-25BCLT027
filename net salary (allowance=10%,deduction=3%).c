#iclude <stdio.h>
int main(){
float gross,allowance,deduction,net;
printf("enter gross salary:\n");
scanf("%f",&gross);
allowance=0.10*gross;
deduction=0.03*gross;
net=gross+allowance-deduction;
printf("net salary=%,2f\n",net);
return 0;
}
