#include <iostream>
using namespace std;

int main()
{
  int n, k, q = 0, count = 0;
  cin >> n >> k;
  //time for solving the problem as there are 4hrs
  int x = 240 - k;
  for (int i = 1; i <= n; i++)
  {
    q += 5 * i;
    if (q > x)
      break;
    count++;
  }
  cout << count;

  return 0;
}