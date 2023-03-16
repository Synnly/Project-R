#include "SDL2/SDL.h"
#include "Monde/monde.h"
#include "Systemes/eventhandler.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(){

    SDL_Window* fenetre;
    SDL_Renderer* renderer;

    monde Monde;

    // Initialisation du module vidéo
    SDL_SetMainReady();
    if (SDL_Init(SDL_INIT_VIDEO)){
        printf("Error : %s", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    // Création de la fenêtre et du renderer
    if (SDL_CreateWindowAndRenderer(1000, 800, SDL_WINDOW_SHOWN | SDL_WINDOW_INPUT_FOCUS, &fenetre, &renderer)){
        printf(" Error : %s", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    SDL_SetRenderDrawColor(renderer, 32, 34, 37, SDL_ALPHA_OPAQUE);

    SDL_Event event;
    while(isGamePlaying(&Monde)){
        SDL_RenderClear(renderer);
        handleEvents(&Monde, &event);
        SDL_RenderPresent(renderer);
    }

    // Nettoyage du code
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(fenetre);
    SDL_Quit();

    return 0;
}