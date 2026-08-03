#include<stdio.h>
int main(){
    int a=0, b=1,c, n, count=0;
    printf("Enter number of terms:");
    scanf("%d", &n);
    printf("%d, %d,", a,b);
    do{
        c=a+b;
       printf("%d, ", c);
        a=b;
        b=c;
        count+=1;
    } while(count<n-1);
    return 0;
}