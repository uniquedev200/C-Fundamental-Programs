//Takes the input and accounts for empty spaces and sign and extracts numbers onto an array
//Follows the KRC book implementation with fix for question 5-1
#include <stdio.h>
#include <ctype.h>
#define BUFFSIZE 15
#define SIZE 100

int getch();
void ungetch(int c);
int getint(int *pn);
void main(){
    int array[SIZE];
    int n;
    for(n=0;n<SIZE && getint(&array[n])!=EOF && getint(&array[n])>0;n++)
    ;
    printf("The number array is as follows:\n");
    for(int i=0;i<=n;i++){
        printf("%d\n",array[i]);
    }
    
}


int getint(int *pn){
    int c,sign;
    while(isspace(c=getch()));
    if(!isdigit(c)&&c!=EOF&&c!='+'&&c!='-'){
        ungetch(c);
        return 0;
    }
    sign = (c=='-')?-1:1;
    if(c=='+'||c=='-'){
        c = getch();
        if(!isdigit(c)){
            ungetch(c);
            return 0;
        }
    }
    for(*pn=0;isdigit(c);c=getch()){
        *pn = *pn*10 +(c-'0');
    }
    
    *pn*=sign;
    if(c!=EOF){
        ungetch(c);
    }
    return c;
}






int buffer[BUFFSIZE];
int bp = 0;
int getch(){
    return (bp>0) ? buffer[--bp]: getchar();
}
void ungetch(int c){
    if(bp<BUFFSIZE){
        buffer[bp++] = c;
    }
    else{
        printf("Buffer limit reached");
    }
}

