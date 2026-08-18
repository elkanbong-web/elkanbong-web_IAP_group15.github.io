#pragma once
#include "gameobject.h"
class boulder : public gameobject
{
private:
    bool grabstatus;


public:
    boulder( int xpos, int ypos, char sym);

    bool getgrabstatus();

    void setgrabstatus(bool a);

    void validmovecheck();

    ~boulder();

  


};