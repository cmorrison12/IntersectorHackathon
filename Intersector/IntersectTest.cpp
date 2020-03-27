#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Ellipses.h"
#include "Quadrangle.h"


SCENARIO("Quadrangles are constructed properly")
{
    GIVEN("A quadrangle with a centre point of (1,1)")
    {
        WHEN("The length of the X and Y axis are set to 4")
        {
            Quadrangle testQuadrangle(1.0, 1.0, 4.0, 4.0);
            THEN("The upper left corner should be (-1, 3)")
            {
                CHECK(testQuadrangle.getUpperLeftCorner().x == -1.0);
                CHECK(testQuadrangle.getUpperLeftCorner().y == 3.0);

            }
            AND_THEN("The upper right corner should be(3, 3)")
            {
                CHECK(testQuadrangle.getUpperRightCorner().x == 3.0);
                CHECK(testQuadrangle.getUpperRightCorner().y == 3.0);
            }
            AND_THEN("The lower left corner should be(-1, -1)")
            {
                CHECK(testQuadrangle.getLowerLeftCorner().x == -1.0);
                CHECK(testQuadrangle.getLowerLeftCorner().y == -1.0);
            }
            AND_THEN("The lower right corner should be(3, -1)")
            {
                CHECK(testQuadrangle.getLowerRightCorner().x == 3.0);
                CHECK(testQuadrangle.getLowerRightCorner().y == -1.0);
            }
        }
    }
}

SCENARIO("Ellipses are constructed properly")
{
    GIVEN("A elipses with centre point (2,2)")
    {
        WHEN("The length of the X axis is 5 and the length of the Y axis is 4")
        {
            Ellipses testEllipse(2.0, 2.0, 5.0, 3.0);
            {
                THEN("The first Ellipses should have the coordinates (0, 2)")
                {
                    CHECK(testEllipse.getFoci1().x == 0.0);
                    CHECK(testEllipse.getFoci1().y == 2.0);
                }
                AND_THEN("The second Ellipses should have the coordinates (4, 2)")
                {
                    CHECK(testEllipse.getFoci2().x == 4.0);
                    CHECK(testEllipse.getFoci2().y == 2.0);
                }
            }
        }
        AND_WHEN("The length of the X axis is 6 and the length of the Y axis is 10")
        {
            Ellipses testEllipse(2.0, 2.0, 6.0, 10.0);
            THEN("The first Ellipses should have the coordinates (2, -2)")
            {
                CHECK(testEllipse.getFoci1().x == 2.0);
                CHECK(testEllipse.getFoci1().y == -2.0);
            }
            AND_THEN("The second Ellipses should have the coordinates (2, 6)")
            {
                CHECK(testEllipse.getFoci2().x == 2.0);
                CHECK(testEllipse.getFoci2().y == 6.0);
            }
        }
    }
}