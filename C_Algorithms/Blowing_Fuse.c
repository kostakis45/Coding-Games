#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n, m, c, max = 0, force = 0,  id;

    scanf("%d%d%d", &n, &m, &c);
    int dev_a[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", dev_a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &id);

        force += dev_a[id];
        dev_a[id] = dev_a[id];

        if (force > max)
            max = force;
    }

    if (max > c)
        printf("Fuse was blown.");
    else
        printf("Fuse was not blown.\n"
               "Maximal consumed current was %d A.",
               max);

    return 0;
}