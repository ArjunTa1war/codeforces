#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y, w;
    cin >> y >> w;
    int m = max(y, w);
    if (m == 1)
        cout << "1/1";
    else if (m == 2)
        cout << "5/6";
    else if (m == 3)
        cout << "2/3";
    else if (m == 4)
        cout << "1/2";
    else if (m == 5)
        cout << "1/3";
    else if (m == 6)
        cout << "1/6";
    return 0;
}
/*explaination
now if dot throw a dice which is larger then or equal to
max then only she can go to her favourite place and we are to find the probability
for eg if the max is 3 then if she throws 3,4,5,6 then she can win and the probability
that she wins will be 4/6 as we are to find the simplest fraction that's why answer would
be 2/3 :)*/