#include "Device.h" 
#include <iostream>

/* function that checkes if the device is active 
input: none. 
output: true if on false if off 
*/ 
bool Device::isActive() const
{
	return 1 == this->isOn;
} 

/*  function that activate the device 
input: none. 
output: none. 
*/ 
void Device::activate()
{
	this->isOn = 1;
}

/*  function that deactivate the device
input: none.
output: none.
*/
void Device::deactivate()
{
	this->isOn = 0;
} 

/*  function that inits the Device 
input: the id the device type and the device os type 
output: none.
*/
void Device::init(unsigned int id, DeviceType type, std::string os)
{
	this->id = id; 
	this->type = type; 
	this->os = os; 
	this->isOn = 1;
}

/* function that returns the id 
input: none. 
output: the id
*/
int unsigned Device::getID() const
{
	return this->id;
} 

/* functions that returns the type of the device 
input: none. 
output: the type
*/
DeviceType Device::getType() const
{
	return this->type;
}

/* function that returns the os of the device 
input: none. 
output: the os type
*/
std::string Device::getOS() const
{
	return this->os;
}




