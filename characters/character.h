#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <utility>

class Location;
class Tile;

class Character {
        std::pair<int,int> coordinates;
        Location* location;
        //TODO: Make all characters take a display letter
        char displayLetter;
    public:
        Character(int x,int y);
        virtual ~Character() = 0;

        char getDisplayLetter() const;

        std::pair<int,int> getCoordinates();

        // Should be a function that allows a character to be interacted with,
        // and possibly retrieve information from the source Character of the interaction.
        virtual void notify(Character &source) = 0;

        // A function that allows a character to interact with a 'to' tile from a 'from' tile
    void interactFromTileToTile(Tile &from, Tile &to, std::pair<int,int> targetCoords);
};

#endif


