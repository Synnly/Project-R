#include "eventhandler.h"

void handleEvents(monde* Monde, SDL_Event* events){

    if(SDL_PollEvent(events) && ((events)->type == SDL_QUIT)){
        finishGame(Monde);
    }

}