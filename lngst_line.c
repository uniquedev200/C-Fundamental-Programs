#include <stdio.h>
#include <string.h>

void copy(char a[],char b[]);

void main(){
    char longLine[2500];//defining a standard max length
    char tempLine[2500];//defining a standard max length
    longLine[0] = '\0';
    int i = 0;
    char c = getchar();
    while (c!=EOF){
        if(c == '\n'){
            tempLine[i] = '\0';
            if(strlen(tempLine)<=strlen(longLine)){
                i = -1;
                tempLine[0] = '\0';
            }
            else{
                i = -1;
                copy(tempLine,longLine);
                tempLine[0] = '\0';
            }
        }
        else{
            tempLine[i] = c;
        }
        c = getchar();
        i++;
    }
    printf("Longest Line: %s",longLine);
}

//custom copy function to copy the tempLine to longLine if needed
void copy(char arr1[],char arr2[]){
    int len = strlen(arr1);
    int i=0;
    while(i<len){
        arr2[i] = arr1[i];
        i++;
    }
    arr2[i] = '\n';

}