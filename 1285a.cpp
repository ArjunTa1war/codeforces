#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << n + 1 << "\n";
    return 0;
}
/*mezo can go to the n positions if she moves atleast one step either to left
or right so total places where she can be is n 
but if she moves no steps then her position will be 0 
so the total number of position is n+1 :)*/