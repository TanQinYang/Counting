#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
int n=0;
printf("Pls enter a number:");
scanf("%d",&a);
while (a!=0)
{
  if ((a>=10)&&(a<=100))
  {
    n=n+1;
    scanf("%d",&a);
  }

}
printf("%d",n);
    return 0;
}
