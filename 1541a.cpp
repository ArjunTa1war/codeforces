#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 1)
                    cout << i + 1 << " ";
                else
                    cout << i - 1 << " ";
            }
        }
        else
        {
            cout<<3<<" "<<1<<" "<<2<<" ";
            for (int i = 4 ; i <=n; i++)
            {
               if (i % 2 == 0)
                    cout << i + 1 << " ";
                else
                    cout << i - 1 << " ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
/*we are to alot different postion to permuation such that no digit have the same position
after the movement we are to also keep in mind that we move a number as least as possible
so if the number is even swap two consecutive digits but if the nnumber is odd then 
a integer will be left so in order to change it's position to we need to make it even
by writing its odd digits if we take 3 1 2 outide total movement will be 4(1+1+2) and 
after that keep on writing the digits with two consecutive digits interchanged :)*/