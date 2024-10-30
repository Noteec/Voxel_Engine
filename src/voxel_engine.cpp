#include <iostream>
#include <stdlib.h>

#define GLEW_STATIC
#include"../include/GL/glew.h"
#include"../include/GLFW/glfw3.h"
#include"window/Window.h"
#include "window/Events.h"

int WIDTH = 1280;
int HEIGHT = 720;

int main() {
    Window::initialize(WIDTH, HEIGHT, "Window 2.0");
    Events::initialize();

    while(!Window::isShouldClose()){
        Events::pullEvents();
        if(Events::justPressed(GLFW_KEY_ESCAPE)){
            Window::setShouldClose(true);
        }


        Window::swapBuffers();
    }
    Window::terminate();

    return 0;
}