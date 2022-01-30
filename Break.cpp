#include "Break.h"

Break::Break(int carId, string brand, string motor, int torque) :Car(carId, brand, motor, "Break")
{
	this->torque = torque;
}

void Break::setTorque(int torque)
{
	this->torque = torque;
}
int Break::getTorque()
{
	return this->torque;
}

string Break::description()
{
	string text = "";

	text += "Car ID: " + to_string(this->getCarId()) + "\n";
	text += "Brand: " + this->getBrand() + "\n";
	text += "Motor: " + this->getMotor() + "\n";
	text += "Model: " + this->getModel() + "\n";
	text += "Torque: " + to_string(this->torque) + "\n";

	return text;
}




