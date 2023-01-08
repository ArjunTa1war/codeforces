#include <iostream>
#include <string>
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
        int m = 130, index = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] < m)
            {
                index = i;
                m = s[i];
            }
        }
        cout << s[index] << " ";
        for (int i = 0; i < s.length(); i++)
        {
            if (i == index)continue;
            cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}
/*according to question we are first to take any one lexicographically smaller string
then the second string so the approach is find to lexicographically lowest alphabet
and write it first then write the rest of string but it should not contain the
the alphabet used before as mentioned in the question so this is the approach :)*/