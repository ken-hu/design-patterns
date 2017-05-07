/**
 * @file CharacterFactory.h
 * Create and manage flyweight objects.
 * @author Ken Hu
 */

#pragma once

#include <unordered_map>
#include <memory>

#include "Character.h"
#include "SharedCharacter.h"

class CharacterFactory
{
public:
    using CharacterPtr = std::shared_ptr<Character>;

    CharacterPtr getCharacterObject(char key) {
        auto found = characterPool.find(key);
        if(found != characterPool.end()) {
            return found->second;
        }
        CharacterPtr character(new SharedCharacter(key));
        characterPool[key] = character;
        return character;
    }

private:
    std::unordered_map<char, CharacterPtr> characterPool;
};

