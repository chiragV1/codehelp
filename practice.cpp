#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    int i = 5;
    int &j = i;

    cout << i << endl;
    cout << ++i << endl;
    cout << ++j << endl;
    */
    int row;
    cin>>row;

    int col;
    cin>>col;

    int ** arr = new int*[row];
    
    for(int i = 0; i<row ; i++){
        arr[i] = new int[col];
    }

    for(int i = 0; i<row ;i++){
        for(int j =0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<endl;

    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}