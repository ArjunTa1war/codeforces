#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin>>s;
        int ans = 1e6,min1=-2,min2=-2,min3=-2;
        int x = s.length();
        for (int i = 0; i < x; i++)
        {
            if (s[i]=='1')min1 = i;
            if (s[i]=='2')min2 = i;
            if (s[i]=='3')min3 = i;
          if (min1!=-2&&min2!=-2&&min3!=-2)
          {
             int a = min(min1,min(min2,min3));
             int b = max(min1,max(min2,min3));
             ans = min(ans,b-a+1);
             if (ans==3)break;
          }
        }
        if (ans==1e6)cout<<0<<"\n";
        else cout<<ans<<"\n";
    }
    return 0;
}
/*we are to find the shortest substring that contains all three digits that is 1,2 and 3
and in order to do this the best approach is the to check all the s[i] = 1,2,3 and then
check the max-min for i the minimum one would be the answer :)*/


// #include <iostream>
// #include <string>
// using namespace std;
// void solve(){
//       string s;
//         cin>>s;
//         if (s.length()<3)
//         {
//         cout<<0<<"\n";
//         return ;
//         }
//         int ans = 1e6;
//         for (int i = 0; i < s.length()-2; i++)
//         {
//             if (s[i]!=s[i+1])
//             {
//               for (int j = i+2 ;j < s.length(); j++)
//               {
//                   if (s[j]!=s[i]&&s[j]!=s[i+1])
//                   {
//                     ans = min((j-i)+1,ans);
//                     if (ans==3)
//                     {
//                         cout<<3<<"\n";
//                         return;
//                     }
//                     break;
//                   }
//               }
//             }
//         }
//         if (ans==1e6)cout<<0<<"\n";
//         else cout<<ans<<"\n";
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//       solve();
//     }
//     return 0;
// }