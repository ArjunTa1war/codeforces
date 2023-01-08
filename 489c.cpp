#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,s;
    cin>>m>>s;
    if (m==1&&s<=9){
        cout<<s<<" "<<s;
        return 0;  }
    if (m*9<s||s<1){
        cout<<"-1 -1";
        return 0;  }
    int r = s%9;
    int n = s/9;
    int check = 0;
    for (int i = 0; i < m-(n+1); i++){
      if (i==0)cout<<1;
      else cout<<0;
      check = 1;
    }
    if (r==0&&check==1){
        cout<<0;
        for (int i = 0; i <n ; i++){
            if (i==0)cout<<8;
            else cout<<9;
        }  
    }
    else if (r>0&&check==1){
       cout<<r-1;
       for (int i = 0; i < n; i++)cout<<9;
    }
    else{
        if (r>0)cout<<r;
        for (int i = 0; i < n; i++)cout<<9;
    }
    cout<<" ";
    for (int i = 0; i < n; i++)cout<<9;
    if(n<m)cout<<r;
    for (int i = 0; i < m-(n+1); i++)cout<<0;
    return 0;
}
/*question is simple but main task is it's implementation
now the s is sum 
for max number we are to use maximum number of 9 in the beginning
and then remainder then 0's
for min number we are to use maximum number of 9 in the end
then start in the series like 1000...remainder99999
now there come three situation first is are we to write 1 
in the beginnning if we are using 1 then the remainder will
be decreased by one but if the remainder is already 0 then
remainder will not be changed instead one 8 will be used instead 
9 so we are to keep in mind that too that no number starts with 0 :)*/