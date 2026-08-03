#include <stdio.h>
#include <math.h>
int main() {
    int i = 1;
    int n;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    int copy = n;
    int sum = 0, dig;
    
    do {
        dig = n % 10;
        sum += pow(dig, 3);
        n /= 10;
    } while (n != 0);
    
    if (copy == sum)
        printf("It is an Armstrong number.\n");
    else
        printf("It is not an Armstrong number.\n");
        
    return 0;
}
