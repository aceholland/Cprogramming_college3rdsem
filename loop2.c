int main(){
  int fact=1;
  int n, i;
  printf("Enter the number: ");
  scanf("%d", &n);
  if (n==0){
    fact=1;
    printf("factorial of the number %d is %d ", n, fact );
  }
  else{
     for (i=1; i<=n; i++){
      fact=fact*i;
     }
     printf("factorial of the number %d is %d ", n, fact);
  }
  return 0;
}