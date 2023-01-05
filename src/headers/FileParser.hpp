#ifndef FILEPARSER_HPP_
#define FILEPARSER_HPP_

// C++ STL
#include <fstream>
#include <string>
#include <stdexcept>
#include <vector>
#include <sstream>

// Codex Compiler
#include "Token.hpp"

class FileParser {
 private:
  const bool EndsWith(const std::string& main, const std::string key) const;
  const bool FileExists(std::string& filePath) const;
  std::vector<std::string> Split(std::string& line) const;

 public:
  FileParser();
  ~FileParser();

  std::vector<Token*>* Tokenize(std::string filePath);
};
#endif  // FILEPARSER_HPP_