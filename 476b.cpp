#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
double fact(int n){
   double ans = 1;
   for (double i = 1; i <=n; i++)ans*=i;
   return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int l1 = s1.length();
    int p=0,n=0,p2=0,n2=0,q2=0;
    for (int i = 0; i < l1; i++)
    {
        if (s1[i]=='+')p++;
        else if (s1[i]=='-')n++; 
        if (s2[i]=='+')p2++;
        else if (s2[i]=='-')n2++;
        else if (s2[i]=='?')q2++;
    }
    double ans = 0.00;
    if (n2>n||p2>p)
    {
        cout<<fixed<<setprecision(9)<<ans<<"\n";
    }
    else
    {
        n = n-n2;
        p = p-p2;//p(finding exact p positive term) = p(finding exact n negative terms)
        double t = pow(2,q2);
        double d = fact(q2)/(fact(q2-n)*fact(n));
        cout<<fixed<<setprecision(9)<<(d/t)<<"\n";
    }
    return 0;
}
/*this question is all about finding the probability
we know that we cannot change the string 2
but we can add in place of ?
so if n2>n or p2>p probability is zero
now comes the number of question marks
p(finding exact p positive term) = p(finding exact n negative terms)
so the formula is ncr
that is n!/(n-r)!r! = a
and the total number of permutations are 2^n = b;
so the probability becomes = b/a :)*/