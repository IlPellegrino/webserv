#pragma once

#include "../../../include/includes.hpp" // IWYU pragma: keep
#include <string>

class Response {
	private:
		std::string _root;
		std::string _autoindex;
		std::string _index;
		std::string _errorPage4xx;
		std::string _errorPage5xx;

	public:
		Response();
		~Response();

		// SETTERS
		void setRoot(const std::string& root);
		void setAutoindex(const std::string& autoindex);
		void setIndex(const std::string& index);
		void setErrorPage4xx(const std::string& error_page4xx);
		void setErrorPage5xx(const std::string& error_page5xx);

		// GETTERS
		const std::string& getRoot() const;
		const std::string& getAutoindex() const;
		const std::string& getIndex() const;
		const std::string& getErrorPage4xx() const;
		const std::string& getErrorPage5xx() const;
};