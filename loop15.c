#include<stdio.h>
int main(){
    int sum=0, i=1;
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("the sum is %d", sum);
    return 0;

}