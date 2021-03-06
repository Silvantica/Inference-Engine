#pragma once

#include <string>
#include <vector>

class InferenceEngine {
private:

public:
  std::string runMethod(std::string method, std::vector<std::string>& lines);
  std::string runFromFile(std::string filepath, std::string method);
  std::string run(std::string filename, std::vector<std::string> lines, std::string method);
};

