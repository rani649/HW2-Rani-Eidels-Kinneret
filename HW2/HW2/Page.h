#pragma once

#include <string>

// class that represent a page of user 
class Page
{
public: 

	//methods
	void init(); 
	std::string getPosts() const;
	std::string getStatus() const; 
	void clearPage(); 
	void setStatus(const std::string status); 
	void addLineToPosts(const std::string new_line);

private: 
	
	//fields
	std::string posts; 
	std::string status;
};
