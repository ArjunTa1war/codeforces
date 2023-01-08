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
        string a,b;
        cin>>a>>b;
        int l1 = a.length();
        int l2 = b.length();
        int dp[21][21]={0};
        int result = 0;
        for (int i = 0; i <= l1; i++)
        {
            for (int j = 0; j <= l2; j++)
            {
                if (i==0||j==0)dp[i][j]=0;
                else if (a[i-1]==b[j-1])
                {
                    dp[i][j] = dp[i-1][j-1]+1;
                    result = max(result,dp[i][j]);
                }
                else dp[i][j]=0;
            }
        }
      cout<<l1+l2-2*result<<"\n";
    }
    return 0;
}
/*our main task is to find the longest common substring and we
are to find the min number of  characters to delete if we want to make 
string a and b equal that will be l1-result+l2-result = l1+l2-2*result
now comes how to find the longest substring 
it is a dp approach that we are to count the diagonals here
for eg
   h e l l o
a  . . . . .
b  . . . . . 
l  . . 1 1 .
l  . . 1 1 . 
o  . . . . 1
here the length of longest diagonals made by 1 is 3 so we are to
apply this condition in our approach to find the longest substring :) */
