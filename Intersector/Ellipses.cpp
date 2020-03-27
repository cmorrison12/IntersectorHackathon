#include "Ellipses.h"
#include <math.h>

Ellipses::Ellipses(double centreX, double centreY, double xLength, double yLength) : Volume(centreX, centreY, xLength, yLength)
{
    /* Foci can be calculated using the foruma c^2 = a^2 - b^2
     * Where...
     * c = distance between centre point and foci
     * a = half of the length of the major (longer) axis
     * b = half of the length of the minor (shorter) axis
     */

    bool xIsMajorAxis = (xLength > yLength);

    if (xIsMajorAxis)
    {
        foci1.x = centreX - (sqrt(pow((xLength/2.0), 2.0) - pow((yLength/2.0), 2.0)));
        foci2.x = centreX + (sqrt(pow((xLength/2.0), 2.0) - pow((yLength/2.0), 2.0)));
        foci1.y = centreY;
        foci2.y = centreY;
    }
    else
    {
        foci1.x = centreX;
        foci2.x = centreX;
        foci1.y = centreY - (sqrt(pow((yLength/2.0), 2.0) - pow((xLength/2.0), 2.0)));
        foci2.y = centreY + (sqrt(pow((yLength/2.0), 2.0) - pow((xLength/2.0), 2.0)));
    }
    

}

Coordinate Ellipses::getFoci1()
{
    return foci1;
}

Coordinate Ellipses::getFoci2()
{
    return foci2;
}