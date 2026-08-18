#include "boulder.h"
#include "entity.h"
boulder::boulder(int xpos, int ypos, char sym)
{
    coordinates.Placex(xpos);
    coordinates.Placey(ypos);
    icon = sym;
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




