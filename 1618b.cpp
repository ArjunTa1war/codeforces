#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
 int n;
 cin>>n;
 vector<string>v;
 bool check = true;
 for (int i = 0; i < n-2; i++){
    string s;
    cin>>s;
    if (i>0&&check){
     if ((s[0]!=v[i-1][1])){  
        if (v[i-1][1]=='b') v.push_back("ba");
        else v.push_back("ab");
        check = false;
     }
    }
     v.push_back(s);
 }
    cout<<v[0];
    for (int i = 1; i < v.size(); i++) cout<<v[i][1];
    if (v.size()<n-1)cout<<"a";
    cout<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}

/*question is quite simple we are just to find the
missing bigram and if we find that biagram we are to add it
in the vector and then we can make a word like
first write v[0] and then 2nd element of each string
if we don't find then we can write anything a or b in the end
just to make number of characters = n :)*/