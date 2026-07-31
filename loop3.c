#include<stdio.h>
int main(){
  int fact;
  int n, i;
  printf("Enter the number: ");
  scanf("%d", &n);
  printf("Multiplication Table: \n");
  for (i=1; i<=12; i++){
    printf("%d x %d = %d \n", n,i, i*n);
      }
      return 0;
}