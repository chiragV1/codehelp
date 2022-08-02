#include<iostream>
using namespace std;

void merge(int *arr , int s , int e){

    
}

void mergesort(int *arr, int s , int e) {
     
    //base 
    if(s>=e)
        return; 
    
    int mid = s + (e-s)/2;

    mergesort(arr , s , mid);

    mergesort(arr, mid+1 , e );

    merge(arr, s, e);
        
}

int main() {


    return 0;
}