#include <stdio.h>

int main() {
 int original;
 int reverse=1;
 int remainder;
 int num;
    printf("Enter a number:");
    scanf("%d",&num);
    original=num;
    while(num!=0)
{
      remainder=num%10;
      reverse=reverse+10*remainder;
      num=num/10;
}
if(original==reverse)
{
    printf("is a palindrome");
}
else
{
printf("is not a palindrome");
}
    return 0 ;
}
