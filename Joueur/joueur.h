#ifndef PROJECT_R_JOUEUR_H
#define PROJECT_R_JOUEUR_H

#include "../Sprite/sprite.h"

/**
 * Structure de données du joueur
 */
struct joueur_t{
    sprite Sprite;
    int speed;
};

typedef struct joueur_t joueur;

/* ==================================================================================================================================  */
/* ============================================================  Getters ============================================================  */
/* ==================================================================================================================================  */


/**
 * @param Joueur Le joueur
 * @return Sa coordonnée x
 */
float getJoueurX(joueur* Joueur);

/**
 * @param Joueur Le joueur
 * @return Sa coordonnée y
 */
float getJoueurY(joueur* Joueur);

/**
 * @param Joueur Le joueur
 * @return Sa hauteur
 */
int getJoueurHeight(joueur* Joueur);

/**
 * @param Joueur Le joueur
 * @return Sa largeur
 */
int getJoueurWidth(joueur* Joueur);

/**
 * @param Joueur Le joueur
 * @return Sa texture
 */
SDL_Texture* getJoueurTexture(joueur* Joueur);

/* ==================================================================================================================================  */
/* ============================================================  Setters ============================================================  */
/* ==================================================================================================================================  */

/**
 * Modifie la coordonnée X du joueur
 * @param Sprite Le sprite
 * @param x La coordonnée X
 */
void setJoueurX(joueur* Joueur, float x);

/**
 * Modifie la coordonnée Y du joueur
 * @param Joueur Le sprite
 * @param x La coordonnée Y
 */
void setJoueurY(joueur* Joueur, float y);

/**
 * Modifie la hauteur du joueur
 * @param Joueur Le sprite
 * @param x La hauteur
 */
void setJoueurHeight(joueur* Joueur, int height);

/**
 * Modifie la largeur du joueur
 * @param Joueur Le sprite
 * @param x La largeur
 */
void setJoueurWidth(joueur* Joueur, int width);

/**
 * Modifie la texture du joueur
 * @param Joueur Le sprite
 * @param x La texture
 */
void setJoueurTexture(joueur* Joueur, SDL_Texture* texture);

/* ==================================================================================================================================  */
/* ===========================================================  Fonctions ===========================================================  */
/* ==================================================================================================================================  */

/**
 * Initialise un joueur
 * @param x Sa coordonnée X
 * @param y Sa coordonnée Y
 * @param height Sa hauteur
 * @param width Sa largeur
 * @return Le joueur initialisé
 */
joueur initJoueur(float x, float y, int height, int width);

#endif //PROJECT_R_JOUEUR_H