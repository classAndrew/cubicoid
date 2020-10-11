#ifndef CUBIC_IN_H__
#define CUBIC_IN_H__
#include "external/glad/glad.h"
#include <GLFW/glfw3.h>
#include "shader.h"
#include "camera.h"
namespace cubicoid
{
    extern Camera camera;
    extern bool lastMouse;
    extern unsigned int SCR_HEIGHT, SCR_WIDTH; 
    extern float lastX, lastY;
    void processInput(GLFWwindow *window);
    void mouse_callback(GLFWwindow* window, double xpos, double ypos);
    void framebuffer_size_callback(GLFWwindow *window, int width, int height);
} // namespace cubicoid
#endif