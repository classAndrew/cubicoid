#ifndef CUBIC_IN_H__
#define CUBIC_IN_H__
#include "external/glad/glad.h"
#include <GLFW/glfw3.h>
#include "shader.h"
#include "camera.h"
namespace cubicoid
{
    extern Camera camera;
    void processInput(GLFWwindow *window);
} // namespace cubicoid
#endif