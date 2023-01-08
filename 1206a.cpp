#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
        cin >> A[i];
    cin >> b;
    int B[b];
    for (int i = 0; i < b; i++)
        cin >> B[i];
    sort(A, A + a);
    sort(B, B + b);
    cout << A[a - 1] << " " << B[b - 1] << "\n";
    return 0;
}
/*if we take the maximum of array a = A;
and take the maximum of array b = B;
it is quite obvious that A+B will not be present
in any of these arrays :)*/