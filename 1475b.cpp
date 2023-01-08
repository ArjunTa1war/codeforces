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
        int a;
        cin>>a;
        int x = a/2020;
        int y = a%2020;
        if (y<=x)
        {
            cout<<"YES\n";
        }else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
/*we are to find whether the number can be written in the terms of 2020 and 2021
or not then divide by 2020 we will get to know how many 2020 will be needed to reach to 
that number then we will find the remainder 
now as we can use x number of 2020 for making the a instead it we can also use the 
number 2021 therefore we can add x number more to the x to make it a
but if the remainder becomes large than x than it is not possible:)
for eg 8085 we can use 4 numbers of 2021 or 2020 so the max is 8084 and we can not make
8085 so ans will be no :
:)*/