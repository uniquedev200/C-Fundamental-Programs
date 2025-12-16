//Converts the string cotaining decimal value with sign and power exponent to a double
#include <stdio.h>
#include <ctype.h>

double str_to_doub(char arr[]);//Prototyping

void main(){
    char input[] = "123.45e-6";
    double output = str_to_doub(input);
    printf("Output : %.8f",output);
}
 

double str_to_doub(char arr[]){
    int i,power,sign,exp;
    double val;
    i = 0;
    while(arr[i]==' '){
        i++;
    }
    sign = (arr[i]=='-')?(-1):(1);
    if((arr[i]=='-')||(arr[i]=='+')){
        i++;
    }
    for(val=0.0;isdigit(arr[i]);i++){
        val = (10.0*val)+(arr[i]-'0');
    }
    if(arr[i]=='.'){
        i++;
    }
    for(power=1;isdigit(arr[i]);i++){
        val = (10.0*val)+(arr[i]-'0');
        power = 10*power;
    }
    if((arr[i]=='e')||(arr[i]=='E')){
        i++;
    }
    sign = (arr[i]=='-')?(-1):(1);
    if((arr[i]=='-')||(arr[i])=='+'){
        i++;
    }
    val/=power;
    for(exp=0;isdigit(arr[i]);i++){
        exp=(10*exp)+(arr[i]-'0');
    }
    int j;
    for(j=0;j<exp;j++){
        if(sign>0){
            val*=10.0;
        }
        else{
            val/=10.0;
        }
    }
    return val;
}
