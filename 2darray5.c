#include <stdio.h>

int main(){
    int a[2][3], i, j;

    //enter the value
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("enter the value of 2d array : \n");
            scanf("%d", &a[i][j]);
        }
    }
    
    //display the array
    for (i=0; i<2; i++){
        printf("\n");
        for (j=0; j<3; j++){
            printf("%d " , a[i][j]);
        }
    }
    return 0;

}