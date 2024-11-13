#pragma once  

#include "ProfileList.h"
#include <string>  

class SocialNetwork
{
public: 

	//methods
	void init(const std::string networkName, const int minAge); 
	void clear(); 
	std::string getNetworkName() const; 
	int getMinAge(); 
	bool addProfile(const Profile profile_to_add); 
	std::string getWindowsDevices() const;

private: 

	//fields 
	int  minAge; 
	std::string networkName; 
	ProfileList list;
};
