#include <stdio.h>
int main(){
    int i=1, sum=0;
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        sum+=i;
    }
    printf("Sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}