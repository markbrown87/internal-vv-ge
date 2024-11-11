#ifndef WINDOW_HPP
#define WINDOW_HPP

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace VVGE {
  class Window {
  public:
    Window() = delete;
    Window(Window const&) = delete;
    Window& operator=(Window const&) = delete;
    Window(Window &&) = delete;
    Window& operator=(Window &&) = delete;
    ~Window();
    Window(int w, int h, std::string name);

    bool shouldClose();

  private:
    void initWindow();

    const int m_width;
    const int m_height;

    std::string m_windowName;
    GLFWwindow* m_window;
  };
}

#endif // !WINDOW_HPP