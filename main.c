#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j=0;
    printf("Enter any number:");
    scanf("%d",&n);

for(i=0;i<=n;i++)
{
    if(n%i==0)
        j++;
}
if(j==2)
{
    printf("%d is a prime number",n);
}
else
{
    printf("%d is not a prime number",n);
}
    return 0;
}
