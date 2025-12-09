#include <stdio.h>
#include <string.h>

//Program to take input and count the number of words and newlines
void main(){
    int words = 0;
    int nl = 0;
    char c = getchar();
    bool inword = false;
    while (c!=EOF){
        if(c == ' '){
            if(inword){
                words ++;
                inword = false;
            }

        }
        else if(c == '\n'){
            if(inword){
                words ++;
                nl++;
                inword = false;
            }
        }
        else{
            if(!inword){
                inword = true;
            }
        }
        
        c = getchar();
    }
    if(inword){
        words++;
    }
    printf("\n");
    printf("No. of words: %d \n",words);
    printf("No. of newlines: %d \n",nl);
}       

