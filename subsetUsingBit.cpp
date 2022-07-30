#include<iostream>
#include<vector>
using namespace std;

void solve(string str , string output , int index , vector<string>& ans ) {

    int n = str.length();

    for(int i =0;i< (1<<n) ;i++){
        output = "";
        for( int j =0;j<n;j++){
            
            if(i & (1<<j)){
                output+=str[j];
            }
           
        }
         if(output.length() >0) {
            ans.push_back(output);
            }
    }
}
 
int main() {

    string str = "abc" ;

    string output = "";

    int index =0;

    vector<string> ans ;

    solve(str , output , index , ans);

    for(int i = 0 ; i < ans.size() ; i++ ) {
        cout<<ans[i]<<" ";
    }



    return 0;
}