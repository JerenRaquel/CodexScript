#ifndef TOKENTYPE_HPP_
#define DATATYPE_HPP_

#include <string>
#include <map>
#include <stdexcept>

class TokenType {
 public:
  enum TYPE {
    VARIABLE = 0x00000001,
    IDENTIFIER = 0x00000010,
    KEYWORD = 0x00000100,
    OTHER = 0x00001000
  };

 private:
  std::map<TYPE, std::string>* enumNameMap;

 public:
  TokenType();
  ~TokenType();

  std::string GetTypeName(TYPE type);
};
#endif  // TOKENTYPE_HPP_