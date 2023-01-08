#include <iostream>
#include <algorithm>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=0;
    cin>>n;
    int a[n],b[n];
    for (int i = 0; i < n; i++) cin>>a[i]>>b[i];
    for (int i = 0; i < n-1; i++){
       for (int j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
            swap(&a[j], &a[j+1]);
            swap(&b[j],&b[j+1]);}
       }
   }
   for (int i = 0; i < n-1; i++){
       int num = i;
       while (a[i]==a[i+1]&&i<n){
           sort(b+num,b+i+2);
           i++;
       }
   }
   ans = min(a[0],b[0]);
   for (int i = 1; i < n; i++){
       if (b[i]>=ans)ans = b[i];
       else ans = a[i];
   }
   cout<<ans<<"\n";
   return 0;
}
/*we are given a[i] and b[i] so we can choose the date of test
as a[i] or b[i] and then we need to check this that the number we are 
taking should be in increasing order and greater than or equal to
the previous day if the b[i] is less then the previous day
then we need to give that exam on a[i] and if a[i] is same then
we are to sort b[i] in order to find the answer :)*/