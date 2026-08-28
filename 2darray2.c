#include <stdio.h>

int main(){
    int a[3][3], i, j, sum=0;

    //enter the value
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            
            printf("enter the value of 2d array : \n");
            scanf("%d", &a[i][j]);
            sum+=a[i][j];
        }
    }
    printf("The sum is:");
    printf("%d", sum);
    
    return 0;

}