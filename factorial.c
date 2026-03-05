#include <stdio.h>

int main() {
 int n;
 int fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
for(int i=1;i<=n;i++)// W
{
    fact=fact*i;
}
printf("Factorial is %d",fact);
    return 0;
}
