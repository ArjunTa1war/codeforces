#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, ans;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int &a = *min_element(arr, arr + n);
        int &b = *max_element(arr, arr + n);
        int a1, a2, b1, b2;
        int f1 = 0,f2 = 0;
        for (int i = 0; i < n; i++)
        {
            f1++;
            if (arr[i] == a)
            {
                a1 = f1;
            }
            else if (arr[i] == b)
            {
                b1 = f1;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {    f2++;
            if (arr[i] == a)
            {
                a2 =f2;
            }
            else if (arr[i] == b)
            {
                b2 = f2;
            }
        }
        int c_1 = max(a1,b1);
        int c_2 = a1+b2;
        int c_3= a2+b1;
        int c_4 = max(a2,b2);
         ans = min(min(c_1,c_2),min(c_3,c_4));
        cout<<ans<<"\n";
    }

    return 0;
}
/*explaination 
we are just to remove the mimimum and maximum element so we can do two moves removing an element
from the last or from the beginnig there are 4 options for doing this
suppose the both minimum element and the maximum element come in a lane in that case we are just
to see the maximum number among them as the minimum one will cut by itself in the way 
now the two options are either we are counting from beginnnig or end
now other two options are min elemnt is nearer to arr[0] and max element is nearer to arr[n-1] in this
case we are to take the sum of them now do vise versa of it and check other condition also
now for all 4 cases we are tho check the minimum one that will be out answer :)*/