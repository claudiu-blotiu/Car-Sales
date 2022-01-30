#include "User.h"

User::User(int userId, string name, string pass, string role)
{
	this->userId = userId;
	this->name = name;
	this->pass = pass;
	this->role = role;
}

void User::setUserId(int userId)
{
	this->userId = userId;
}
int User::getUserId()
{
	return this->userId;
}

void User::setName(string name)
{
	this->name = name;
}
string User::getName()
{
	return this->name;
}

void User::setPass(string pass)
{
	this->pass = pass;
}
string User::getPass()
{
	return this->pass;
}

void User::setRole(string role)
{
	this->role = role;
}
string User::getRole()
{
	return this->role;
}





