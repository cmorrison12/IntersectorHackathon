#pragma once
#include "Volume.h"


class Ellipses : public Volume
{
public:
    Ellipses(double centreX, double centreY, double xLength, double yLength);

    Coordinate getFoci1();
    Coordinate getFoci2();

private:

    Coordinate foci1;
    Coordinate foci2;

};