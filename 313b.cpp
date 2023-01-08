#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    int arr[100001];
    arr[0] = 0;
    cin >> str;
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == str[i-1])
        {
            sum++;
        }
        arr[i] = sum;
    } 
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        cout<<arr[r-1] - arr[l-1]<<"\n";
    }
    return 0;
}
/*explaination
we are just to find the number of terms where s[i] = s[i+1]
in between the terms l and r 
take an array such that it starts from 1 and ends at n-1
the number of such condition such that si = si+1 are taken in an array
arr[1] is the value of s[0] and s[1] terms;
arr2] is the value for s[1] and s[2] terms and so on 
arr[n] is the number of pairs till n+1 terms or till s[n];
now we are given two numbers if we want to find the number of terems where s[i] = s[i+1]
we need to find the number of terms till r and substract l from it
the number of terms till r is arr[r-1]; ans same for s;
third term is s[2] and total pairs between them will will be arr[2];
*/