// #include<bits/stdc++.h>
// using namespace std;

// void merge(vector<int> &arr, int low , int high ) {
    
//     int mid = low + (high - low)/2;

//     int len1 = mid -low +1;
//     int len2 = high - mid;
   
//     vector<int> first(len1);
//     vector<int> second(len2);
    
//     int index = low;

//     for(int i =0; i< len1 ; i++) {
//         first[i] = arr[index++];
//     }    
//      index = mid + 1;
//     for(int i =0; i< len2 ; i++) {
//         first[i] = arr[index++];
//     } 

//     //merge
//     int index1 =0;
//     int index2= 0;

//     index  = low;

//     while(index1 <len1 && index2 < len2 ) {
//         if(first[index1] < second[index2]) {
//             arr[index] = first[index1];
//             index1++;
//         }
//         else{
//             arr[index] = second[index2];
//             index2++;
//         }
//         index++;
//     }

//     while(index1 < len1) {
//         arr[index++] = first[index1++];
//     }

//      while(index2 < len2) {
//         arr[index++] = first[index2++];
//     }

    
// }
//  void mergesort(vector<int> &arr, int low , int high) {

//     //base
//     if(low >=  high) {
//         return;
//     }

//     int mid = low + (high - low)/2;

//     mergesort(arr, low ,mid);
//     mergesort(arr, mid+1, high);

//     merge(arr, low , high);
//  }
// int main() {
  
//     int n ;
//     cin>>n;

//     vector<int> ans(n);

//     for(int i=0 ;i<n; i++) {
//        int x;
//        cin>>x;

//        ans.push_back(x);
//     }

//     mergesort(ans, 0 , n);
//     cout<<endl;
//     for(int i=0 ;i<n; i++) {
//         cout<<ans[i]<<" ";
//     }
 
//     return 0;
// }








#include<iostream>
using namespace std;

void merge(int *arr, int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    mergeSort(arr, s, mid);
    
    //right part sort karna h 
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);

}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}