#include"ControlOrderInpl.h"

class View
{
private:

	User* user;
	ControlCar* carInpl;
	ControlOrder* orderInpl;
	ControlUser* userInpl;

public:

	View(ControlUser* user, User* u);

	string meniu();

	void play();

	void viewOrder();

	void add();

	void remove();

	void save();






};

