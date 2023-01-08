#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,z=0,check=0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0') z++;
            if (i > 0&&s[i-1]>s[i])check = 1;
        }
        if (check == 0)cout << 0<<"\n";
        else {
        cout << "1\n";
        int arr[n];
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && i < z)
            {
                arr[k] = i + 1;
                k++;
                s[i] = '0';
            }
            else if (i >= z && s[i] == '0')
            {
                arr[k] = i + 1;
                k++;
                s[i] = '1';
            }
        }
        cout << k << " ";
        for (int i = 0; i < k; i++)cout << arr[i] << " ";
        cout<<"\n";
        }
    }
    return 0;
}
/*it is easy to get that we can make any string in increasing order in no more than one 
step if the given string is not in increasing order then we can do one thing we need to
calculate the number of zeroes in total by it we can get that till the index z there should
be zeroes only and after that there should be one only after the index we need to look for
zeroes and before the index z we need to look for one it is quite obvious that number of '1'
before index z is equal to the number of '0' after index z and thus when we rotate them the 0
will be conveted to 1 and vice versa so we need to write down their index only :)*/