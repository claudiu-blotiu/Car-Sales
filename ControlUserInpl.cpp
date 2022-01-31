#include "ControlUserInpl.h"

ControlUserInpl::ControlUserInpl()
{
	user = new User * [100];

	load();
}

void ControlUserInpl::add(User* a)
{
	user[size] = a;
	size++;
}

void ControlUserInpl::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << user[i]->description() << endl;
	}
}

int ControlUserInpl::position(int id)
{
	for (int i = 0; i < size; i++)
	{
		if (user[i]->getUserId() == id)
		{
			return i;
		}
	}
	return -1;
}

void ControlUserInpl::remove(int id)
{
	int p = position(id);

	for (int i = p; i < size - 1; i++)
	{
		user[i] = user[i + 1];
	}
	size--;
}

int ControlUserInpl::nextId()
{
	if (size == 0)
	{
		return 1;
	}
	return user[size - 1]->getUserId() + 1;
}

void ControlUserInpl::updateName(int id, string newName)
{
	int p = position(id);

	if (p != -1)
	{
		user[p]->setName(newName);
	}
	else
	{
		cout << "Wrong User Name" << endl;
	}
}

void ControlUserInpl::updatePass(int id, string newPass)
{
	int p = position(id);

	if (p != -1)
	{
		user[p]->setPass(newPass);
	}
	else
	{
		cout << "Wrong User Pass" << endl;
	}
}

void ControlUserInpl::updateRole(int id, string newRole)
{
	int p = position(id);

	if (p != -1)
	{
		user[p]->setRole(newRole);
	}
	else
	{
		cout << "Wrong Role" << endl;
	}
}

void ControlUserInpl::load()
{
	ifstream read("Users.txt");

	while (!read.eof())
	{
		int userId;
		read >> userId;
		string name;
		read >> name;
		string pass;
		read >> pass;
		string role;
		read >> role;
		if (role == "Customer")
		{
			string payment;
			read >> payment;

			User* a = new Customer(userId, name, pass, payment);

			this->add(a);
		}
		if (role == "Admin")
		{
			bool manager;
			read >> manager;

			User* b = new Admin(userId, name, pass, manager);

			this->add(b);
		}
	}
}

User** ControlUserInpl::all()
{
	for (int i = 0; i < size; i++)
	{
		return this->user;
	}
}

int ControlUserInpl::count()
{
	return size;
}
