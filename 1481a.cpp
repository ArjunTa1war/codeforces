#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int a = 0,b=0,c=0,d=0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]=='U')a++;
            else if(s[i]=='D')b++;
            else if (s[i]=='R') c++;
            else if (s[i]=='L') d++;
        }
        if (x>=0&&y>=0)
        {
            if (c>=abs(x)&&a>=abs(y))
            {
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
        else if (x<=0&&y<=0)
        {
            if (d>=abs(x)&&b>=abs(y))
            {
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
        else if (x<=0&&y>=0)
        {
            if (d>=abs(x)&&a>=abs(y))
            {
                cout<<"YES\n";
            }
            else cout<<"NO\n";  
        }
        else if (x>=0&&y<=0)
        {
            if (c>=abs(x)&&b>=abs(y))
            {
                cout<<"YES\n";
            }
            else cout<<"NO\n";  
        }
    }
    return 0;
}
/*we are to go the the given point from the beginning so we need to check
how many steps in max rocket can go in every direction and after than we need
to check the graph that whether the rocket can go to this point or not as
we can delete some commands so we need to find the max possible distance rocket
can go in any direction 
and then check for all quadrants :)*/