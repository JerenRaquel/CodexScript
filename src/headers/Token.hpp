#ifndef TOKEN_HPP_
#define TOKEN_HPP_

#include <iostream>
#include <string>

class Token {
 private:
  std::string data;

 public:
  Token(std::string& data);
  ~Token();

  friend std::ostream& operator<<(std::ostream& os, const Token& token) {
    os << "UNKNOWN"
       << ":" << token.data;
    return os;
  }
};
#endif  // TOKEN_HPP_