#include<bits/stdc++.h>

using namespace std;




int main(){

    int f = 10.5;
    int *ptr = &f;
    (*ptr)++;
    
    int p = 2.5;
     *ptr = p;

     cout<<*ptr<<" "<<f<<" "<<p<<endl;


    return 0;
}