#include <iostream>
#include <string>
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
        string s;
        cin >> s;
        int arr[101] = {0}, j = 0, ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                arr[j]++;
            else if (s[i] == '0')
                j++;
        }
        sort(arr, arr + j + 1);
        for (int i = j; i >= 0; i = i - 2)
        {
            ans += arr[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
/*we are to find all the pairs of 1
and in each tur player chooses the string with most number of 1
so firstly alice will choose the longest string with only "1"value
then bob will chose then alice again that's why making all the substrings
of 1 can contribute to find the answer :)*/