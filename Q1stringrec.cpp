#include <iostream>

using namespace std;

void reverse(string& s , int i ){
    //base case
    if(i>s.length()-1-i){
        return ;
    }

    swap(s[i] , s[s.length()-1-i]);
    i++; 
   

    reverse(s, i );

}
int main()
{   
    string name = "chirag";

    reverse(name , 0 );

    cout<< name<<endl;

    return 0;
}