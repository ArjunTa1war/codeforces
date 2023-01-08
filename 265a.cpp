#include <iostream>
#include <string>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s,t;
  cin>>s>>t;
  int j = 0;
  for (int i = 0; i < t.length(); i++)
  {
    if (t[i]==s[j])  j++;
    if (j==s.length())
    {
      cout<<s.length()<<"\n";
      exit(0);
    }
    
  }
  cout<<j+1<<"\n";
  return 0;
}
/*the t is instruction if the instruction  match the current position of
squirrel then squirrel move to one position right and we are to calculate
the final position of squirrel :)*/