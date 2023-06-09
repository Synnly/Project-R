#include "sprite.h"

/* ==================================================================================================================================  */
/* ============================================================  Getters ============================================================  */
/* ==================================================================================================================================  */

float getSpriteX(sprite* Sprite){return Sprite->x;}
float getSpriteY(sprite* Sprite){return Sprite->y;}
int getSpriteHeight(sprite* Sprite){return Sprite->height;}
int getSpriteWidth(sprite* Sprite){return Sprite->width;}
SDL_Texture* getSpriteTexture(sprite* Sprite){return Sprite->texture;}

/* ==================================================================================================================================  */
/* ============================================================  Setters ============================================================  */
/* ==================================================================================================================================  */

void setSpriteX(sprite* Sprite, float x){Sprite->x = x;}
void setSpriteY(sprite* Sprite, float y){Sprite->y = y;}
void setSpriteHeight(sprite* Sprite, int height){Sprite->height = height;}
void setSpriteWidth(sprite* Sprite, int width){Sprite->width = width;}
void setSpriteTexture(sprite* Sprite, SDL_Texture* texture){Sprite->texture = texture;}

/* ==================================================================================================================================  */
/* ===========================================================  Fonctions ===========================================================  */
/* ==================================================================================================================================  */

sprite initSprite(float x, float y, int height, int width, SDL_Texture* texture){
    sprite Sprite;
    setSpriteX(&Sprite, x);
    setSpriteY(&Sprite, y);
    setSpriteHeight(&Sprite, height);
    setSpriteWidth(&Sprite, width);
    setSpriteTexture(&Sprite, texture);
    return Sprite;
}