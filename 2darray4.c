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
   //right diagonal
    printf("the right diagonal\n");
    for (i=0; i<3; i++){
        for (j =0; j<3; j++){
                 if (i==j){
                     printf("%d\n", a[i][j]);
           }
        }
    }
    printf("the left diagonal\n");
    //left diagonal
    
            for (i=0; i<3; i++){
        for (j =0; j<3; j++){
                if ((i+j)==2){
                    printf("%d\n", a[i][j]);
                }
        }
    }
    return 0;

}