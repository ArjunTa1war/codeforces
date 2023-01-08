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
        string b = "1";
        for (int i = 1; i < n; i++)
        {
            if ('1'+s[i]!=b[i-1]+s[i-1])
            {
                b+='1';
            }
            else  b+='0';
        } 
        cout<<b<<"\n";
    }
    return 0;
}
/*the logic is simple when the string b added to string s then it should give out
the maximum number possible now if the two numbers consecutive numbers in the 
total is same then it get reduced to one digit so we need to take care of this
too now we need to take care of this also that the number from left should be max
as possible in order to make the largest number we can only output 1 or 0 so
for making the number as large as possible we will check the condition by adding
1 if this satisfies that the previous digit is not same then we will add 1 otheriwise
we will add 0 :)*/