#ifndef TOKEN_HPP_
#define TOKEN_HPP_

#include <iostream>
#include <string>

#include "TokenType.hpp"

class Token {
 public:
 private:
  TokenType* tokenTypeManager;
  TokenType::TYPE type;
  std::string data;

 public:
  Token(TokenType* tokenTypeManager, TokenType::TYPE type, std::string& data);
  ~Token();

  friend std::ostream& operator<<(std::ostream& os, const Token& token) {
    os << token.tokenTypeManager->GetTypeName(token.type) << ":" << token.data;
    return os;
  }
};
#endif  // TOKEN_HPP_