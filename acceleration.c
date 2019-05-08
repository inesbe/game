#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "acceleration.h"


int acceleration(int x,int vitesse)
{
if(vitesse>30)
{
vitesse-=2;
}
else if (x>100)
{
vitesse++;
}

return vitesse;
}
