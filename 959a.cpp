#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if (n%2!=0)
    {
       cout<<"Ehab";
    }
    else 
    {
      cout<<"Mahmoud";
    }    
    return 0;
}
/*explaination if n is even then mahmood will select the number as
even and will win the game whereas if number is odd then mahmod can
only select even as odd-even = odd therefore ehab will select any
odd number a and thus will win the game :)*/