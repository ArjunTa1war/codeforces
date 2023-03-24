#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mp;
    for(int i = 1;i<6;i++){
        mp[i]++;
    }
    for (int i = 1; i < 7; i++){
        if(mp[i]-->0)cout<<"HELLO\n";
    }
    for(auto &x : mp)cout<<x.first<<" "<<x.second<<"\n";
}