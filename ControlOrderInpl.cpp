#include "ControlOrderInpl.h"

ControlOrderInpl::ControlOrderInpl()
{
	order = new Order * [100];

	load();
}

void ControlOrderInpl::add(Order* a)
{
	order[size] = a;
	size++;
}

void ControlOrderInpl::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << order[i]->description() << endl;
	}
}

int ControlOrderInpl::position(int id)
{
	for (int i = 0; i < size; i++)
	{
		if (order[i]->getId() == id)
		{
			return i;
		}
	}
	return -1;
}

void ControlOrderInpl::remove(int id)
{
	int p = position(id);

	for (int i = p; i < size - 1; i++)
	{
		order[i] = order[i + 1];
	}
	size--;
}

int ControlOrderInpl::nextId()
{
	if (size == 0)
	{
		return 1;
	}
	return order[size - 1]->getId() + 1;
}

void ControlOrderInpl::updateUserId(int id, int newUserId)
{
	int p = position(id);

	if (p != -1)
	{
		order[p]->setUserId(newUserId);
	}
	else
	{
		cout << "Wrong User Id" << endl;
	}
}

void ControlOrderInpl::updateCarId(int id, int newCarId)
{
	int p = position(id);

	if (p != -1)
	{
		order[p]->setCarId(newCarId);
	}
	else
	{
		cout << "Wrong Car Id" << endl;
	}
}

Order** ControlOrderInpl::getOrder(int userId, int& nr)
{
	nr = 0;
	Order** comanda = new Order * [100];

	for (int i = 0; i < size; i++)
	{
		if (order[i]->getUserId() == userId)
		{
			comanda[nr] = order[i];

			nr++;
		}
	}
	return comanda;
}

Order** ControlOrderInpl::getOrderId(int orderId, int& nr)
{
	nr = 0;
	Order** comanda = new Order * [100];

	for (int i = 0; i < size; i++)
	{
		if (order[i]->getId() == orderId)
		{
			comanda[nr] = order[i];

			nr++;
		}
	}
	return comanda;
}

void ControlOrderInpl::load()
{
	ifstream read("Order.txt");

	while (!read.eof())
	{
		int id;
		read >> id;
		int userId;
		read >> userId;
		int carId;
		read >> carId;
		if (id > 0)
		{
			Order* a = new Order(id, userId, carId);

			this->add(a);
		}
	}
}

Order** ControlOrderInpl::all()
{
	for (int i = 0; i < size; i++)
	{
		return this->order;
	}
}

int ControlOrderInpl::count()
{
	return size;
}

string ControlOrderInpl::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += order[i]->toSave() + "\n";
	}
	text += order[i]->toSave();
	return text;
}

void ControlOrderInpl::save()
{
	ofstream f("Order.txt");

	f << this->toSave();

	f.close();
}

