#include <iostream>
using namespace std;
void solve()
{
    int n, check = 0;
    cin >> n;
    int arr[n], ans[n + 1];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 2; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}
/*we are allowed to dlt the numbers in array to make 
it a pallindrome in order to do this we need to check the condition
such that is there is any arr[i] repeating such that other's number
position is from (i+2,n) 
for eg 1 ,2 ,1 is a pallindrome
1,2,2,1 is also a pallinmdrome 
we can convert 1,2,2,1 to 1,2,1 as we are allowed to do so
so we just need to check this :)*/