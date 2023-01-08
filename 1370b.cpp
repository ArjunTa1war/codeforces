#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int even[2*n],odd[2*n];
        int e=0,o=0;
        for (int i = 0; i < 2*n; i++)
        {
          int a;
          cin>>a;
          if (a%2==0){
              even[e] = i+1;
              e++;}
          else if (a%2!=0)  {
            odd[o] = i+1;
            o++;}
        }
        if (e%2!=0&&o%2!=0)
        {
        for (int i = 0; i < e-2; i+=2) cout<<even[i]<<" "<<even[i+1]<<"\n";   
        for (int i = 0; i < o-2; i+=2) cout<<odd[i]<<" "<<odd[i+1]<<"\n";
        }
        else
        {
            if (o>0&&e>0)
            {
                for (int i = 0; i < e-1; i+=2)cout<<even[i]<<" "<<even[i+1]<<"\n";   
                for (int i = 0; i < o-3; i+=2)cout<<odd[i]<<" "<<odd[i+1]<<"\n";
            }
            else
            {
               for (int i = 0; i < e-3; i+=2)cout<<even[i]<<" "<<even[i+1]<<"\n";  
               for (int i = 0; i < o-3; i+=2)cout<<odd[i]<<" "<<odd[i+1]<<"\n";
            }
        }
    }
    return 0;
}
/*question is simple we are to take the pair of any two number such that 
the gcd of new array whose numbers are made by the addition of these two numbers
is greater than 1 so the solution is we are to output the position of those numbers
now we know that total numbers of elements are even that's why 
odd%2==even%2 that is parity  is same 
if when number of odd(o) is odd same as number of evens
we will take o-1 odd numbers and e-1 even number in this way total pairs will be n-1\
if the number of even is even then we need to take all even and n-2 odds or vice versa
and consider condtions with 0evens and 0odds too :)*/