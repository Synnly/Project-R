#ifndef PROJECT_R_SPRITE_H
#define PROJECT_R_SPRITE_H
#include <SDL2/SDL.h>

/**
 * @brief Structure de données d'un sprite
 */
struct sprite_t{
    float x;                  // Coordonnée X
    float y;                  // Coordonnée X
    int height;             // Hauteur du sprite
    int width;              // Largeur du sprite
    SDL_Texture* texture;   // Texture du sprite
};

typedef struct sprite_t sprite;

/* ==================================================================================================================================  */
/* ============================================================  Getters ============================================================  */
/* ==================================================================================================================================  */

/**
 * @param Sprite Le sprite
 * @return Sa coordonnée x
 */
float getSpriteX(sprite* Sprite);

/**
 * @param Sprite Le sprite
 * @return Sa coordonnée y
 */
float getSpriteY(sprite* Sprite);

/**
 * @param Sprite Le sprite
 * @return Sa hauteur
 */
int getSpriteHeight(sprite* Sprite);

/**
 * @param Sprite Le sprite
 * @return Sa largeur
 */
int getSpriteWidth(sprite* Sprite);

/**
 * @param Sprite Le sprite
 * @return Sa texture
 */
SDL_Texture* getSpriteTexture(sprite* Sprite);

/* ==================================================================================================================================  */
/* ============================================================  Setters ============================================================  */
/* ==================================================================================================================================  */

/**
 * Modifie la coordonnée X
 * @param Sprite Le sprite
 * @param x La coordonnée X
 */
void setSpriteX(sprite* Sprite, float x);

/**
 * Modifie la coordonnée Y
 * @param Sprite Le sprite
 * @param x La coordonnée Y
 */
void setSpriteY(sprite* Sprite, float y);

/**
 * Modifie la hauteur
 * @param Sprite Le sprite
 * @param x La hauteur
 */
void setSpriteHeight(sprite* Sprite, int height);

/**
 * Modifie la largeur
 * @param Sprite Le sprite
 * @param x La largeur
 */
void setSpriteWidth(sprite* Sprite, int width);

/**
 * Modifie la texture
 * @param Sprite Le sprite
 * @param x La texture
 */
void setSpriteTexture(sprite* Sprite, SDL_Texture* texture);

/* ==================================================================================================================================  */
/* ===========================================================  Fonctions ===========================================================  */
/* ==================================================================================================================================  */

/**
 * Initialise un sprite
 * @param x Sa coordonnée X
 * @param y Sa coordonnée Y
 * @param height Sa hauteur
 * @param width Sa largeur
 * @param texture Sa texture
 * @return Le sprite initialisé
 */
sprite initSprite(float x, float y, int height, int width, SDL_Texture* texture);

#endif //PROJECT_R_SPRITE_H