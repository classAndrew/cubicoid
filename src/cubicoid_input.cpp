#include "cubicoid_input.h"

namespace cubicoid {

    float deltaTime = 0.0f;	// time between current frame and last frame
    float lastFrame = 0.0f;
    bool cursortoggle = false;
    float lastCursToggle = 0.0f;
    Camera camera;
    void processInput(GLFWwindow *window)
    {
        float currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, true);
        if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
            camera.ProcessKeyboard(FORWARD, deltaTime);
        if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
            camera.ProcessKeyboard(BACKWARD, deltaTime);
        if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
            camera.ProcessKeyboard(LEFT, deltaTime);
        if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
            camera.ProcessKeyboard(RIGHT, deltaTime);
        if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS)
            camera.ProcessKeyboard(UP, deltaTime);
        if (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS)
            camera.ProcessKeyboard(DOWN, deltaTime);
        if (glfwGetKey(window, GLFW_KEY_E) == GLFW_PRESS && glfwGetTime() - lastCursToggle > 0.5)
        {
            lastCursToggle = glfwGetTime();
            glfwSetInputMode(window, GLFW_CURSOR, cursortoggle ? GLFW_CURSOR_DISABLED : GLFW_CURSOR_NORMAL);
            cursortoggle = !cursortoggle;
        }
    }
}