#include <iostream>
using namespace std;
int isprime(int n){
    if (n==2||n==3)return 1;
    else if (n%3==0||n%2==0)return 0;
    for (int i = 5; i*i <= n; i+=6)
    {
        if (n%i==0||n%(i+2)==0)return 0;
    }
    return 1;
}
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int d,a,b;
        cin>>d;
        a = 1+d;
        for (int i = a; i < 1e9; i++)
        {
           if (isprime(i)) {a = i;
            break;}
        }
        b = a+d;
        for (int i = b; i < 1e9; i++)
        {
            if (isprime(i)) {b = i;
            break;}
        }
        cout<<a*b<<"\n";
    }
    return 0;
}
/*it is just that we need to find two prime numbers with distance of atleast d
and in order to find the prime numbers we can use seive of erantothesis and the above
function too so this is the solution for this :)*/


// #include <iostream>
// using namespace std;
// int isprime(int n){
//    if (n==2||n==3)return 1;
//    for (int i = 2; i <= n; i++)
//    {
//        for (int j = i*i; j <= n; j+=i)
//        {
//            if (n==j)return 0;
//        }   
//    }
//    return 1;
// }
// int main()
// {   
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         int d,a,b;
//         cin>>d;
//         a = 1+d;
//         for (int i = a; i < 1e9; i++)
//         {
//            if (isprime(i)) {a = i;
//             break;}
//         }
//         b = a+d;
//         for (int i = b; i < 1e9; i++)
//         {
//             if (isprime(i)) {b = i;
//             break;}
//         }
//         cout<<a*b<<"\n";
//     }
//     return 0;
// }
/*correct though but taking alot of time that is 577ms  Sieve of Eratosthenes*/