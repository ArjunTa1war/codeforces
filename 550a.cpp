#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
   string s;
   int chk1=0,chk2=0;
   cin>>s;
   string s2 = s;
   for (int i = 0; i <int(s.length())-1; i++){
      if(s[i]=='A'&&s[i+1]=='B'){
            chk1 = 1;
            s[i]='x';
            s[i+1]='x';
            break;
      }
   }
   for (int i = 0; i <int(s.length())-1; i++){
      if(s[i]=='B'&&s[i+1]=='A'){
            chk2= 1;
            s[i]='x';
            s[i+1]='x';
            break;
      }
   }
   if(chk1+chk2==2){
       cout<<"YES\n";
       return;
   }
   chk1=0;
   chk2=0;
   for (int i = 0; i <int(s2.length())-1; i++){
      if(s2[i]=='B'&&s2[i+1]=='A'){
            chk1 = 1;
            s2[i]='x';
            s2[i+1]='x';
            break;
      }
   }
   for (int i = 0; i <int(s2.length())-1; i++){
      if(s2[i]=='A'&&s2[i+1]=='B'){
            chk2= 1;
            s2[i]='x';
            s2[i+1]='x';
            break;
      }
   }
    if(chk1+chk2==2){
       cout<<"YES\n";
       return;
   }
   cout<<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
} 
/*we are to search for AB and BA such that they don't overlap
the best way to make a copy of two string and in first one
check for AB first then BA in other string check for BA first and
then for AB
we are to check both the cases as if we check AB firstly and BA then
for eg
the string is ABAxxxxAB now if we check AB first then it becomes 
xxAxxxxAB now there is no BA so it will give out answer NO which is wrong
and if we check for BA first here then it will give the right answer :)*/