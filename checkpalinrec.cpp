#include<iostream>
using namespace std;

bool checkpalinf(string s , int i , int j){
     if( i>j )
        return true;
    if(s[i] != s[j])
        return false;
    else{
        return checkpalinf(s, i+1, j-1);
    }
}
int main(){
    string name = "abcddcba";
    cout<<endl;

    bool ispalind = checkpalinf(name , 0 , name.length()-1);

    if(ispalind){
        cout<<"yayyyyy"<<endl;
    }
    else{
        cout<<"arreee yrrrr"<<endl;
    }

}
