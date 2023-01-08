#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r, c;
    cin >> r >> c;
    int cr = r,cc = c;
    int row[101] = {0}, column[101] = {0};
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char c;
            cin >> c;
            if (c == 'S')
            {
                row[i]++;
                column[j]++;
            }
        }
    }
    for (int i = 0; i <= 100; i++)
    {
        if (row[i] > 0) r--;
        if (column[i] > 0)c--;
    }
    cout<<cc*r+c*cr-(r*c)<<"\n";
    return 0;
}
/*we are to check the number of non rows and column such that it does not contain
evil strawberry in each row there will
be cc(size of column)eatable cakes) and same for rows also 
in the end substract (r*c)number of common cake for rows and column :)*/