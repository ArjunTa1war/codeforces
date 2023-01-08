#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int ans = (n+1)/2;
    if (n<m)
    {
        cout<<-1;
        exit(0);
    }
    while (1)
    {
        if (ans%m==0)
        {
           cout<<ans;
           break;
        }
        else
        {
            ans++;
        }
    }
    return 0;
}
/*explaination
now as we are to check the lowest number of steps that we need to move from going from
0 to n so we first need to check how many minimum number of steps we need to take
if the number is odd for eg 11 then we can go like 2,2,2,2,2,1 these are 6
if the number is even for eg 10 then we can go like 2,2,2,2,2 theser are 5
so the common formla becomes (n+1)/2 now we are to check whether the n is small than m or
not if it is small then no number would be there to satisfy the condtion 
and then check for answer keep on increasing the ans by 1 as if we delete 1 number that is 2 then we
will have to add 2 numbers so the difference is of 1 number
keep on using the while loop and hence we will get the answer :)*/