#include <iostream>
using namespace std;
int countsum (int n){
    int ans = 0,sum =0;
    while (n)
    {
        n = n/10;
        ans++;
    }
    for (int i = 1; i <= ans; i++)
    {
       sum+=i;
    }
    return sum;
}
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
        int x= n%10;
        cout<<(x-1)*10+countsum(n)<<"\n";
    }
    return 0;
}
/*explaination
as we are to first check 1,11,111,1111 as if we are to call to 1111
first we have to click 1 then 11 and so on 
and we will have to type the number 1+2+3+4 times 
and we need to find the total number of digits to the required room
eg if it is 22 total number of digits will be 2 and thus we will have
to type 2then 22 and thus 3 numbers have to typed
but before it we have typed 10 digits for 1 integer too
so if it is two then add the count sum to (x-1)*10 as this formula
firs exactly in it hope you understood it:)*/