/**
 * @file iPhone.h
 * The concrete class for a specific product which will be
 * built by a concrete builder.
 * There is no abstract class for all the products, cause they
 * may differ very greatly.
 * @author Ken Hu
 */

#pragma	once

#include <string>

class iPhone
{
public:
    void assemble(std::string part) {
        _iPhone += part;
    }

    std::string toString() {
        return "iPhone is built as " + _iPhone;
    }

private:
    std::string _iPhone;
};

