#include "right.h"

//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------
void Right::run()
{
    glRotatef(angle,0,0,1); // make rotate left <--

}

std::istream& operator>>(std::istream& in, Right& right)
{
     //const int ShiftSize = 100; // e.g 5 units forward
    //static char leftt[100];
    int angle=0; //intialise angle to 0
    in >> right.direction; //i/p up to ws to direction left 
    in >> right.angle;
    //in.get(forwardd, ShiftSize); // gets input , stored into buffer
    return in;


}