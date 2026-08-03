#include<stdio.h>
int main(){
    int max=-1,n;
    printf("Enter the number");
    scanf("%d", &n);
    do{
        if ((n%10)>max){
            max=n%10;
        }
        n/=10;
    }while (n!=0);
    printf("The maximum is: %d ", max);
    return 0;
}
