#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "personnage.h"
#include "jump.h"

int jumpin(personnage *p,SDL_Surface* background,int jump,SDL_Surface* screen)  
{
int j;
int i=0;
int r=0;
if(jump==1)
{
for(j=0;j<4;j++)
{
SDL_Delay(80);
p->persopos.x+=10;             
p->persopos.y-=20;
SDL_BlitSurface(background,NULL,screen,NULL);
monterdujump(p,screen);
SDL_Flip(screen);
}
printf("%d %d \n",p->persopos.x,p->persopos.y);
                                  // D==0 veux dire c'est le stage 1-1	                                 // on va faire pour D==1 et D==2 jusqu'a la fin du jeu 
	
for(j=0;j<4;j++)
{
SDL_Delay(80);	
p->persopos.y+=20;
SDL_BlitSurface(background,NULL,screen,NULL);	
decentedujump(p,screen,j);
SDL_Flip(screen);
}
printf("%d %d \n",p->persopos.x,p->persopos.y);

 }

return 0;
 }

