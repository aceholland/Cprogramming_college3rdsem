#include <stdio.h>
int main(){
    int a[3][3], i, j, min=0, max=0;

    //enter the value
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            
            printf("enter the value of 2d array : \n");
            scanf("%d", &a[i][j]);
            if (a[i][j]> max){
               max=a[i][j];
            }
            if (a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    printf("max is %d\n ", max);
    printf("min is %d \n" , min);
    return 0;

}

