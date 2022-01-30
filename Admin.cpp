#include "Admin.h"

Admin::Admin(int userId, string name, string pass, bool manager) :User(userId, name, pass, "Admin")
{
	this->manager = manager;
}

void Admin::setManager(bool manager)
{
	this->manager = manager;
}
bool Admin::getManager()
{
	return this->manager;
}

string Admin::description()
{
	string text = "";

	text += "User Id: " + to_string(this->getUserId()) + "\n";
	text += "Name: " + this->getName() + "\n";
	text += "Pass: " + this->getPass() + "\n";
	text += "Role: " + this->getRole() + "\n";
	text += "Manager: " + to_string(this->manager) + "\n";

	return text;
}

