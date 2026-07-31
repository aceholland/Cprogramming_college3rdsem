#include <stdio.h>
int main(){
    int n, i;
    int count=0;
    printf("Enter number to be checked: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        if (n%i==0){
            count+=1;
        }
    }
    if (count==2){
        printf("The number %d is Prime number", n);
    }
    else{
        printf("The number %d is not a prime number", n);
    }
    return 0;
}
