#include <iostream>
using namespace std;
class Point;
class Recentagle;

class Point
{
    string name;
    float x,y;
    
public:
    Point(string="A",float = 0, float = 0);
    void load();

    friend void refree(Point &pkt, Recentagle &p);
};

class Recentagle
{
    string name;
    float x,y,width, height;  
public:
    Recentagle(string="brak", float=0,float=0,float=1,float=1);
    void load();

    friend void refree(Point &pkt, Recentagle &p);
};