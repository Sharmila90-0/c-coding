#include <stdio.h>

int main() {
    int a,b, gcd=1;// Write C code here
    printf("enter two integers:");
    scanf("%d%d",&a,&b);
    int c=(a<b)?a:b;
    for(int i=1;i<=c;i++){
        if (a%i==0 && b%i==0)
        gcd=i;
    }
printf("GCD of %d and %d is:%d" ,a,b,gcd);
    return 0;
}
