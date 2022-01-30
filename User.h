#include"Break.h"

class User
{
private:

	int userId = 1;
	string name = "";
	string pass = "";
	string role = "";

public:

	User()
	{

	}

	User(int, string, string, string);

	void setUserId(int);
	int getUserId();

	void setName(string);
	string getName();

	void setPass(string);
	string getPass();

	void setRole(string);
	string getRole();

	virtual string description() = 0;

};

