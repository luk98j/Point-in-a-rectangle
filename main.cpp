#include <iostream>
#include "friend.h"
using namespace std;

void refree(Point &pkt, Recentagle &p)
{
    if((pkt.x>=p.x)&&(pkt.x<=p.x+p.width)&&(pkt.y>=p.y)&&(pkt.y<=p.y+p.height)){
        cout << endl << "Point " << pkt.name <<" belongs to a rectangle "<<p.name;
    }else{
         cout << endl << "Point " << pkt.name <<" isn't in a rectangle "<<p.name;
    }
}
int main()
{
    Point pkt1;
    pkt1.load();
    Recentagle p1;
    p1.load();
    refree(pkt1, p1);
    cout << endl;
    return 0;
}