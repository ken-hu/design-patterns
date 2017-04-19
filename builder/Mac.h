/**
 * @file Mac.h
 * The concrete class for a specific product which will be
 * built by a concrete builder.
 * There is no abstract class for all the products, cause they
 * may differ very greatly.
 * @author Ken Hu
 */

#pragma	once

#include <string>

class Mac
{
public:
    void assemble(std::string part) {
        _Mac += part;
    }

    std::string toString() {
        return "Mac is built as " + _Mac;
    }

private:
    std::string _Mac;
};

