#include <iostream>
#include <stdlib.h>

#define GLEW_STATIC
#include"../include/GL/glew.h"
#include"../include/GLFW/glfw3.h"
#include"window/Window.h"

int WIDTH = 1280;
int HEIGHT = 720;

int main() {
    Window::initialize(WIDTH, HEIGHT, "Window 2.0");

    while(!Window::isShouldClose()){
        glfwPollEvents();
        Window::swapBuffers();
    }
    Window::terminate();

    return 0;
}