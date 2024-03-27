#include <iostream>

using namespace std;

class Point2D {
private:
    double x;
    double y;

public:
    Point2D(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    void setCoordinates(double newX, double newY) {
        x = newX;
        y = newY;
    }

    void printCoordinates() {
        cout << "Coordinates: (" << x << ", " << y << ")" << endl;
    }

    void determineQuadrant() {
        if (x > 0 && y > 0) {
            cout << "The point is in the first quadrant." << endl;
        }
        else if (x < 0 && y > 0) {
            cout << "The point is in the second quadrant." << endl;
        }
        else if (x < 0 && y < 0) {
            cout << "The point is in the third quadrant." << endl;
        }
        else if (x > 0 && y < 0) {
            cout << "The point is in the fourth quadrant." << endl;
        }
        else {
            cout << "The point is on an axis or at the origin." << endl;
        }
    }
};

int main() {
    Point2D point(3.5, 2.5);

   
    cout << "Initial ";
    point.printCoordinates();
    point.determineQuadrant();

    point.setCoordinates(-2.0, 4.0);
    cout << "Updated ";
    point.printCoordinates();
    point.determineQuadrant();

    return 0;
}