#pragma once

#include <string>
#include "DeviceList.h" 

class User
{
public: 

	//methods 
	void init(unsigned int id, std::string username, unsigned int age); 
	void clear();  
	void addDevice(Device newDevice);
	unsigned int getID() const; 
	std::string getUserName() const; 
	unsigned int getAge() const;
	const DevicesList& getDevices() const; 
	bool checkIfDevicesAreOn() const; 
	
private: 
	
	//fields
	unsigned int id; 
	unsigned int age; 
	std::string userName;
	DevicesList list; 

};