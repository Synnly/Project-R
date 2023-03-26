#include "eventhandler.h"
#include "../Joueur/joueur.h"

void handleEvents(monde* Monde, SDL_Event* events){


    // On retire tous les évènements sauf l'indication de fermer le jeu
    SDL_FlushEvents(SDL_APP_TERMINATING, SDL_USEREVENT);

    const Uint8 *keystates = SDL_GetKeyboardState(NULL);


    // Bouton quitter
    if(SDL_PollEvent(events) && ((events)->type == SDL_QUIT)){
        finishGame(Monde);
    }
    else{
        // Déplacement à gauche
        if (keystates[SDL_SCANCODE_LEFT] || keystates[SDL_SCANCODE_A]) {movePlayer(getJoueur(Monde), "gauche");}

        // Déplacement à droite
        else if (keystates[SDL_SCANCODE_RIGHT] || keystates[SDL_SCANCODE_D]) {movePlayer(getJoueur(Monde), "droite");}

        // Déplacement en haut
        else if (keystates[SDL_SCANCODE_UP] || keystates[SDL_SCANCODE_W]) {movePlayer(getJoueur(Monde), "haut");}

        // Déplacement en bas
        else if (keystates[SDL_SCANCODE_DOWN] || keystates[SDL_SCANCODE_S]) {movePlayer(getJoueur(Monde), "bas");}
    }

}