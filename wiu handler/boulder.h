#pragma once
#include "gameobject.h"
class boulder : public gameobject
{
private:
   


public:
    boulder( int xpos, int ypos, char sym);

    void validmovecheck();

    ~boulder();

  


};