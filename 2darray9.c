#include <stdio.h>

int main(){
    int a[3][3], i, j;

    //enter the value
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("enter the value of 2d array : \n");
            scanf("%d", &a[i][j]);
        }
    }
    
     //display the array
    for (i=0; i<3; i++){
        printf("\n");
        for (j=0; j<3; j++){
            printf("%d " , a[i][j]);
        }
    }
    for (i=0; i<3; i++){
        printf("\n");
        int sum=0;
        for (j=0; j<3; j++){
            sum+=a[j][i];
        }
        printf("sum of %d th column is %d", i, sum);
    }
    return 0;

}