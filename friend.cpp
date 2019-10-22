#include <iostream>
#include "friend.h"
using namespace std;
Point::Point(string n, float xx, float yy)
{
    name = n;
    x = xx;
    y = yy;
}

void Point::load()
{
    cout << "Enter x of the point: "; cin>>x;
    cout << "Enter y of the point: "; cin>>y;
    cout << "Name of the point: "; cin >> name;
}

Recentagle::Recentagle(string n, float xx, float yy, float w, float h)
{
    name = n;
    x = xx;
    y = yy;
    width = w;
    height = h;
}
void Recentagle::load(){
    cout << "Enter x of the lower left corner of the rectangle: "; cin>>x;
    cout << "Enter y of the lower left corner of the rectangle: "; cin>>y;
    cout << "Enter the width of the rectangle: "; cin >> width;
    cout << "Enter the height of the rectangle: "; cin >> height;
    cout << "Name of the rectangle: "; cin >> name;
}