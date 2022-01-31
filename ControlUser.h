#include"ControlCarInpl.h"

class ControlUser
{
public:

	virtual void add(User* a) = 0;

	virtual void show() = 0;

	virtual int position(int id) = 0;

	virtual void remove(int id) = 0;

	virtual int nextId() = 0;

	virtual void updateName(int id, string newName) = 0;

	virtual void updatePass(int id, string newPass) = 0;

	virtual void updateRole (int id, string newRole) = 0;

	virtual void load() = 0;

	virtual User** all() = 0;

	virtual int count() = 0;




};

