#include <stdio.h>

int main() {
 int a=0;
 int b=1;
 int n;
    printf("Enter a series:");
    scanf("%d",&n);
    printf("%d%d",a,b);
for (int i=3;i<=n;i++ )// W
{
int term =a+b;
a=b;
b=term;
printf("%d",term);
}

    return 0 ;

}
