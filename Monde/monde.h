#ifndef PROJECT_R_MONDE_H
#define PROJECT_R_MONDE_H

#include <stdbool.h>
#include "../Joueur/joueur.h"

/**
 * Structure de données du monde du jeu
 */
struct monde_t{
    joueur* Joueur;
    bool enJeu;
};

typedef struct monde_t monde;


/* ==================================================================================================================================  */
/* ============================================================  Getters ============================================================  */
/* ==================================================================================================================================  */

/**
 * @param Monde Le monde du jeu
 * @return Le joueur
 */
joueur* getJoueur(monde* Monde);

/**
 * @param Monde Le monde du jeu
 * @return True si le jeu est en cours, False sinon
 */
bool isGamePlaying(monde* Monde);

/* ==================================================================================================================================  */
/* ============================================================  Setters ============================================================  */
/* ==================================================================================================================================  */

/**
 * Modifie le joueur du monde
 * @param Monde Le mode du jeu
 * @param Joueur Le joueur
 */
void setJoueur(monde* Monde, joueur* Joueur);

/**
 * Commence la partie
 * @param Monde Le monde du jeu
 */
void startGame(monde* Monde);

/**
 * Finis la partie
 * @param Monde Le monde du jeu
 */
void finishGame(monde* Monde);

/* ==================================================================================================================================  */
/* ===========================================================  Fonctions ===========================================================  */
/* ==================================================================================================================================  */

/**
 * Initialise un monde
 * @return Le monde du jeu
 */
monde* initMonde();

#endif //PROJECT_R_MONDE_H
