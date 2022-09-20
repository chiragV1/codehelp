#include<bits/stdc++.h>
 
using namespace std;
void insertionsort(vector<int> &arr , int n ) {
    for(int i=1 ; i<n ; i++) {
        int temp = arr[i];
        int j =i-1;

        for( ; j>=0; j--) {
            
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;

            }
        }
        arr[j+1] = temp;
    }
}
void print(vector<int> ans, int n) {
    for(int i=0; i<n; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main() {
  
    vector<int> ans;
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        int x ;
        cin>>x;

        ans.push_back(x);
    }

    insertionsort(ans, n);

    print(ans, n);
 
return 0;
}