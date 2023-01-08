#include <iostream>
#define ll long long
using namespace std;

ll sum(ll n){
   return (n*(n+1)/2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll r = n%m;
    ll single = (n/m);
    single = sum(single-1)*(m-r);
    ll m_in = 0;
    if (r!=0){ 
      m_in = (n/m)+1;
      m_in = sum(m_in-1);
      m_in = m_in*r;
    }
    cout<<single+m_in<<" ";
    int m_ax = n-m+1;
    cout<<sum(m_ax-1);
    return 0;
}
/*we are given two values number of participants and number of teams
so all members in team can become friends
we can find  maximum number of pair of friends by keeping 
the max possilbe number of paricipants in one team and in all other teams
keep 1-1 participants so that will be n-m+1 (max number of participants in 
one team) so we are to find it's sum that is sum(max-1)
now for the minimum one we are to keep equal participants in every team and
check all the possible pairs that will be n/m each now count the sum of all 
the pairs possible for single team total will be 
sum(single-1) so for all the teams where the participants are exactly n/m are
single*(m-r) now if the remainder is not zero then for r teams the 
participant number will be n/m +1 in the end we are to add number of single+max :)*/