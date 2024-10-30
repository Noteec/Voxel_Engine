#pragma once

#include "Window.h"

typedef unsigned int uint;

class Events
{
private:
   
public:
    Events();
    ~Events();

    static bool* _keys;
    static uint* _frames;
    static uint _current;
    static double deltaX;
    static double deltaY;
    static double x;
    static double y;
    static bool _cursor_locked;
    static bool _cursor_started;

    static int initialize();
    static void pullEvents();

    static bool isPressed(int key);
    static bool justPressed(int key);
    static bool isClicked(int key);
    static bool justClicked(int key);

};