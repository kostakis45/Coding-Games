#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    
    int light_x; // the X position of the light of power    
    int light_y; // the Y position of the light of power    
    int initial_tx; // Thor's starting X position    
    int initial_ty; // Thor's starting Y position

    scanf("%d%d%d%d", &light_x, &light_y, &initial_tx, &initial_ty); 
    
    // game loop
    while (1) {
        // The remaining amount of turns Thor can move. Do not remove this line.
        int remaining_turns;
        scanf("%d", &remaining_turns);
        
         char *dirX = ""; //S,E,W,N directions for printing
         char *dirY = ""; //S,E,W,N directions for printing
         
        if (initial_ty > light_y){
            dirY = "N";
            initial_ty--;
        }else if (initial_ty < light_y){
           dirY = "S";
            initial_ty++;
        }

         if (initial_tx > light_x){
            dirX = "W";
            initial_tx--;
        }else if (initial_tx < light_x){
           dirX = "E";
            initial_tx++;
        }
        printf("%s%s\n",dirY,dirX);
        
    }    
    return 0;
}