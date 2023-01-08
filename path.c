#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x1, x2, y1, y2, f1, f2, z = 0;
        scanf("%d%d", &x1, &x2);
        scanf("%d%d", &y1, &y2);
        scanf("%d%d", &f1, &f2);
        if (x1 > y1)
        {
            for (int i = y1; i < x1; i++)
            {

                z = z + 1;
            }
        }
        if (x2 > y2)
        {
            for (int i = y2; i < x2; i++)
            {
                z = z + 1;
            }
        }
        if (y1 >= x1)

        {
            for (int i = x1; i < y1; i++)
            {

                z = z + 1;
            }
        }

        if (y2 >= x2)

        {
            for (int i = x2; i < y2; i++)
            {
                z = z + 1;
            }
        }
        if (x1 == y1 & x1 == f1)
        {
            if (f2 > x2 & f2 < y2)
            {
                z = z + 2;
            }
            if (f2 > y2 & f2 < x2)
            {
            z = z + 2;
            }
            
            
        }
        if (x2 == y2 & x2 == f2)
        {
            if (f1 > x1 & f1 <y1)
            {
                z = z + 2;
            }
            if (f1 > y1 & f1 < x1)
            {
                z = z + 2;
            }
            
        }

        printf("%d", z);
        printf("\n");
    }

    return 0;
}