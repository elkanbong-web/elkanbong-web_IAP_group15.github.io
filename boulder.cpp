#include "boulder.h"
#include "entity.h"
boulder::boulder(int xpos, int ypos, char sym)
{
    coordinates.Placex(xpos);
    coordinates.Placey(ypos);
    icon = sym;
    grabstatus = 0; //false hampter
}


void boulder::setgrabstatus(bool a)
{

    grabstatus = a;
}
bool boulder::getgrabstatus() 
{
    return grabstatus;
}

void boulder::validmovecheck()
{
    //sorry i hard coded it today 
    //to make boulder move anymore the map size needs to be decided
        int prevx = coordinates.Returnx();
        int prevy = coordinates.Returny();

}

//code that reacts to moving into a enemy or spike 

//code that moves

boulder::~boulder()
{
}




