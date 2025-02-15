// control class file

#pragma once

#include "sz.hpp"
#include "pos.hpp"
#include "cli.hpp"


class control
{
    public:
    bool focusable;
    bool focused;

    bool visible=0;
    bool enabled;
    bool sizable;
    sz size;
    pos position;
    control* parent;
    
    virtual void draw() {}

    void setPos(pos _pos)
    {
        position = _pos;
        cli::clear();
        if(visible)draw();
    }

    void setSize(sz s)
    {
        size = s;
        cli::clear();
        if(visible) draw();
    }

    control() 
    {
        //parent->size = cli::getSz();
        //parent->position = {0,0};
    }
};