/**
 * @file client.cc
 * Obtain objects from flyweight factory.
 * @author Ken Hu
 */

#include "Character.h"
#include "CharacterFactory.h"
#include "Coord.h"

#include <iostream>

int main()
{
    CharacterFactory characterFactory;

    characterFactory.getCharacterObject('A')->printCharacter(Coord(1, 2));
    characterFactory.getCharacterObject('A')->printCharacter(Coord(3, 4));
    characterFactory.getCharacterObject('A')->printCharacter(Coord(7, 5));

    return 0;
}

