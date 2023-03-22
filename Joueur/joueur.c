#include "joueur.h"
#include <string.h>

/* ==================================================================================================================================  */
/* ============================================================  Getters ============================================================  */
/* ==================================================================================================================================  */

float getJoueurX(joueur* Joueur){return Joueur->Sprite.x;}
float getJoueurY(joueur* Joueur){return Joueur->Sprite.y;}
int getJoueurHeight(joueur* Joueur){return Joueur->Sprite.height;}
int getJoueurWidth(joueur* Joueur){return Joueur->Sprite.width;}
float getJoueurSpeed(joueur* Joueur){return Joueur->speed;}
SDL_Texture* getJoueurTexture(joueur* Joueur){return Joueur->Sprite.texture;}

/* ==================================================================================================================================  */
/* ============================================================  Setters ============================================================  */
/* ==================================================================================================================================  */

void setJoueurX(joueur* Joueur, float x){Joueur->Sprite.x = x;}
void setJoueurY(joueur* Joueur, float y){Joueur->Sprite.y = y;}
void setJoueurHeight(joueur* Joueur, int height){Joueur->Sprite.height = height;}
void setJoueurWidth(joueur* Joueur, int width){Joueur->Sprite.width = width;}
void setJoueurSpeed(joueur* Joueur, float speed){Joueur->speed = speed;}
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
    setJoueurSpeed(&Joueur, 4.);
    return Joueur;
}

void joueurToString(joueur* Joueur){
    printf("x %.3f, y %.3f, w %d, h %d\n", getJoueurX(Joueur), getJoueurY(Joueur), getJoueurWidth(Joueur), getJoueurHeight(Joueur));
}

void movePlayer(joueur* Joueur, const char* direction){
    if(strcmp("gauche", direction) == 0){
        setJoueurX(Joueur, (getJoueurX(Joueur) - getJoueurSpeed(Joueur)));
    }
    else if(strcmp("droite", direction) == 0){
        setJoueurX(Joueur, (getJoueurX(Joueur) + getJoueurSpeed(Joueur)));
    }
    else if(strcmp("haut", direction) == 0){
        setJoueurY(Joueur, (getJoueurY(Joueur) - getJoueurSpeed(Joueur)));
    }
    else if(strcmp("bas", direction) == 0){
        setJoueurY(Joueur, (getJoueurY(Joueur) + getJoueurSpeed(Joueur)));
    }
}