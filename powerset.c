#include <stdio.h>

int main(){
    int a[3]={10,12,15};
    printf("the power set element are:\n");
    for (int i=0;i<3;i++){
        printf("{%d}\n",a[i]);
    }
        for(int i=0;i<3;i++){
        for (int j=i+1;j<3;j++){
            printf("{%d %d}\n",a[i],a[j]);
        }
    }
        printf("{%d,%d,%d}\n",a[0],a[1],a[2]);
    return 0;
}
