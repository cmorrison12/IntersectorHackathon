#pragma once
#include "Misc.h"
#include "Volume.h"

class Quadrangle : public Volume
{

public:
    Quadrangle(double centreX, double centreY, double xLength, double yLength);

    /*TBD for squint shapes*/
   /* Quadrangle(double ulX, 
               double ulY, 
               double urX,
               double urY,
               double llX,
               double llY,
               double lrX,
               double lrY); */
    Coordinate getUpperLeftCorner();
    Coordinate getUpperRightCorner();
    Coordinate getLowerLeftCorner();
    Coordinate getLowerRightCorner();

private:

    Coordinate upperLeftCorner;
    Coordinate upperRightCorner;
    Coordinate lowerLeftCorner;
    Coordinate lowerRightCorner;
    Line       ULtoUR;
    Line       URtoLR;
    Line       LRtoLL;
    Line       LLtoUL;

    /*TBD for squint shapes*/
   /* Coordinate calculateCentrePointFromCorners();
    Coordinate calculateMidPointOfVertice(Coordinate point1, Coordinate point2); */

};