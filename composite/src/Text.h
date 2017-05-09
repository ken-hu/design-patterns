/**
 * @file Text.h
 * Represent a leaf object.
 * @author Ken Hu
 */

#pragma once

#include <string>

#include "Picture.h"

class Text : public Picture
{
public:
    Text(std::string content): _content(content) {}

    virtual void print() {
        std::cout << getContent() << std::endl;
    }

    virtual std::string getContent() {
        return _content;
    }

private:
    std::string _content;
};
