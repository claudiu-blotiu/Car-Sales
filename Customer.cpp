#include "Customer.h"

Customer::Customer(int userId, string name, string pass, string payment) :User(userId, name, pass, "Customer")
{
	this->payment = payment;
}

void Customer::setPayment(string)
{
	this->payment = payment;
}
string Customer::getPayment()
{
	return this->payment;
}

string Customer::description()
{
	string text = "";

	text += "User Id: " + to_string(this->getUserId()) + "\n";
	text += "Name: " + this->getName() + "\n";
	text += "Pass: " + this->getPass() + "\n";
	text += "Role: " + this->getRole() + "\n";
	text += "Payment: " + this->payment + "\n";

	return text;
}







