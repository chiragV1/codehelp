#include<bits/stdc++.h>
 
using namespace std;
void Selectsort(vector<int> ans, int n) {
    for(int i=0 ; i<n-1 ; i++) {
        
    }
}

void print(vector<int> ans, int n) {
    for(int i=0; i<n; i++) {
        cout<<ans[i]<<" "
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

    Selectsort(ans, n);

    print(ans, n);
 
return 0;
}