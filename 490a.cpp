#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t1 = 0, t2 = 0, t3 = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            t1++;
        if (arr[i] == 2)
            t2++;
        if (arr[i] == 3)
            t3++;
    }
    int w = min(t1, t2);
    w = min(w, t3);
    cout << w << "\n";
    while (w--)
    {
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == i)
                {
                    cout << j + 1 << " ";
                    arr[j] = 5;
                    break;
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
/*explaination
as 1,2 ,3 stands for specialities
and in a team all 3 would be required and the minimum one
would be total number of teams 
now we will find the positions of 1,2,3
and mark it if we find 1,2,3 we mark the arr[i] = 5
as 5 is greater than 3 so it will not be checked again and again
 thus we will get all distinct numbers :)*/