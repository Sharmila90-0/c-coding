#include <stdio.h>
int gcd(int a,int b);
int main() 
{
  int a,b;  // Write C code here
    printf("Enter two integer:");
scanf("%d %d",&a,&b);
printf("gcd of %d and %d is:%d",a,b,gcd(a,b));
 return 0;
}
    int gcd(int a,int b)
    {
        if(b==0)
        return a;
        else
        return gcd(b, a%b);
        
}
