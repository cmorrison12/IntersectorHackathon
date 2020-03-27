#pragma once
#include "Misc.h"

class Volume 
{

public:

    Volume(double centreX, double centreY, double xLength, double yLength) : centre(Coordinate(centreX, centreY)), xAxisLength(xLength), yAxisLength(yLength) {};

    virtual Coordinate getCentre()  { return centre; };
    virtual double getXAxisLength() { return xAxisLength; };
    virtual double getYAxisLength() { return yAxisLength; };


protected: 

    Coordinate centre;
    double xAxisLength;
    double yAxisLength;
  
};