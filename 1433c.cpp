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
        int n, m_ax = 0, ans = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        m_ax = *max_element(arr, arr + n);
        if (arr[0]==m_ax&&arr[1]!=m_ax) {
           cout<<1<<"\n";
           continue;
        }
        if (arr[n-1]==m_ax&&arr[n-2]!=m_ax) {
           cout<<n<<"\n";
           continue;
        }
        for (int i = 1; i < n-1; i++)
        {
            if (arr[i] == m_ax)
            {
                if (arr[i - 1] < m_ax || arr[i + 1]<m_ax)
                {
                     ans = i + 1;
                     break;
                 }
            }
        }
        if (ans==0)cout<<-1<<"\n";
        else cout<<ans<<"\n";
    }
    return 0;
}
/*the solution is totally simple we are just to find the pirannah with any index such
that it is the maximum in the series and it has atleast one pirannah in neighbor 
such that the size of that pirannah is not max ofcourse it will be less than m_ax
and if we are unable to find that pirannah the answer is -1 that is there exists no
pirranah such that it can eat all other pirannah :)*/