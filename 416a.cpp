#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v), end(v)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int st =  2000000000;  // smaller than
    int gt = -2000000000; // greater than
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        int num;
        cin >> num;
        char crt;
        cin >> crt;
        if (s == ">="){
            if (crt == 'Y') gt = max(num-1,gt);
            else st = min(num,st);
        }
        else if (s == ">"){
            if (crt == 'Y') gt = max(num,gt);
            else st = min(num+1,st);
        }
        else if (s == "<="){
            if (crt == 'Y')st = min(num+1,st);
            else gt = max(num,gt);
        }
        else if (s == "<"){
            if (crt == 'Y')st = min(num,st);
            else gt = max(num-1,gt);
        }
        if(st<=gt+1)return void(cout<<"Impossible\n");
    }
    cout<<st-1<<"\n";
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
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*we are to use naive appraoch here take the intervals here that is
smaller than and greater than that the number should be smaller than 
and greater than those numbers we are to visit line by line
and keep on updating the value of gt and st and we are to stop
if st<=gt+1 as if a number is less than 4 and greater than 3 there
exists no value :)*/