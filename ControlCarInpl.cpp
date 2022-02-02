#include "ControlCarInpl.h"

ControlCarInpl::ControlCarInpl()
{
	car = new Car * [100];

	load();
}

void ControlCarInpl::add(Car* a)
{
	car[size] = a;
	size++;
}

void ControlCarInpl::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << car[i]->description() << endl;
	}
}

int ControlCarInpl::position(int id)
{
	for (int i = 0; i < size; i++)
	{
		if (car[i]->getCarId() == id)
		{
			return i;
		}
	}
	return -1;
}

void ControlCarInpl::remove(int id)
{
	int p = position(id);

	for (int i = p; i < size - 1; i++)
	{
		car[i] = car[i + 1];
	}
	size--;
}

int ControlCarInpl::nextId()
{
	if (size == 0)
	{
		return 1;
	}
	return car[size - 1]->getCarId() + 1;
}

void ControlCarInpl::updateBrand(int id, string newBrand)
{
	int p = position(id);

	if (p != -1)
	{
		car[p]->setBrand(newBrand);
	}
	else
	{
		cout << "Wrong Car Brand" << endl;
	}
}

void ControlCarInpl::updateMotor(int id, string newMotor)
{
	int p = position(id);

	if (p != -1)
	{
		car[p]->setMotor(newMotor);
	}
	else
	{
		cout << "Wrong Car Engine" << endl;
	}
}

void ControlCarInpl::updateModel(int id, string newModel)
{
	int p = position(id);

	if (p != -1)
	{
		car[p]->setModel(newModel);
	}
	else
	{
		cout << "Wrong Car Model" << endl;
	}
}

void ControlCarInpl::load()
{
	ifstream read("Cars.txt");

	while (!read.eof())
	{
		int carId;
		read >> carId;
		string brand;
		read >> brand;
		string motor;
		read >> motor;
		string model;
		read >> model;
		if (model == "Sedan")
		{
			int topSpeed;
			read >> topSpeed;

			Car* a = new Sedan(carId, brand, motor,topSpeed);

			this->add(a);
		}
		if (model == "Break")
		{
			int torque;
			read >> torque;

			Car* b = new Break(carId, brand, motor, torque);

			this->add(b);
		}
	}
}

void ControlCarInpl::showCar(int carId)
{
	for (int i = 0; i < size; i++)
	{
		if (car[i]->getCarId() == carId)
		{
			cout << car[i]->description() << endl;
		}
	}
}

void ControlCarInpl::getCar(string brand, string model, int& nr)
{
	nr = 0;

	for (int i = 0; i < size; i++)
	{
		if (car[i]->getBrand() == brand && car[i]->getModel()==model)
		{
			cout << car[i]->description() << endl;

			nr++;
		}
	}
}

Car** ControlCarInpl::all()
{
	for (int i = 0; i < size; i++)
	{
		return this->car;
	}
}

int ControlCarInpl::count()
{
	return size;
}
