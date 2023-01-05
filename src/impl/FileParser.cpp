#include "../headers/FileParser.hpp"

const bool FileParser::EndsWith(const std::string& main,
                                const std::string key) const {
  if (main.length() >= key.length()) {
    return (0 == main.compare(main.length() - key.length(), key.length(), key));
  } else {
    return false;
  }
}

const bool FileParser::FileExists(std::string& filePath) const {
  if (!EndsWith(filePath, ".cxs")) return false;

  std::ifstream file(filePath);
  if (file) {
    return true;
  } else {
    std::cout << filePath << " does not exist." << std::endl;
    return false;
  }
}

std::vector<std::string> FileParser::Split(std::string& line) const {
  std::vector<std::string> words;
  std::stringstream ss(line);
  std::string buffer;
  while (ss >> buffer) {
    words.push_back(buffer);
  }
  return words;
}

FileParser::FileParser() {}

FileParser::~FileParser() {}

std::vector<Token*>* FileParser::Tokenize(std::string filePath) {
  if (!this->FileExists(filePath)) return nullptr;

  std::vector<Token*>* tokens = new std::vector<Token*>();
  std::ifstream file(filePath);
  std::string line;
  while (std::getline(file, line)) {
    std::vector<std::string> words = this->Split(line);
    for (unsigned int i = 0; i < words.size(); i++) {
      if (!(words[i].empty())) {
        tokens->push_back(new Token(words[i]));
      }
    }
  }
  return tokens;
}
