#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int fifty = 0, tfive = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 25)
        {
            tfive++;
        }
        else if (arr[i] == 50)
        {
            fifty++;
            if (tfive >= 1)
            {
                tfive--;
            }
            else
            {
                cout << "NO\n";
                exit(0);
            }
        }
        else if (arr[i] == 100)
        {
            if (fifty >= 1 && tfive >= 1)
            {
                fifty--;
                tfive--;
            }
            else if (tfive >= 3)
            {
                tfive -= 3;
            }
            else
            {
                cout << "NO\n";
                exit(0);
            }
        }
    }
    cout << "YES\n";
    return 0;
}
/*if the clerk is able to give the change to the every person then only
he can sell all tickets now initially he has 0 change
cost of the ticket is 25
so the person who is giving 25 rs note change =0
so the person who is giving 50 rs note change = 25
so the person who is giving 100 rs note change =25+25+25 or 25+50
so we are to check the conditions if all the conditions satisfies then
print yes otherwise no :)*/