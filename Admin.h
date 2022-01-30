#include"Customer.h"

class Admin:public User
{
private:

	bool manager = true;

public:

	Admin(int, string, string, bool);

	void setManager(bool);
	bool getManager();

	string description();



};

