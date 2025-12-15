#include <stdio.h>
int bin_search(char arr[],char b,int n);
void main(){
    char arr[] = "abcde";
    int n = sizeof(arr)-1;
    int ind =  bin_search(arr,'c',n);
    printf("Index %d",ind);
}

int bin_search(char arr[],char b,int n){
    int low,high,mid;
    low = 0;
    high = n-1;
    while(low<=high){
        mid = (low + high )/2;
        if(arr[mid]<b){
            low = mid+1;    
        }
        else{
            high = mid-1;
         }
    }
    if((low<n)&&(arr[low]==b)){
        return low;
    }
    else{
        return -1;
    }
} 