# include <stdio.h>
int main (){
long bytes;
printf("enter bytes:\n");
scanf("%1d",&bytes);
printf("kb=%.2f\n",bytes/1024.0);
printf("mb=%.2f\n",bytes/(1024.0*1024));
printf("gb=%.2f\n",bytes/(1024.0*1024*1024));
return 0;
}
