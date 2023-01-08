#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, count = 0;
        cin >> n;
       while (n%6==0)
       {
        n = n/=6;
        count++;   
       }
       while (n%3==0)
       {
           n/=3;
           count+=2;
       }
        if (n == 1)
        {
            cout << count << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}

/*if on any number there are two operations possible that is divided by 6 and multiplied by 2
that means it can be divided by 3 and 6 only and it should be written in the form of 
m=1*2/6,*2/6 or you can say that divided by 3 and 6 and thus can be written in the form of
m= 3*3*6*6 and so on thus this is the logic:)
if n is divided by 3 then it means count +=2 as in this two operations are done i.e divid by 6 and 
multiply by 2*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++)
//     {
//         int n, count = 0;
//         cin >> n;
//         {
//             while (1)
//             {
//                 if (n == 1)
//                 {
//                     cout << count << "\n";
//                     break;
//                 }
//                 else if (n%5==0||n%7==0||n>1e9)
//                 {
//                     cout << -1 << "\n";
//                     break;
//                 }
//                 else if (n % 6 == 0)
//                 {
//                     n = n / 6;
//                     count++;
//                 }
//                 else if (n % 6 != 0)
//                 {
//                     n = n * 2;
//                     count++;
//                 }
//             }
//         }
//     }
//     return 0;
// }
/*if n can be divided by any prime number then by any kind of operation it cannot become 
1;*/
