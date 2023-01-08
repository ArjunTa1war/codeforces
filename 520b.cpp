#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int count = 0;
    if (n >= m)
    {
        cout << n - m;
        return 0;
    }
    while (1)
    {
        if (m % 2 == 0)
        {
            m = m / 2;
            count++;
        }
        else
        {
            m = m + 1;
            count++;
        }
        if (n >= m)
        {
            cout <<count+n-m;
            return 0;
        }
    }
    return 0;
}
/*explaination
take eg that n = 7 and m = 50 that means we are to go from n to m and to n we can apply two operation
that is substract one or multiply 2 
so opposite for m we can divide 2 and add 1
first multiply 7 by 2 it becomes 14 then if we substract it by 1 it becomes 13 then 2x is 26 and then sub
stract 1 it beomces 25 and 2x is 50 it becomes little bit complex
so if we start by m then divide by 2 we know that if n is multiplied by 2 it is even
so if m divided by 2 is even then it is fine if not then add a number to it 
we have only option to add that's why we have added only 
when on m divided by 2 gives the result even then also keep on divideing it by 2
and at last we need to check the condition :)
it is called backtracking
*/
/*when we keep on dividing it by 2 then it becomes smaller and smaller and thus gets more close to 
n and thus when it reach more closer to n then we add n -m to the answer whereas if we go from
n to m we don't know exactly what is happening and if we keep on multiplying 7 by 2 we will not be
able to know whether we are to substract 1 or not :)*/

