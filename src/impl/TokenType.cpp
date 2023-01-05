#include "../headers/TokenType.hpp"

TokenType::TokenType() {
  this->enumNameMap = new std::map<TYPE, std::string>();
  this->enumNameMap->insert(std::pair(TYPE::VARIABLE, "VARIABLE"));
  this->enumNameMap->insert(std::pair(TYPE::IDENTIFIER, "IDENTIFIER"));
  this->enumNameMap->insert(std::pair(TYPE::KEYWORD, "KEYWORD"));
  this->enumNameMap->insert(std::pair(TYPE::OTHER, "OTHER"));
}

TokenType::~TokenType() { delete this->enumNameMap; }

std::string TokenType::GetTypeName(TYPE type) {
  if (this->enumNameMap->count(type) == 0) {
    throw std::invalid_argument("Unknown Type");
  }
  return (*(this->enumNameMap))[type];
}
