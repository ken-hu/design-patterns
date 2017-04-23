/**
 * @file Singleton.h
 * Defines an interface that lets clients access its unique instance.
 * @author Ken Hu
 */

#pragma	once

class Singleton
{
public:
    static Singleton* instance() {
        if (_instance == 0) {
            _instance = new Singleton;
        }
        return _instance;
    }
protected:
    // A definition has to be provided if the function is used in the class,
    // Otherwsie, there is a link error "Singleton::Singleton()" is undefined.
    Singleton() {};

private:
    static Singleton* _instance;
};

/**
 * As a static member, only const integral type can be initialized in the class body.
 * Alternatively, we can remove the static variable and use reference for instance() [Meyers Singleton]
 * static Singleton* instance() {
 *     // Standard [class.mfct]: A static local variable or local type in a member 
 *     // function always refers to the same entity, whether or not the member function is inline
 *     static Singlton instance;
 *     return &instance;
 * }
 */
Singleton* Singleton::_instance = 0;

