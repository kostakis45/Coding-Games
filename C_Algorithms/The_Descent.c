#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // game loop
    while (1) {
        int maximum = 0;
        int imaximum = 0;
        for (int i = 0; i < 8; i++) {
            // represents the height of one mountain.
            int mountain_h;
            scanf("%d", &mountain_h);
            
            if (mountain_h > maximum) {
                maximum = mountain_h;
                imaximum = i;
            } 
        }
        printf("%d\n",imaximum); // The index of the mountain to fire on.
    }
    return 0;
}