#include "Car.h"

Car::Car(int carId, string brand, string motor, string model)
{
	this->carId = carId;
	this->brand = brand;
	this->motor = motor;
	this->model = model;
}

void Car::setCarId(int carId)
{
	this->carId = carId;
}
int Car::getCarId()
{
	return this->carId;
}

void Car::setBrand(string brand)
{
	this->brand = brand;
}
string Car::getBrand()
{
	return this->brand;
}

void Car::setMotor(string motor)
{
	this->motor = motor;
}
string Car::getMotor()
{
	return this->motor;
}

void Car::setModel(string model)
{
	this->model = model;
}
string Car::getModel()
{
	return this->model;
}








