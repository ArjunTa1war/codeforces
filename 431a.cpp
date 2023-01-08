#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[5],ans=0;
    for (int i = 1; i < 5; i++)
    {
        cin>>arr[i];
    }
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
      int z = s[i]-48;
      ans+=arr[z];
    }
    cout<<ans;
    return 0;
}

/*four numbers are given initially 
that is if pressed 1 arr[1] will be added to ans ans so on;
and int x = s[i]-48 as ascii number of 1 is 48;
so that is how we can solve this
*/