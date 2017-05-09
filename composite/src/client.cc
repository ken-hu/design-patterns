/**
 * @file client.cc
 * Manipulate objects in the composition through the Component interface.
 * @author Ken Hu
 */

#include "Picture.h"
#include "CompositePicture.h"
#include "Text.h"

int main()
{
    CompositePicture compositePicture("Picture");
    Picture* pic = &compositePicture;

    CompositePicture compositePicture1("Picture1");
    Picture* pic1 = &compositePicture1;

    CompositePicture compositePicture2("Picture2");
    Picture* pic2 = &compositePicture2;

    Text text("Text");
    Picture* textPic = &text;

    pic1->add(pic2);
    pic->add(pic1);
    pic->add(textPic);
    pic->print();

    pic->remove(pic2);
    pic->print();

    return 0;
}

