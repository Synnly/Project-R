#include "SDL2/SDL.h"
#include "Monde/monde.h"
#include "Systemes/eventhandler.h"
#include "Donnees/Constantes.h"
#include "Graphismes/graphismes.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(){

    SDL_Window* fenetre;
    SDL_Renderer* renderer;

    monde Monde;

    joueur Joueur = initJoueur(SCR_W/2, SCR_H/2, 40, 40);
    setJoueur(&Monde, &Joueur);

    // Initialisation du module vidéo
    SDL_SetMainReady();
    if (SDL_Init(SDL_INIT_VIDEO)){
        printf("Error : %s", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    // Création de la fenêtre et du renderer
    if (SDL_CreateWindowAndRenderer(SCR_W, SCR_H, SDL_WINDOW_SHOWN | SDL_WINDOW_INPUT_FOCUS, &fenetre, &renderer)){
        printf(" Error : %s", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    SDL_SetRenderDrawColor(renderer, 32, 34, 37, SDL_ALPHA_OPAQUE);

    initJoueurSprite(renderer, &Joueur);

    SDL_Event event;

    // Boucle de jeu
    while(isGamePlaying(&Monde)){
        SDL_RenderClear(renderer);
        handleEvents(&Monde, &event);
        drawJoueur(renderer, &Joueur);
        SDL_RenderPresent(renderer);
    }

    // Nettoyage du code
    endSDL(fenetre, renderer);

    return 0;
}