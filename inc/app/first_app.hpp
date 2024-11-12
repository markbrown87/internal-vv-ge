#ifndef FIRST_APP_HPP
#define FIRST_APP_HPP

#include "window/window.hpp"
#include "pipeline/pipeline.hpp"

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
    Pipeline m_pipeline{"shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv"};
  };
}

#endif // !FIRST_APP_HPP