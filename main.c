#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "personnage.h"
#include "jump.h"
#include "acceleration.h"


int main()
{
personnage p;
int jump=0;
int attaque=0;
int i=0;
int vitesse=10;
int pause=0;
int quit=1;
int j;
SDL_Surface* screen;
SDL_Surface* background;
background=IMG_Load("stage1-3.png");
initpersonnage(&p);

SDL_Init(SDL_INIT_VIDEO);
screen=SDL_SetVideoMode(800,561,32,SDL_HWSURFACE);
SDL_EnableKeyRepeat(50,50);
while(quit==1)
{
printf("x est %d et y est %d \n",p.persopos.x,p.persopos.y);


gravitestage1_1(&p,screen,background,i);
gravitestage2_1(&p,screen,background,i);


	
printf("la vitesse est %d \n",vitesse);
//vitesse=acceleration(p.persopos.x,vitesse);
SDL_BlitSurface(background,NULL,screen,NULL);
i=inputperso(&p,i,&jump,&pause,&attaque,vitesse);
jump=jumpin(&p,background,jump,screen);  
affichezpersonnage(&p,i,screen);
collisionbackground(&p);
SDL_Delay(50);
 	
SDL_Flip(screen);
}




}
