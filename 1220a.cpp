#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, z = 0, n = 0;
    cin >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++)
    {
        if (s[i] == 'z')
            z++;
        else if (s[i] == 'n')
            n++;
    }
    while (n--)
    {
        cout << 1 << " ";
    }
    while (z--)
    {
        cout << 0 << " ";
    }
    return 0;
}
/*we just need to check how many zeroes can be mede by the givern string
and how many one can be made by that string then we need to print number
of 1 first and then 0 as zero contains z and one contains n that's why if
we only check number of z and n we can get the number of one and zero 
and we are printing 1 first because we need largest number :)*/
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     string s;
//     cin>>s;
//     int z=0,e=0,r=0,o=0,n=0;
//     for (int i = 0; i < t; i++)
//     {
//         if (s[i]=='z')z++;
//        else if (s[i]=='e')e++;
//        else if (s[i]=='r')r++;
//        else if (s[i]=='o')o++;
//        else if (s[i]=='n')n++;
//     }
//     int one = min(o,min(n,e));
//     e = e - one;
//     o = o - one;
//     int zero = min(min(z,e),min(r,o));
//     for (int i = 0; i < one; i++)
//     {
//         cout<<1<<" ";
//     }
//     for (int i = 0; i < zero; i++)
//     {
//         cout<<0<<" ";
//     }
//     cout<<"\n";
//     return 0;
// }