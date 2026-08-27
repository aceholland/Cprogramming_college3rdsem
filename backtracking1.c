#include <stdio.h>
#include <string.h>

void printPermutation(char str[], int idx, char perm[]){
    int len=strlen(str);
    if (idx==len){
        printf("%s\n", perm);
        return;
    }

    for (int i=0; i<len; i++){
        char currChar=str[i];
        char newStr[100]="";
        int newStrIdx=0;

        for (int j=0; j<len; j++){
            if (j!=i){
                newStr[newStrIdx]=str[j];
                newStrIdx++;
            }
        }
        char newPerm[100];
        strcpy(newPerm, perm);
        int permLen=strlen(newPerm);
        newPerm[permLen]=currChar;
        newPerm[permLen+1]='\0';

        printPermutation(newStr, idx+1, newPerm);

    }
}
int main(){
    char str="ABC";
    char perm[]="";

    printPermutation(str, 0, perm);

    return 0;
}