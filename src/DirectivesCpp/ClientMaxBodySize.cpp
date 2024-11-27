#include "../../include/includes.hpp"
#include "../../include/Errors.hpp"
#include <cstdlib>
#include "../../include/Directives/ClientMaxBodySize.hpp"

ClientMaxBodySize::ClientMaxBodySize(const std::vector<std::string>& args) {
	if (args.size() != 1)
		throw Errors::TooFewArgsException("Wrong number of args", __LINE__, __FILE__);
	if (!isNumber(std::string(args[0].begin(), args[0].end() - 1)))
		throw Errors::InvalidBodySizeException("Invalid body size", __LINE__, __FILE__);
	_bodySize = atoll(std::string(args[0].begin(), args[0].end() - 1).c_str());
}

ClientMaxBodySize::~ClientMaxBodySize() {}

const size_t&	ClientMaxBodySize::getSize() const {
	return _bodySize;
}