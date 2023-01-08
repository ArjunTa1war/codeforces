#ifdef LOCAL
#include "arjun.hpp"
#else
#include <bits/stdc++.h>
using namespace std;
#define dbg(...)
#endif
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)

bool is_prime(int n){
  for (int i = 2; i*i <= n; i++){
     if(n%i==0)return false;
  }
  return true;
}

void solve(){
   int n;
   cin>>n;
   if(is_prime(n))return void(cout<<"1\n");
   if(n%2==0||is_prime(n-2))return void(cout<<"2\n");
   cout<<"3\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*this question is based on the fact that every even number can be defined
in the terms of two prime numbers :)*/