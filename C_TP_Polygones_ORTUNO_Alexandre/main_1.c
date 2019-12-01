#include "stdio.h"
#include "stdlib.h"
#include "math.h"


struct coord_points_polygone
{
    int coord_x,coord_y;
};


float vecteur_print(struct coord_points_polygone *tab_coord)
{
    float perimetre = 0;
    int vect_B = 1;

    for(int vect_A = 0; vect_A < 6; vect_A++)
    {
        if(vect_B == 6)
            vect_B = 0;
        perimetre = sqrt(pow(tab_coord[vect_B].coord_x - tab_coord[vect_A].coord_x , 2) + pow(tab_coord[vect_B].coord_y - tab_coord[vect_A].coord_y , 2)) + perimetre;
        vect_B++;
    }
    
    printf("%f\n", perimetre);
}

int main(int argc, char *argv)
{
    struct coord_points_polygone tab_coord[6]= 
    {
        {2,0},
        {6,0},
        {10,2},
        {8,6},
        {2,8},
        {0,4}
    };
    vecteur_print(tab_coord);
    
    return(0);
}