#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <SDL_image.h>
#include <fmodex/fmod.h>
#include <SDL_ttf.h>
#include "Classes.h"
#include "Functions.h"

const int SCREEN_WIDTH = 640; //constante largeur �cran
const int SCREEN_HEIGHT = 480; //constante hauteur �cran
const int SCREEN_BPP = 32; //constante profondeur couleur

const int NORTH = 0; /*constantes pour orientation de d�part des persos, north = de dos*/
const int SOUTH = 1; /*south = de face*/
const int WEST = 2; /*west = tourn� vers la gauche*/
const int EAST = 3; /*east = tourn� vers la droite*/

const int DEFAULT_SPEED = 300; /*vitesse de d�placement par d�faut*/

const int FRAMES_PER_SECOND = 30;


#endif // HEADER_H_INCLUDED