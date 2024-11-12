#include "pipeline/pipeline.hpp"

#include <fstream>
#include <exception>
#include <iostream>

using namespace VVGE;

Pipeline::Pipeline(const std::string vertFilePath, const std::string fragFilePath) {
  createGraphicsPipeline(vertFilePath, fragFilePath);
}

std::vector<char> Pipeline::readFile(const std::string& filePath) {
  std::ifstream file(filePath, std::ios::ate | std::ios::binary);

  if (!file.is_open())
    throw std::runtime_error("Failed to open file: " + filePath);

  auto fileSize = static_cast<size_t>(file.tellg());

  std::vector<char> buffer(fileSize);

  file.seekg(0);
  file.read(buffer.data(), fileSize);

  file.close();

  return buffer;
}

void Pipeline::createGraphicsPipeline(const std::string& vertFilePath, const std::string& fragFilePath) {
  auto vertCode = readFile(vertFilePath);
  auto fragCode = readFile(fragFilePath);

  std::cout << "Vertex Shader Code Size: " << vertCode.size() << std::endl;
  std::cout << "Fragment Shader Code Size: " << fragCode.size() << std::endl;
}