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
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int dual = 0,white=0,single=0;
        for (int i = 0; i < n; i++)
        {   string s;
            cin>>s;
            for (int i = 0; i < m; i++)if (s[i]=='.')white++;
            for (int j = 0; j < m-1; j++)
            {
                if (s[j]=='.'&&s[j+1]=='.'){
                    dual++;
                    j++;
                }
            }
        }
  single = white-(2*dual);
  single*=x;
  dual = min((2*dual*x),(dual*y));
  cout<<single+dual<<"\n";
}
    return 0;
}
/*we are just to minimize the cost so we have two option
either buy the tile of 1*2 if there are two white spaces
in 1*2 or either buy the 1*1 tile
and after finding the number of 1*2 shapes we can calculate
which will be cheaper buying 1*1 tiles or buying 1*2 tiles
for 1*2 shape 
in the end we are to add the cost :)*/