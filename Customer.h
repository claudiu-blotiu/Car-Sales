#include"User.h"

class Customer:public User
{
private:

	string payment = "";

public:

	Customer(int, string, string, string);

	void setPayment(string);
	string getPayment();

	string description();









};

