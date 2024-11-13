#include <iostream> 
#include "SocialNetwork.h" 

/*  function that init the social network 
input: the name and minimum age to use 
ouput: none.
*/
void SocialNetwork::init(const std::string networkName, const int minAge)
{
	this->minAge = minAge; 
	this->networkName = networkName; 
	this->list.init(); 
} 

/* function that clear the social network 
input: none. 
output: none.
*/
void SocialNetwork::clear()
{
	this->minAge = 0; 
	this->networkName = ""; 
	this->list.clear();
} 

/*  function that returns network name 
input: none.
ouput: the name
*/
std::string SocialNetwork::getNetworkName() const
{
	return this->networkName;
}

/* function that returns min age of using 
input: none. 
ouput: the min age.
*/
int SocialNetwork::getMinAge()
{
	return this->minAge;
} 

/* function that add a new profile to network 
input: the profile to add.
ouput: false of profile under minimum age else true
*/
bool SocialNetwork::addProfile(const Profile profile_to_add)
{
	if (profile_to_add.getOwner().getAge() < getMinAge())
	{
		return false;
	} 

	return list.add(profile_to_add);
} 

/*  function that returns list of windows devices that connected to social network  
input: none. 
output: the list.
*/
std::string SocialNetwork::getWindowsDevices() const
{
	ProfileNode* head = this->list.get_first();  
	DeviceNode* deviceHead = nullptr; 
	User user; 
	std::string windowsDevices = "";

	
	while (head)
	{   
		deviceHead = head->get_data().getOwner().getDevices().get_first();

		while (deviceHead)
		{ 
			Device device = deviceHead->get_data();
			if (device.getOS() == WINDOWS7 || device.getOS() == WINDOWS10 || device.getOS() == WINDOWS11)
			{
				windowsDevices += "[" + std::to_string(device.getID()) + ", " + device.getOS() + "]" + ", ";
			} 
			deviceHead = deviceHead->get_next();
		}
		head = head->get_next();
	} 

	if (windowsDevices.size() == 0)
	{
		return "";
	} 
	return windowsDevices.erase(windowsDevices.size() - 2);
}



