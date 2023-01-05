/*	Jeren Raquel
 *	==Codex Script Compiler==
 *	Compiler for Codex Script
 */
#include <iostream>
#include <string>
#include <vector>

#include "headers/Token.hpp"

int main(int argc, char** argv) {
  if (argc < 2) {
    throw std::invalid_argument("compiler.exe fileName.cxs [extra <args>]");
  }
  std::cout << "File: " << argv[1] << std::endl;
  TokenType* tokenType = new TokenType();
  std::string data = "1";
  Token* token = new Token(tokenType, TokenType::TYPE::OTHER, data);
  std::cout << *token << std::endl;
  delete token;
  delete tokenType;
  return 0;
}
