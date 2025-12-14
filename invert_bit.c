//Program to invert the bits from a start position for n bits
#include <stdio.h>


unsigned invert(unsigned x,int p,int n);//prototyping
void main(){
    printf("%d",invert(101,4,3));//Excpected Output 121:Verified
}


unsigned invert(unsigned x,int p, int n){
    unsigned mask = ((~(~0<<n))<<(p+1-n));//makes a mask with 1s at the desired positions
    x = x^mask;//taking XOR with the mask effectively flips the bits
    return x;//returns x
}