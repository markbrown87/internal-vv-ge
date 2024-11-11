#include "window/window.hpp"

using namespace VVGE;

Window::Window(int w, int h, std::string name) : m_width(w), m_height(h), m_windowName(name) {
  initWindow();
}

Window::~Window() {
  glfwDestroyWindow(m_window);
  glfwTerminate();
}

void Window::initWindow() {
  glfwInit();
  glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

  m_window = glfwCreateWindow(m_width, m_height, m_windowName.c_str(), nullptr, nullptr);
}

bool Window::shouldClose() {
  return glfwWindowShouldClose(m_window);
}