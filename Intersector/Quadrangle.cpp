#include "Quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle(double centreX, double centreY, double xLength, double yLength) : Volume(centreX, centreY, xLength, yLength)
{ 

    upperLeftCorner.x = centreX - (xAxisLength / 2);
    upperLeftCorner.y = centreY + (yAxisLength / 2);

    upperRightCorner.x = centreX + (xAxisLength / 2);
    upperRightCorner.y = centreY + (yAxisLength / 2);

    lowerLeftCorner.x = centreX - (xAxisLength / 2);
    lowerLeftCorner.y = centreY - (yAxisLength / 2);

    lowerRightCorner.x = centreX + (xAxisLength / 2);
    lowerRightCorner.y = centreY - (yAxisLength / 2);

    ULtoUR = Line(upperLeftCorner, upperRightCorner);
    URtoLR = Line(upperRightCorner, lowerLeftCorner);
    LRtoLL = Line(lowerLeftCorner, lowerRightCorner);
    LRtoLL = Line(lowerRightCorner, upperLeftCorner);

}

/*TBD for squint shapes*/
/*Quadrangle::Quadrangle(double ulX,
                       double ulY,
                       double urX,
                       double urY,
                       double llX,
                       double llY,
                       double lrX,
                       double lrY) : Volume()
{

 
    upperLeftCorner.x = centreX - (xAxisLength / 2);
    upperLeftCorner.y = centreY + (yAxisLength / 2);

    upperRightCorner.x = centreX + (xAxisLength / 2);
    upperRightCorner.y = centreY + (yAxisLength / 2);

    lowerLeftCorner.x = centreX - (xAxisLength / 2);
    lowerLeftCorner.y = centreY - (yAxisLength / 2);

    lowerRightCorner.x = centreX + (xAxisLength / 2);
    lowerRightCorner.y = centreY - (yAxisLength / 2);


} */

Coordinate Quadrangle::getUpperLeftCorner()
{
    return upperLeftCorner;
}

Coordinate Quadrangle::getUpperRightCorner()
{
    return upperRightCorner;
}

Coordinate Quadrangle::getLowerLeftCorner()
{
    return lowerLeftCorner;
}

Coordinate Quadrangle::getLowerRightCorner()
{
    return lowerRightCorner;
}
