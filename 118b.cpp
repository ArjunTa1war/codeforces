#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n + 1; i++)
    { 
        for (int j = 0; j < n - i; j++) cout << "  "; 
        if (i>0)cout<<0<<" ";
        for (int k = 1; k <= i; k++)cout << k << " ";
        for (int l = i - 1; l > 0; l--)  cout << l << " ";
        cout<<0;
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {  
        for (int j = 0; j <= i; j++) cout << "  ";
        if(i<n-1) cout<<0<<" ";
        for (int k = 1; k <= n - i - 1; k++)cout << k << " ";
        for (int l = n - i - 2; l > 0; l--) cout << l << " ";
        cout<<0;
        cout << "\n";
    }
    return 0;
}
/*little bit long but easy
first we are to see the diagram and observe it we can easily get that
for the first half that is upto the row where n occurs
we will print the " " for the n-i times;
and then we are to print numbers in order and after the last
0 there must not be any space acc to question 
and two loops will be there to print the number one in increasing order
othe in decreasing order so this is the required solution all values
restrictions,initial points,final points can be taken by reading the
question and observing the pattern :)*/