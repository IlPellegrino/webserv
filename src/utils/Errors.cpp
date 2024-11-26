#include "../../include/includes.hpp"
#include <sstream>
#include <string>
#include "../../include/Errors.hpp"

void Errors::error(std::string msg, int line, const char *file) {
	std::cerr << "[Webserver FILE: " << file << "; -- LINE: " << line << "] -> Error: " << msg << '\n'; 
}

Errors::BaseException::BaseException(const std::string& message, int line, const char* file) {
	std::ostringstream	oss;
	oss << line;
	_message = "\n[Webserver FILE: " + std::string(file) + "; -- LINE: " + oss.str() + "] -> Error: " + message;
}

const char* Errors::BaseException::what() const throw() {
	return _message.c_str();
}