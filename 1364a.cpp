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
        int n,x,sum=0;
        cin>>n>>x;
        int count[n],j=0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            sum+=a;
            if (a%x!=0){
                count[j]=i+1;
                j++;
            }
        }
        if (sum%x != 0)cout<<n<<"\n";
        else if (sum%x==0&&j==0)cout<<-1<<"\n";
        else{
          int a = min(count[0],n-count[j-1]+1);
          cout<<n-a<<"\n";
        }
    }
    return 0;
}
/*question is easy we just need first check the sum%x
if it's not zero then cout n (it is the longest lenght of subarray)
now j is the number of digits not divisble by x;
so if sum%x==0 && j==0 it means either we delete some elements 
or not answer is not gonna change 
now in the other case we can delete some elements from the ending or
beginning so we need to find the postion of first and last a%x!=0 
when we will find the position 
it means we need to delete first count[0] elements 
and if it's from the end we need to delet (n-count[j-1]+1) elements
we need to find which will be more suitable for us as we need the
longest subarray so apply this logic for the code :)*/