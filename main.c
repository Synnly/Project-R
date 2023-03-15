#include "SDL2/SDL.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(){

    SDL_Window* fenetre;
    SDL_Renderer* renderer;

    SDL_SetMainReady();
    if (SDL_Init(SDL_INIT_VIDEO)){
        printf("Error : %s", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    if (SDL_CreateWindowAndRenderer(1000, 800, SDL_WINDOW_SHOWN | SDL_WINDOW_INPUT_FOCUS, &fenetre, &renderer)){
        printf(" Error : %s", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    SDL_SetRenderDrawColor(renderer, 32, 34, 37, SDL_ALPHA_OPAQUE);

    bool enJeu = true;
    SDL_Event event;
    while(enJeu){
        if(SDL_PollEvent(&event) && ((&event)->type == SDL_QUIT)){
            enJeu = false;
        }
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(fenetre);
    SDL_Quit();

    return 0;
}