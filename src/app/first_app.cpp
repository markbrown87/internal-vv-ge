#include "app/first_app.hpp"

using namespace VVGE;

FirstApp::FirstApp() : m_window(WIDTH, HEIGHT, "Vulkan Voxel Game Engine") {}

void FirstApp::run() {
  
  while (!m_window.shouldClose()) {
    glfwPollEvents();
  }
}