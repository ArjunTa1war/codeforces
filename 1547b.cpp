#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void solve(){
    string s;
        cin >> s;
        int x = s.length();
        int pt, arr[x];
        for (int i = 0; i < x; i++)
        {
            if (s[i] == 'a')
            {
                pt = i;
            }
            arr[i] = s[i];
        }
        sort(arr,arr+x);
        for (int i = 0; i < x; i++)
        {
            if (arr[i]!=97+i)
            {
                cout<<"NO\n";
                return;
            }
        }
        for (int i = 0; i < pt-1; i++)
        {
            int a = s[i];
            int b = s[i+1];
            if (a<b)
            {
                cout<<"NO\n";
                return;
            }
        }
        for (int i = pt; i < x-1; i++)
        {
            int a = s[i];
            int b = s[i+1];
            if (a>b)
            {
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
       solve();
    }
    return 0;
}
/*logic is simple that is find "a" first and then we are to check whether all the elements
from a to x are present or not now we are starting with a
we can add b to its right or left and then again this series will go on
now  we can notice that the series from left is strictly decreasing till "a"
and after that strictly increasing so we are find a case where these conditions
get false if we are unable to find these conditions then cout yes :)*/