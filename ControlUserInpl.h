#include"ControlUser.h"

class ControlUserInpl:public ControlUser
{

private:

	User** user;

public:

	int size = 0;

	ControlUserInpl();

	void add(User* a);

	void show();

	int position(int id);

	void remove(int id);

	int nextId();

	void updateName(int id, string newName);

	void updatePass(int id, string newPass);

	void updateRole(int id, string newRole);

	void load();

	User** all();

	int count();



};

