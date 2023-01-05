#include "../headers/Token.hpp"

Token::Token(TokenType* tokenTypeManager, TokenType::TYPE type,
             std::string& data) {
  this->tokenTypeManager = tokenTypeManager;
  this->type = type;
  this->data = data;
}

Token::~Token() {}
