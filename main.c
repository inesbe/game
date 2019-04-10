#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "personnage.h"
#include "jump.h"



int main()
{
personnage p;
int jump=0;
int attaque=0;
int i=0;
int pause=0;
int quit=1;
SDL_Surface* screen;
SDL_Surface* background;
background=IMG_Load("stage-1-1.png");
initpersonnage(&p);

SDL_Init(SDL_INIT_VIDEO);
screen=SDL_SetVideoMode(800,561,32,SDL_HWSURFACE);
SDL_EnableKeyRepeat(50,50);
while(quit==1)
{
SDL_BlitSurface(background,NULL,screen,NULL);
i=inputperso(&p,i,&jump,&pause,&attaque);
jump=jumpin(&p,background,jump,screen);  
affichezpersonnage(&p,i,screen);
SDL_Delay(50);
 	
SDL_Flip(screen);
}




}
