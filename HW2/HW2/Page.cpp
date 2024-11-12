#include "Page.h"

/* function init the user posts and status with empty strings 
input: none. 
output: none.
*/
void Page::init()
{
	this->posts = ""; 
	this->status = "";
} 

/* function that returns user's posts  
input: none. 
ouput: his posts.
*/
std::string Page::getPosts() const
{
	return this->posts;
} 

/* function that returns user's status
input: none.
ouput: his status.
*/
std::string Page::getStatus() const
{
	return this->status;
} 

/*  function that clears the user's posts 
input: none. 
output: none.
*/
void Page::clearPage()
{
	this->posts = "";
}

/* function that set the user's status 
input: the new status 
output: none.
*/
void Page::setStatus(const std::string status)
{
	this->status = status;
} 

/* function that adds new line to the user's posts
input: the new line
output: none.
*/
void Page::addLineToPosts(const std::string new_line)
{
	this->posts += new_line + "\n";
}


