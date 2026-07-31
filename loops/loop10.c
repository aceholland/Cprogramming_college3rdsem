#include <stdio.h>
int main(){
    int i, n, r, k, j,m, result;
    printf("Enter the size of table: ");
    scanf("%d", &n);
   
   
  for (m=0; m<=n; m++){
    int comp1=1;
      for (i=0; i<=m; i++){
          if(i==0){
            comp1=1;
          }else{
          comp1*=i;}
       }
      for (r=0; r<=m; r++){
       int res=1;
       for (j=0; j<=r; j++){
        if (j==0){res=1  ;}else{
        res*=j;}
       }
       int pro=1;
      for (k=0; k<=(m-r); k++){
        if(k==0){
          pro=1;
        }
        else{
        pro*=k;}
      }
      result =comp1/(res*pro);
      printf("%d", result);
    }
    printf("\n");
  }
    return 0;
}