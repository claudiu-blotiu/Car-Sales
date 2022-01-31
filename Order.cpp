#include "Order.h"

Order::Order(int id, int userId, int carId)
{
	this->id = id;
	this->userId = userId;
	this->carId = carId;
}

void Order::setId(int id)
{
	this->id = id;
}
int Order::getId()
{
	return this->id;
}

void Order::setUserId(int userId)
{
	this->userId = userId;
}
int Order::getUserId()
{
	return this->userId;
}

void Order::setCarId(int carId)
{
	this->userId = userId;
}
int Order::getCarId()
{
	return this->carId;
}

string Order::description()
{
	string text = "";

	text += "Id: " + to_string(this->id) + "\n";
	text += "User Id: " + to_string(this->userId) + "\n";
	text += "Car Id: " + to_string(this->carId) + "\n";
	
	return text;
}
