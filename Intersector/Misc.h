#pragma once

struct Coordinate 
{ 
    double x;
    double y; 

    Coordinate(double xCoord = 0.0, double yCoord = 0.0) : x(xCoord), y(yCoord) {}
};

struct Line
{

    Coordinate point1;
    Coordinate point2;
    double m;
    double c;

    double calculateGradient(Coordinate point1, Coordinate point2)
    {
        double changeUp = (point1.y - point2.y);
        double changeRight = (point1.x - point2.x);

        if (changeRight == 0)
        {
            return 0;
        }
        return (changeUp / changeRight);
    }

    double calculateYIntercept(Coordinate point, double m)
    {
        /* y = mx + c so.. c = y - mx   ???*/
        return (point.y - (m * point.x));
    }

    Line(Coordinate p1 = 0, Coordinate p2 = 0) : point1(p1), point2(p2), m(calculateGradient(p1, p2)), c(calculateYIntercept(p1, m)) {}

};