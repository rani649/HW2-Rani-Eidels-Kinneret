#include "User.h" 
#include "UserList.h" 
#include "Page.h"

// class that holds the data on the user in the social media
class Profile
{
public: 
	
	//methods 
	void init(User owner); 
	void clear(); 
	User getOwner() const; 
	void setStatus(const std::string new_status); 
	void addPostToProfilePage(const std::string post); 
	void addFriend(const User friend_to_add);  
	std::string getPage() const; 
	std::string getFriends() const; 
	std::string getFriendsWithSameNameLength() const; 

private: 

	//fields
	User owner; 
	Page ownerPage;
	UserList ownerFriends;
};