/**
 * @file Coord.h
 * The extrinsic state that the flyweights act on.
 * @author Ken Hu
 */

#pragma once

class Coord
{
public:
    Coord(int xCoord, int yCoord) : _xCoord(xCoord), _yCoord(yCoord) {}

    int getXCoord() {
        return _xCoord;
    }

    int getYCoord() {
        return _yCoord;
    }

private:
    int _xCoord;
    int _yCoord;
};

