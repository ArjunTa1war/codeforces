#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n,a,b,c,k;
  cin>>n>>a>>b>>c;
  int remainder,ans=0;
  for (int i = 0; a*i <=n ; i++)
  {
      for (int j = 0; a*i+b*j <=n; j++)
      {
          remainder = n - a*i-b*j;
          if (remainder %c == 0)
          {
              k = remainder/c;
              ans = max(ans,i+j+k);
          }
      }
  }
  cout<<ans<<"\n";
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, a, b, c, k, r;
//     cin >> n >> a >> b >> c;
//     int ans = 0;
//     for (int i = 0; i <= 4000; i++)
//     {
//         for (int j = 0; j <= 4000; j++)
//         {
//             r = n - (a * i + b * j);
//             if (r < 0)
//             {
//                 break;
//             }
//             if (r % c == 0)
//             {
//                 k = r / c;
//                 ans = max(ans, i + j + k);
//             }
//         }
//     }
//     cout << ans;
//     return 0;
// }