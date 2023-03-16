#ifndef PROJECT_R_EVENTHANDLER_H
#define PROJECT_R_EVENTHANDLER_H

#include "../Monde/monde.h"

/**
 * Gère les évènements (appui de touches, ...)
 * @param Monde Le monde du jeu
 * @param events Les évènements du monde
 */
void handleEvents(monde* Monde, SDL_Event* events);

#endif //PROJECT_R_EVENTHANDLER_H
