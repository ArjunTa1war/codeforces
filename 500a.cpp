#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int arr[n + 1];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n;)
    {
        if (i == k)
        {
            cout << "YES\n";
            exit(0);
        }
        i = arr[i] + i;
    }
    cout << "NO\n";

    return 0;
}
/*in the question it is given n houses
but the tncks will count n-1 houses
and the houses n-1 porrals i.e a[i] are made such that if i start from 1 then 
now he is standing on 1 now add a[1] to it and start with the position equal 
to i = 1+arr[1] suppose it is 2 now it is clear that he can go to 2 and then add
2+arr[2] and suppose it go to 4 now it can also go to i = 4
we are juts to check whether it stops at k or not :)*/