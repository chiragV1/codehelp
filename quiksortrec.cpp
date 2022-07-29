#include<iostream>
using namespace std;

int Partition(int arr[], int s, int e) {

    int pivot = arr[s];

    int cnt=0;

    for(int i=s+1;i<=e;i++) {
        if(arr[i] <= pivot) {
            cnt++;
        }
    }
    
    int Pivotindex = s + cnt;
    swap(arr[Pivotindex] , arr[s]);

    //left and right wala part
    int i=s;
    int j = e;

    while(i < Pivotindex && j > Pivotindex) {

        while(arr[i] < pivot )
        {
            i++;
        }

        while(arr[i] < pivot )
        {
            j--;
        }

        if(i < Pivotindex && j > Pivotindex) {
            swap(arr[i] , arr[j]);
        }
    }
}

void QuickSort(int *arr , int s, int e) {
    if(s>= e)
        return ;
    
    int p = Partition(arr,s ,e);

    QuickSort(arr, s , p-1);

    QuickSort(arr, p+1, e);
     
}

int main() {
     
    int arr[5] = {3,1,4,5,2};
    int n = 5;

    QuickSort(arr, 0 , n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}