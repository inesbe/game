#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "personnage.h"
#include "jump.h"
 
int jumpcollisionstage1_3(int x,int y)
{
int i;	
int Tx[3];
int Ty[3];
Tx[0]=90;
Ty[0]=290;
Tx[1]=350;
Ty[1]=290;
Tx[2]=410;
Ty[2]=210;
for(i=0;i<3;i++)
{
if(x==Tx[i] && y==Ty[i])
{	
return 1;	
}	
}	
return 0;
}


int jumpin(personnage *p,SDL_Surface* background,int jump,SDL_Surface* screen)  
{
int j;
int r;
int i=0;
if(jump==1)
{
for(j=0;j<4;j++)
{
SDL_Delay(30);
p->persopos.x+=10;             
p->persopos.y-=20;
SDL_BlitSurface(background,NULL,screen,NULL);
monterdujump(p,screen);
SDL_Flip(screen);
}

printf("%d %d \n",p->persopos.x,p->persopos.y);
r=jumpcollisionstage1_3(p->persopos.x,p->persopos.y);
if(r==1)
{
return 0;
}                                  // D==0 veux dire c'est le stage 1-1	                                 // on va faire pour D==1 et D==2 jusqu'a la fin du jeu 
	
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


