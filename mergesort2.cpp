#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low , int high ) {
    
    int mid = low = (high - low)/2;

    int len1 = mid -low +1;
    int len2 = high - mid;
   
    vector<int> first(len1);
    vector<int> second(len2);
    
    int index = low;

    for(int i =0; i< len1 ; i++) {
        first[i] = arr[index++];
    }    
     index = mid + 1;
    for(int i =0; i< len2 ; i++) {
        first[i] = arr[index++];
    } 

    //merge
    int index1 =0;
    int index2= 0;

    index  = low;

    while(index1 <len1 && index2 < len2 ) {
        if(first[index1] < second[index2]) {
            arr[index] = first[index1];
            index1++;
        }
        else{
            arr[index] = second[index2];
            index2++;
        }
        index++;
    }

    while(index1 < len1) {
        arr[index++] = first[index1++];
    }

     while(index2 < len2) {
        arr[index++] = first[index2++];
    }

    
}
 void mergesort(vector<int> &arr, int low , int high) {

    //base
    if(low >=  high) {
        return;
    }

    int mid = low + (high - low)/2;

    mergesort(arr, low ,mid);
    mergesort(arr, mid+1, high);

    merge(arr, low , high);
 }
int main() {
  
    int n ;
    cin>>n;

    vector<int> ans(n);

    for(int i=0 ;i<n; i++) {
       int x;
       cin>>x;

       ans.push_back(x);
    }

    mergesort(ans, 0 , n);
    cout<<endl;
    for(int i=0 ;i<n; i++) {
        cout<<ans[i]<<" ";
    }
 
    return 0;
}