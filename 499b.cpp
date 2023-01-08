#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    string first[m],second[m];
    for (int i = 0; i < m; i++)
    {
         cin>>first[i];
         cin>>second[i];
    }
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        for (int j = 0; j < m; j++)
        {
            if (s==first[j]||s==second[j])
            {
               if (first[j].length()<=second[j].length())
               {
                   cout<<first[j]<<" ";
               }
               else
               {
                   cout<<second[j]<<" ";
               }
            }          
        }   
    }
    return 0;
}
/*we are given a m letters (consisting of two strings)
we are to choose the one with short string length 
and we are given a string with n strings
we are to replace that string with the shorter one or
if it is short then just write it as it is :)*/