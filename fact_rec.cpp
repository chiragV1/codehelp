#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{

    if (n == 0)
        return 1;

    else
    {

        int ans = n * fact(n - 1);
        return ans;
    } 
    return 0;
}

int main()
{

    int n;
    cin >> n;

    int ans = fact(n);

    cout << ans << endl;

    return 0;
}