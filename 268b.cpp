#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n, ans = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    ans = ans + ((i - 1) * (n - i)) + i;
  }
  cout << ans;
  return 0;
}
/*we have used back tracking here that is we are starting from the end
if only n digit is left then there are (i-1)possibilities that keys are
wrong and if the key is wrong than we need to press all the keys above that
key so (n-i)addresses the number of keys present above it 
and i-1 addresses the the number of wrong keys in the line 
and i is the number of keys in it and thus we can find the answer :)*/