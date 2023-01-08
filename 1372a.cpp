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
        for (int i = 0; i < n; i++)
        {
            cout<<"11"<<" ";
        } 
        cout<<"\n";
    }
    return 0;
}
/*explaination
in this we are to make such an array of length n such that sum of no two numbers
in array equals any other number that's why print any numbers less than
1000 n times as sum of 
a+a can never be a (0 is exception) :)*/
