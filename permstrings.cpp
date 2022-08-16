#include<bits/stdc++.h>
using namespace std;

void permutate(string str , int s , int e ) {
    if(s==e) {
       cout<<str<<endl;
    }

    for(int i =s; i<=e ; i++) {

        swap(str[i], str[s]);
        permutate(str , s+1 , e);
        swap(str[i], str[s]);
    }


}

int main() {

    string str = "abc";

    int s =0;
    int e= str.length();

    permutate(str, s, e);

    return 0;
}