#ifndef PIPELINE_HPP
#define PIPELINE_HPP

#include <string>
#include <vector>

namespace VVGE {
  class Pipeline {
  public:
    Pipeline() = delete;
    Pipeline(const Pipeline&) = delete;
    Pipeline(Pipeline&&) = delete;
    Pipeline operator=(const Pipeline&) = delete;
    Pipeline operator=(Pipeline&&) = delete;

    Pipeline(const std::string vertFilePath, const std::string fragFilePath);

  private:
    static std::vector<char> readFile(const std::string& filePath);

    void createGraphicsPipeline(const std::string& vertFilePath, const std::string& fragFilePath);
  };
}

#endif // !PIPELINE_HPP