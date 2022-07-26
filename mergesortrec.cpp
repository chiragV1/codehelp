#include<iostream>
using namespace std;

int merge(int *arr, int s , int e) {

    int  mid = s + (e-s)/2;

    int len1 =mid + 1 - s;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainarrindex = s;
    for(int i=0;i<len1;i++) {
        first[i]= arr[mainarrindex++];
     }
    mainarrindex = mid+1;
    for(int i=0;i<len1;i++) {
        second[i]= arr[mainarrindex++];
     }

     //merge 
     int index1 = 0;
     int index2 = 0;
     mainarrindex = s;
     int inv=0;

    while(index1 < len1 && index2 < len2 ) {
        if(first[index1] < second[index2] ) {
           arr[mainarrindex++] = first[index1++]; 
        } 
        else {
            arr[mainarrindex++] = second[index2++];
            inv++;
        }
    }
    while(index1 < len1) {
        arr[mainarrindex++] = first[index1++]; 
    }

    while(index2 < len2) {
        arr[mainarrindex++] = second[index2++]; 
    }
    return inv;
}

int  mergesort(int *arr, int s , int e )
{
    if(s >= e)
        return -1;
    
    int mid = s+ (e-s)/2;

    mergesort(arr, s, mid);

    mergesort(arr, mid +1 , e);

    int inv = merge(arr, s , e);

    return inv;
    
}

int main(){
    
    int arr[6] = { 2,4,3,9,6,5 };
    int n =6;
   int inv = mergesort(arr, 0 , n-1);

    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    cout<<inv;
    
    return 0;
}