#include<bits/stdc++.h>

using namespace std;

int Words(string str) {
    int len = str.length() ;

    vector<string> ans;
    string word = "" ;
    for(auto i : str) {
        if(i == ' ' || i == '.' || i == '!' || i == ',' || i == '?') {
            ans.push_back(word) ;
            word= "";
        }
        else {
            word = word +str;

        }
    }

    int m  = ans.size() ;

    return m;
}

int main() {

    string str;
    getline(cin , str) ;

    cout<<str<<endl;

    cout<< Words(str) <<endl;

    return 0;
}