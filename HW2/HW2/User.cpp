#include "User.h"  
#include <iostream>

/* function that init the user profile
input: his id his name and his age 
ouput: none.
*/
void User::init(unsigned int id, std::string username, unsigned int age)
{
	this->id = id; 
	this->userName = username; 
	this->age = age;   
	this->list.init();  
}  

/* function that clears the user profile 
input: none.
output: none.
*/
void User::clear()
{
	this->userName = ""; 
	this->age = 0; 
	this->id = 0; 
	this->list.clear();
} 

/* function that add device to the list 
input: the device to add 
output: none.
*/
void User::addDevice(const Device newDevice)
{
	this->list.add(newDevice);
} 

/* function that returns the user id 
input: none 
output: his id
*/ 
unsigned int User::getID() const
{
	return this->id;
}

/* function taht returns the username
input: none.
output: his username
*/
std::string User::getUserName() const
{
	return this->userName;
} 

/* function that returns the user's age;
input: none.
output: his age
*/
unsigned int User::getAge() const
{
	return this->age;
}

/* function that returns the user's device list;
input: none.
output: his device list
*/
const DevicesList& User::getDevices() const
{
	return this->list;
}

/* function that checks if all the user device's are on 
input: none. 
output: true if all are on false if not 
*/
bool User::checkIfDevicesAreOn() const
{  
	
	DeviceNode* head = this->list.get_first();  
	DeviceNode* temp = head;

	while (temp)
	{
		if ((*temp).get_data().isActive() == false)
		{
			return false;
		} 
		temp = ((*temp).get_next());
	}  

	
	return true;
}
