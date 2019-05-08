prog:main.o acceleration.o jump.o personnage.o
	gcc main.o acceleration.o jump.o personnage.o -o prog -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g
main:main.c jump.h personnage.h	
	gcc -c main.c jump.h personnage.h
personnage:personnage.c  personnage.h	
	gcc -c personnage.c personnage.h
jump:jump.c jump.h personnage.h	
	gcc -c jump.c jump.h personnage.h
jump:acceleration.c acceleration.h personnage.h	
	gcc -c acceleration.c acceleration.h personnage.h
