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
        int arr[n];
        int two = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if (arr[i]==2)two++;
        }
         cout<<n-two<<"\n";
    }
    return 0;
}
/*total number of one is upvotes we get and we are to get as many upvotes we can get
 if the number is 3 then we need to send all of them  to the first server where 
 the down votes are 0 and all the 1's are also present there 
 and then all 2's downvotes  to other server and thus the answer becomes total number - two 
 or total number of one + three :)*/