#ifndef FIRST_APP_HPP
#define FIRST_APP_HPP

#include "window/window.hpp"

namespace VVGE {
  class FirstApp {
  public:
    static constexpr int WIDTH = 800;
    static constexpr int HEIGHT = 600;

    FirstApp(FirstApp const&) = delete;
    FirstApp(FirstApp&&) = delete;
    FirstApp operator=(FirstApp const&) = delete;
    FirstApp operator=(FirstApp&&) = delete;

    FirstApp();
    void run();

  private:
    Window m_window;
  };
}

#endif // !FIRST_APP_HPP