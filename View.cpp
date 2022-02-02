#include "View.h"

View::View(ControlUser* users, User* u)
{
	this->user = u;

	userInpl = users;

	orderInpl = new ControlOrderInpl();

	carInpl = new ControlCarInpl();
}

string View::meniu()
{
	string text = "";

	text += "--------------------------------------------------------------";
	text += "\nApasati tasta 1 pentru a vedea comanda";
	text += "\nApasati tasta 2 pentru a adauga o masina in comanda";
	text += "\nApasati tasta 3 pentru a renunta la o masina din comanda";
	text += "\nApasati tasta 4 pentru a plasa comanda";
	text += "\n----------------------------------------------------------\n";

	return text;
}

void View::play()
{
	bool quit = false;
	int choise;

	while (quit == false)
	{
		cout << meniu() << endl;

		string x;
		cin >> x;

		choise = stoi(x);

		switch (choise)
		{
		case 1:viewOrder();
			break;
		case 2:add();
			break;
		case 3:remove();
			break;
		case 4:save();
			break;
		}
	}
}

void View::viewOrder()
{
	int ct = 0;

	Order** order = orderInpl->getOrder(this->user->getUserId(), ct);

	for (int i = 0; i < ct; i++)
	{
		carInpl->showCar(order[i]->getCarId());
	}
}

void View::add()
{
	cout << "Enter the car brand" << endl;

	string carBrand = "";

	cin >> carBrand;

	cout << "Enter car Model" << endl;

	string model = "";

	cin >> model;

	cout << endl;

	int ct = 0;

	carInpl->getCar(carBrand, model, ct);

	if (ct == 0)
	{
		cout << "Wrong Car data" << endl;
	}
	else
	{
		cout << "Enter car Id" << endl;

		int carId = 0;

		cin >> carId;

		Order* order = new Order(orderInpl->nextId(), user->getUserId(), carId);

		orderInpl->add(order);
	}
}

void View::remove()
{
	int orderId = 0;

	cout << "Enter Order Id" << endl;

	cin >> orderId;

	int ct = 0;

	Order** retur = orderInpl->getOrderId(orderId, ct);

	for (int i = 0; i < ct; i++)
	{
		if (retur[i]->getUserId() == user->getUserId())
		{
			orderInpl->remove(retur[i]->getId());
		}
	}
}

void View::save()
{
	orderInpl->save();
}

