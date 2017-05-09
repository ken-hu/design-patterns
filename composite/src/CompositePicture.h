/**
 * @file CompositePicture.h
 * Define behavior for composite having children.
 * @author Ken Hu
 */

#pragma once

#include <string>
#include <list>
#include <iostream>

#include "Picture.h"

class CompositePicture : public Picture
{
public:
    CompositePicture(std::string content): _content(content) {}

    virtual void add(Picture* picture) {
        _pictures.push_back(picture);
    }

    virtual void remove(Picture* pictureToRemove) {
        _pictures.remove(pictureToRemove);
        for (Picture* picture : _pictures) {
            picture->remove(pictureToRemove);
        }
    }

    virtual void print() {
        std::cout << getContent() << std::endl;
        for (Picture* picture : _pictures) {
            picture->print();
        }
    }

    virtual std::string getContent() {
        return _content;
    }

private:
    std::list<Picture*> _pictures;
    std::string _content;
};

