#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int c,d;
        cin>>c>>d;
        if (c==0&&d==0)
        {
            cout<<0<<"\n";
        }
        else if (c==d)
        {
            cout<<1<<"\n";
        }
        else if (c%2==0 && d%2==0 || c%2 !=0 && d%2 !=0)
        {
            cout<<2<<"\n";
        }
        else cout<<-1<<"\n";
    }
    
    return 0;
}
/*explaination
acc. to question we can either add k to both or add k to a and substract k from b or vice versa
we are starting a and b from 0 and we are to make them c and d so both should be even then
there can be a middle pont in between them and if they are odd too then also there might be a middle
point inbetween them if they are difference like one of them is odd and other is even
then there can not be middle point so the solution cannot be made
now we are to take middle term of them in first step we will add middle number to it
then we will add and substract equal amt. of k to a and b then no. of steps will be
2 no other posssibilities are there :)*/
