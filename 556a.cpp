#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string str;
    cin>>str;
    int a =0,b = 0;
    for (int i = 0; i < n; i++)
    {  
       if (str[i]=='0')
       {
           a++;
       }
       else
       {
           b++;
       }
    }
    cout<<abs(a-b);
    return 0;
}
/*we are just to find the number of 1's and number of
0's we are to delete two adjecnt 0 and 1 and check again and keep on deleting these two adjecent 
0 and 1 in string and the answer will be (abs(a-b))as the string might consist of 10 and 01 if this
does not happens then the integer left will make a string 
if the number is 101010 then it will be zero
if the number is 111000 then also it will be zero as first middle 10 will be eliminated
then again keep on eliminating and if the number is 1001 then also we can delete all number
if we keep on deleting 01 and 10 only :)*/