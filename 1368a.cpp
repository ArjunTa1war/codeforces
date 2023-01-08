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
        int a, b, n;
        cin >> a >> b >> n;
        int ans = 0;
        while (1)
        {
            if (a + b > n)
            {
                ans++;
                break;
            }
            if (a > b)
            {
                b = b + a;
            }
            else
            {
                a = a + b;
            }
            ans++; 
        }
        cout << ans << "\n";
    }
    return 0;
}
/*explaination
we are just to add keep on changing the min number by min+max
because in this way both the intger will be changed and increased and in this
way total can be increased rapidly :) it is just a general observation
for eg 5 4 will change to
5 9
13 9
13 22
35 22
35 57
and in this step we will add b+=a then it becomes strictly greater than n in just 7 step :)*/