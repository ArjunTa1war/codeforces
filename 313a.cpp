#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a = n/10;
    a = max(a,n);
    int b = n/100;
    b = (b*10)+n%10;
   cout<<max(a,b);
    return 0;
}
/*here we are first to delete last term and then second last term 
and check which is greater among n,a,b and thus to delete last digit
we take the % and for deleting the second last digit
we will first divide it by 100 to take the first digits upto second last
then we are to add the last digit to it it can be possible only if
we multiply it by 10 and then add :)*/