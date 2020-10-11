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
    extern float lastX, lastY;
    void processInput(GLFWwindow *window);
    void mouse_callback(GLFWwindow* window, double xpos, double ypos);
} // namespace cubicoid
#endif