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
        int r = 0,ans=1;
        for (int i = 0; i < n; i++) cin>>arr[i];
        for (int i = n-1; i >0; i--)
        {
            if (r==0&&arr[i]<=arr[i-1]) ans++;
            else if (arr[i]>=arr[i-1])
            {
                r=1;
                ans++;
            }
            else break;
        }
        cout<<n-ans<<"\n";
    }
    return 0;
}
/*it is simple we are to delete the terms from the begginning in order
to make it a good array so acc to question we can make any array good
if it can be arranged in increasing order if we can take digits from the
endings only 
so we can observe that an array can be made good if and only if
it is arrranged like x1,x2,x3,x4,m,y1,y2,y3,y4 and here the series is in
increasing order till m doesn't matter either we start from the ending or
beginning that is m>x4>x3>x2>x1 && m>y1>y2>y3>y4 so whenever this series stops
this means that the length of the array cannot be extended furthur and thus
break the loop and when we find the longest length of the array n-ans
becomes the length of shortest prefix to be deleted :)*/