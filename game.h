#ifndef GAME_H_
#define GAME_H_

#include "locations/location.h"
#include "characters/combatant.h"
#include "subjectObserver/observer.h"
#include <vector>
#include <memory>

class Game : public Observer{
    std::vector<Location*> locations;
    int currentLocation;
    bool gameOver;
    Combatant player;

    public:
        Game();
        ~Game();
        bool getGameStatus();
        void run();
        void notify() override;
};

#endif