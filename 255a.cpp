#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int chest = 0,biceps = 0,back=0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin>>a;
       if (i%3==1)chest+=a;
       if (i%3==2)biceps+=a;
       if (i%3==0)back+=a;
    }
    if (chest>biceps&&chest>back)cout<<"chest";
    if (biceps>chest&&biceps>back)cout<<"biceps";
    if (back>biceps&&back>chest)cout<<"back";
    return 0;
}
/*we are to solve the question as per given in the statement and apply in 
the solution
i%3 because every exercise is repeating after 3 days :)*/