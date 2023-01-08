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
        for (int i = 0; i < 2*n-1; i+=2)
        {
           cout<<s[i];
        }
        cout<<"\n";
    }
    return 0;
}
/*we are just to find such a string of lenght n such that string of length 1 - n 
then 2 - n+1 have atleast one digit in common so we can think that we are to first
take first digit from 1 string then 2nd digit from 2nd string and then 3rd digit
from string 3 and we can clearly observe that 
in the string 1 2 3 4 5 6 7 and n = 4 then 2*n-1 = 7 we can take 4 substring here
1 2 3 4 first digit  = 1
2 3 4 5 second digit = 3
3 4 5 6 third digit =  5
4 5 6 7 fourth digit = 7 and this all are odd digits thats why we are to take digits at odd places
and the difference between the digit is 2 as we are also taking the string at i+1 and we are also increasing
the terms also thats why the difference is 2 and this is the answer :)*/