#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m*a<=b)
    {
        cout << n * a;
       
    }
    else
    {
          int r = n%m;
          int d = min(r*a,b);
          cout<<(n/m)*b+d;
    }

return 0;
}
/*in first case if checked which is providing travel at low cost
if a is providing at low cost than no need to worry and just print the value
if not then we are to check the remainder and n -r which will be equal to n if we take int
is multiplied by b as it provides at low cost and the remainder is multiplied with a 
and but what if the b is also lower than the r*a so thats whyt we have taken minimum of them that's all*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, m, a, b;
//     cin >> n >> m >> a >> b;
//     if (m*a<=b)
//     {
//         cout << n * a;
//     }
//     else
//     {
//             int r;
//             r = n%m;
//             int x = min(r*a,b);
//             cout<<x+((n-r)/m)*b; 
//     }
 
// return 0;
// }