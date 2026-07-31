#include <stdio.h>
int main(){
    int a=0, c;
    int b=1, i, n;
    printf("Enter the number of numbers : ");
    scanf("%d", &n);
    printf("%d %d ", a,b);
    for (i=0; i<n; i++){
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
    
    }
    return 0;
}