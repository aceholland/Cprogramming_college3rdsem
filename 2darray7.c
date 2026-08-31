#include <stdio.h>

int main(){
    int a[3][3], i, j, odd=0, even=0;

    
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("enter the value of 2d array : \n");
            scanf("%d", &a[i][j]);
            if (a[i][j]%2==0){even+=1;}
            else {odd+=1;}
        }
    }
    
    printf("odd is %d, even is %d", odd, even);
    return 0;

}