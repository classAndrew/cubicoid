#ifndef CUBIC_UI_H__
#define CUBIC_UI_H__

#include "external/glad/glad.h"

#include "external/imgui/imgui.h"
#include "external/imgui/imgui_impl_glfw.h"
#include "external/imgui/imgui_impl_opengl3.h"

namespace cubicoid
{
    class CubicoidUI
    {
    public:
        const char *version;
        CubicoidUI(const char *ver) : version(ver) {

        }
        void drawFrame()
        {
            ImGui_ImplOpenGL3_NewFrame();
            ImGui_ImplGlfw_NewFrame();
            ImGui::NewFrame();

            ImGui::Begin("Cubicoid");

            ImGui::Text("%s", version);
            ImGui::Text("Press H to hide all windows");

            ImGui::Text("Average FPS: %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();

            ImGui::Render();
            ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        }
    };
} // namespace cubicoid

#endif