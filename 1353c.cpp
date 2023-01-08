#include <iostream>
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--)
	{
		ll n;
		cin >> n;
		ll ans = 0;
		for (ll i = 1; i <= (n / 2); i++)
		{
			ans = ans + (8 * i * i);
		}
		cout << ans << "\n";
	}
	return 0;
}
/*we are to move each and every integer in the board to the middle
we can realize that there are 8 elements surrounding the middle point which are at distance 1
now there are 16 elements surrounding the middle point which are at distance 2
similiraly the equaltion becomes 8*1+16*2+24*3 taking 8 common we can get that
8(1+4+9+........)and we can apply formula of sum of sqares or we can use forloop also :)*/


// #include <iostream>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         ll n,ans = 0;
//         cin>>n;
//         n = (n-1)/2; //total number of squares
//         ans = (n*(n+1)*(2*n+1))/6;
//         cout<<ans*8<<"\n";
//     }
//     return 0;
// }