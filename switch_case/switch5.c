#include <stdio.h>
int main(){
    long long int id;
    printf("Enter the id of a student ");
    scanf("%lld", &id);
    
    switch (id){

        case 251013006156:
        printf("Aditya Dugar");
        break; 

        case 251013006182:
        printf("Anushka Verma");
        break;

        case 251013006184:
        printf("Elizabeth");
        break;

        case 251013006185:
        printf("Patrick Holland");
        break; 

        case 251013006186:
        printf("Julian Holland");
        break;

        default:
        printf("Invalid");
        break;
    }
    return 0;

}