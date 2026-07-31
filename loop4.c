#include <stdio.h>
int main(){
  int n, copy , rev=0;
  printf("Enter the number: ");
  scanf("%d", &n);
  copy=n;
  while (n>0){
           rev = rev * 10 + (n % 10);
           n/=10;
  }
  printf(" The reverse of this number %d is %d ", copy, rev);
  return 0;
}