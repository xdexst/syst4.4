#include <stdio.h>
#include <math.h>
int main () {
int a=1;
int n=0;
int S=0;
printf("Enter numbers to find arithmetic mean. If you want to finish, enter '0'. \n ");
do {
printf("Enter a number: a= ");
scanf("%d",&a);
S=S+a;
n++;
}
while (a!=0);
printf("Arithmetic mean is %d ",(S/(n)));
return 0;
}
