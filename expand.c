//Program that can take a string with shortforms and add the expanded form to another string - for example a-c to abc

#include <stdio.h>


void expand(char s1[],char s2[]);
void main(){
    char s1[] = "a-b0-9";
    char s2[100] = "\0";
    expand(s1,s2);
    printf("s2 %s\n",s2);
}


void expand(char s1[],char s2[]){
    int i,j;
    char ll,hl;
    char cc;
    i=0;
    j=0;
    while(s1[i]!='\0'){
        if(s1[i]=='-'){
               ll = s1[i-1];
               hl = s1[i+1];
               for(cc=ll;cc<=hl;cc++){
                    s2[j++] = cc;            
               }
        }
        i++;
    }
    s2[j]='\0';

}