#include <stdio.h>
#define X 365
#define Y 366
int main()
{
int n;
printf("enter value");
scanf("%d",&n);
if(n>Y||n<X)
printf("invalid number\n");
else{
    if(n==Y)
    printf("leap year");
    else
    printf("normal year");
    
}
return 0;

    
}
