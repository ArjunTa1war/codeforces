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
        for (int i = n; i > 0; i--)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
/*we can just type any permuutation here as every permutation is
a good permutation
as a permutation is good if the every suborray of the permutation
is greater than or equal to the  j-a+1 that is the length of the permutation
so if we take any length there will be always be a integer present that
is greater then or equal to the length and
pi OR pi+1 OR .... pj becomes max of array or greater and thus condition is always satisfied :)*/