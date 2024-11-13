#include "Profile.h" 
#include <iostream>

/* function that init the user's profile 
input: the owner id, username and age. 
ouput: none.
*/
void Profile::init(User owner)
{  
	DeviceNode* head = NULL;
	this->owner.init(owner.getID(), owner.getUserName(), owner.getAge());  
	this->ownerPage.init(); 
	this->ownerFriends.init();    

	head = owner.getDevices().get_first();  

	while (head)
	{
		this->owner.addDevice(head->get_data()); 
		head = head->get_next();
	}
} 

/* function that clears all the profile fields 
input: none. 
output: none.
*/
void Profile::clear()
{
	this->ownerPage.clearPage(); 
	this->owner.clear(); 
	this->ownerFriends.clear();
} 

/* function that returns the User of the page owner 
input: none. 
output: none.
*/
User Profile::getOwner() const
{
	return this->owner;
}

/* function that set a new status in the user page 
input: the new status 
output: none.
*/
void Profile::setStatus(const std::string new_status)
{
	this->ownerPage.setStatus(new_status);
} 

/* function the add post to user page 
input: the new post 
output: none.
*/
void Profile::addPostToProfilePage(const std::string post)
{
	this->ownerPage.addLineToPosts(post);
}  

/* function that add a friend to the user 
input: the friend to add
output: none.
*/
void Profile::addFriend(const User friend_to_add)
{
	this->ownerFriends.add(friend_to_add);
} 

/* function that returns user's page 
input: none. 
ouput: user's page
*/ 
std::string Profile::getPage() const
{
	std::string page = "Status: " + this->ownerPage.getStatus() + "\n";
	page += "*******************\n*******************\n"; 
	page += this->ownerPage.getPosts();  
	return page;
} 

/* function that retruns user friends in string 
input: none. 
output: his friends.
*/
std::string Profile::getFriends() const
{
	UserNode* head = this->ownerFriends.get_first(); 
	UserNode* temp = head;  
	std::string friends = "";

	while (temp)
	{
		friends += temp->get_data().getUserName(); 
		friends += ","; 
		temp = temp->get_next();
	} 
	return friends.erase(friends.size() - 1);
} 

/* function that retruns friends with the same length of name like the user 
input: none. 
output: all friends with same name langth
*/
std::string Profile::getFriendsWithSameNameLength() const
{
	int ownerNameSize = this->owner.getUserName().size(); 
	std::string friends = getFriends(); 
	std::string friendsWithSameLength = "";  
	std::string friendName = "";
	int i = 0; 
	int count = 0; 

	
	for (i = 0; i < friends.size(); i++)
	{ 
		count = 0; 
		friendName = "";

		while (i < friends.size() && friends[i] != ',')
		{
			friendName += friends[i];
			count++; 
			i++;
		} 
		if (count == ownerNameSize)
		{
			friendsWithSameLength += friendName + ",";
		}
	}  

	if (friendsWithSameLength.size() == 0)
	{
		return "";
	}
	return friendsWithSameLength.erase(friendsWithSameLength.size() - 1); 
}








