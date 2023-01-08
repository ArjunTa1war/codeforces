// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>arr[i];
//         }
//         sort(arr,arr+n);
//         int m = arr[n-1];
//        for (int i = 0; i < n-1; i++)
//        {
//            int z = (arr[n-1]&arr[i]);
//            m = min(m,z);
//        }
//        cout<<m<<"\n";
//     }
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         int n,ans=1e9;
//         cin>>n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>arr[n];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i; j < n; j++)
//             {
//                 for (int k = 0; k <= j-i; k++)
//                 {
//                     arr[i+k] = (arr[i+k]&arr[j-k]);
//                 }
//                 int x = *max_element(arr,arr+n);
//                 ans = min(ans,x);
//             }   
//         }
//        cout<<ans<<"\n";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (n==1)
        {
            if (s[0]=='?')
            {
                cout<<"B\n";
                continue;
            }
        }
        
        for (int i = 0; i < n-1; i++)
        {
            if (s[i] == '?' && s[i+1]=='B')
            {
                s[i] = 'R';
            }
            else if (s[i] == '?' && s[i+1]=='R')
            {
                s[i] = 'B';
            }
            else if (s[i]=='B'&&s[i+1]=='?')
            {
                s[i+1] = 'R';
            }
            else if (s[i]=='R'&&s[i+1]=='?')
            {
              s[i+1] = 'B';
            }  
            else if (s[i]=='?'&&s[i+1]=='?')
            {
                s[i]='B';
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}