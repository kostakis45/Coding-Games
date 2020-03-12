#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// https://stackoverflow.com/questions/1787996/c-library-function-to-perform-sort
int comp(const void *elem1, const void *elem2);

int main()
{
    int N, diff, temp_diff, strenght = 0, i;
    scanf("%d", &N);
    int temp_strenght[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &strenght);
        temp_strenght[i] = strenght;
    }

    qsort (temp_strenght, N, sizeof(*temp_strenght), comp);

    diff = temp_strenght[1] - temp_strenght[0];

    for (i = 2; i < N; i++)
    {
        temp_diff = temp_strenght[i] - temp_strenght[i - 1];
        if (diff > temp_diff)
        {
            diff = temp_strenght[i] - temp_strenght[i - 1];
        }        
    }

    printf("%d\n", diff);

    return 0;
}
// https://stackoverflow.com/questions/1787996/c-library-function-to-perform-sort
int comp(const void *elem1, const void *elem2)
{
    int f = *((int *)elem1);
    int s = *((int *)elem2);
    if (f > s)
        return 1;
    if (f < s)
        return -1;
    return 0;
}