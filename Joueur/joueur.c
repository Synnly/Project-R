#include "joueur.h"

/* ==================================================================================================================================  */
/* ============================================================  Getters ============================================================  */
/* ==================================================================================================================================  */

float getJoueurX(joueur* Joueur){Joueur->Sprite.x;}
float getJoueurY(joueur* Joueur){Joueur->Sprite.y;}
int getJoueurHeight(joueur* Joueur){Joueur->Sprite.height;}
int getJoueurWidth(joueur* Joueur){Joueur->Sprite.width;}
SDL_Texture* getJoueurTexture(joueur* Joueur){Joueur->Sprite.texture;}

/* ==================================================================================================================================  */
/* ============================================================  Setters ============================================================  */
/* ==================================================================================================================================  */

void setJoueurX(joueur* Joueur, float x){Joueur->Sprite.x = x;}
void setJoueurY(joueur* Joueur, float y){Joueur->Sprite.y = y;}
void setJoueurHeight(joueur* Joueur, int height){Joueur->Sprite.height = height;}
void setJoueurWidth(joueur* Joueur, int width){Joueur->Sprite.width = width;}
void setJoueurTexture(joueur* Joueur, SDL_Texture* texture){Joueur->Sprite.texture = texture;}

/* ==================================================================================================================================  */
/* ===========================================================  Fonctions ===========================================================  */
/* ==================================================================================================================================  */

joueur initJoueur(float x, float y, int height, int width){
    joueur Joueur;
    setJoueurX(&Joueur, x);
    setJoueurY(&Joueur, y);
    setJoueurHeight(&Joueur, height);
    setJoueurWidth(&Joueur, width);
    return Joueur;
}