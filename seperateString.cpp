#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
  
    string str;
    

    getline(cin, str);

    stringstream s(str);

    string word ;

    int count=0;

    while(s >> word) {
        count++;
    }

    cout<<count<<endl;

 
return 0;
}