/*	Jeren Raquel
 *	==Codex Script Compiler==
 *	Compiler for Codex Script
 */
#include <iostream>
#include <string>
#include <vector>

#include "headers/FileHandler.hpp"
#include "headers/Token.hpp"

int main(int argc, char** argv) {
  if (argc < 2) {
    throw std::invalid_argument("compiler.exe fileName.cxs [extra <args>]");
  }
  std::cout << "File: " << argv[1] << std::endl;

  FileHandler* fileHandler = new FileHandler();
  std::vector<Token*>* tokens = fileHandler->Tokenize(argv[1]);
  if (tokens != nullptr) {
    for (unsigned int i = 0; i < tokens->size(); i++) {
      Token* token = (*(tokens))[i];
      std::cout << *token << std::endl;
      delete token;
    }
    delete tokens;
  }
  delete fileHandler;

  return 0;
}
