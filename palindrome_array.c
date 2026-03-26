#include <stdio.h>

int main() {
     printf("Enter a number");
int n, temp, r, a[10], i=0;
scanf ("%d", &n);
temp = n;
while(temp !=0)
{
    r=temp %10;
    a[i]=r;
    temp=temp/10;
    i++;
} 
int isPalindrome=1;

for (int j=0; j<1/2; j++){
        if(a[j]!=a[i-j-1]){
            printf("Not palindrome\n");
            isPalindrome=0;
            break;
        }
    }
    if (isPalindrome){
        printf("palindrome\n"); 
    }
    
    return 0;
}
