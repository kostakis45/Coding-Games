#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // the number of temperatures to analyse
    int n, t, min = 0, max = 0, result;
    scanf("%d", &n);
    if (n == 0)
    {
        result = 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            // a temperature expressed as an integer ranging from -273 to 5526
            scanf("%d", &t);

            if (t == 0)
            {
                result = 0;
                goto print_result;
            }
            if (t < 0 && max == 0)
            {
                max = t;
            }

            if (t < 0 && max < t)
            {
                max = t;
            }

            if (t > 0 && min == 0)
            {
                min = t;
            }

            if (t > 0 && min > t)
            {
                min = t;
            }
        }

        if (min == 0)
        {
            result = max;
        }
        else if (max == 0)
        {
            result = min;
        }
        else if (abs(max) == abs(min))
        {
            result = min;
        }
        else if (abs(max) > abs(min))
        {
            result = min;
        }
        else if (abs(max) < abs(min))
        {
            result = max;
        }
    }

    print_result:

    printf("%d\n", result);

    return 0;
}