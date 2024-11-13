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




