#include <iostream>
using namespace std;
int sum(int n){
    int ans = 0;
    int count = 0;
    int sum = 0;
    for (int i = 1; i <=n; i++)
    {
        ans=i+ans;
        sum+=ans;
        if (sum > n)
        {
            break;
        }
        count++;
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
/*explaination
we are to make the pyreamid in such a way that the first
layer contains 1 box next contains 2+1=3 box then next
contains 3+3=6 and then next 6+4 =10 box keep on counting the total number
of boxes if it croses the given number then print count that's
all :)*/
