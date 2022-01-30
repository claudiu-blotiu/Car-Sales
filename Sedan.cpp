#include "Sedan.h"

Sedan::Sedan(int carId, string brand, string motor, int topSpeed):Car(carId,brand,motor,"Sedan")
{
	this->TopSpeed = topSpeed;
}

void Sedan::setTopSpeed(int)
{
	this->TopSpeed = TopSpeed;
}
int Sedan::getTopSpeed()
{
	return this->TopSpeed;
}

string Sedan::description()
{
	string text = "";

	text += "Car ID: " + to_string(this->getCarId()) + "\n";
	text += "Brand: " + this->getBrand() + "\n";
	text += "Motor: " + this->getMotor() + "\n";
	text += "Model: " + this->getModel() + "\n";
	text += "TopSpeed: " + to_string(this->TopSpeed) + "\n";

	return text;
}
