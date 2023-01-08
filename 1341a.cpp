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
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        if (n*(a-b)>c+d||n*(a+b)<c-d)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
/*we are just to check the conditions where the case will be false
that we are to select n rice grains weighting between a+b to a-b such that
it's total weight is between c+d to c-d 
first condition is we take the min condition that each rice is a-b weight
if the total weight is greater than c+d than also condition becomes false
if we take the maximum weight of grain then if the weight of the total grains
becomes less than the minimum weight provided that is c-d than also condition becomes
false and in all other condition the answer will be yes :)*/
/******************************OR************************************/
// #include <iostream>
// using namespace std;
 
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         int n,a,b,c,d;
//         cin>>n>>a>>b>>c>>d;
//         if (n*(a-b)<=c+d&&n*(a+b)>=c-d)
//         {
//             cout<<"YES\n";
//         }
//         else
//         {
//             cout<<"NO\n";
//         }
//     }
//     return 0;
// }