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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='1')
            {
                for (int j = i+1; j < min(n,i+k+1); j++){
                     if (s[j]!='0')break;
                     s[j] = '.';
                }
                for(int j = i-1; j >=max(0,i-k); j--){
                if(s[j] != '0') break;
                s[j] = '.';
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='0')
            {
                ans++;
                for(int j = i+1; j < min(n,i+k+1); j++){
                if(s[j] != '0') break;//we can neglect this too :)
                s[j] = '.';
            }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/*we are to calculate the total number of 1 that we can place such that
the spaces between two 1's is equal to atleast k
now we are given a string with 1 and 0
so in that string we are first check for s[j] = 1 and change all it's 
neighbouring elements till k on both side to '.' it means we can not place 
any element here
now if we find s[j]=1 then we break because now we are to consider that
1 and change the next k digits and this goes on
after the 1st step we will find all the places where we can add 1
now when we add 1 to string then the next 1 cannot be placed with
distance less than k so we need to  keep on updating the string by 
putting s[j]='.' till index min(i+k+1,n) so that we can know that we 
cannot place 1 there :)*/