#pragma once

class GLFWwindow;

class Window {
    static GLFWwindow* window;

    public:
        static int initialize(int width, int height, const char* title);
        static void terminate();

        static bool isShouldClose();
        static void swapBuffers();
};