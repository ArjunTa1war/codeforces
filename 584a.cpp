#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    if (t%10==0&&n==1)
    {
        cout<<-1;
       
    }
    else if (n==1)
    {
        cout<<t;
    }
    else if (t%10==0)
    {
        int x = t/10;
        for (int i = 0; i < n-1; i++)
        {
            cout<<x;
        }   
        cout<<0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout<<t;
        }   
    }
    return 0;
}
/*explaination
we are to find a number that is n long and divided by 
t so there is only one case where it will give out -1 and that case is
when t is 10 and n = 1 as there will be no number 
and then we are to just type the number t for the n times if t is 10 then
write t/10 for the n-1 times and write 0 at the end :)*/