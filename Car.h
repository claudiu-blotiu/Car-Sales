#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Car
{
private:

	int carId = 0;
	string brand = "";
	string motor = "";
	string model = "";

public:

	Car()
	{

	}

	Car(int, string, string, string);

	void setCarId(int);
	int getCarId();

	void setBrand(string);
	string getBrand();

	void setMotor(string);
	string getMotor();

	void setModel(string);
	string getModel();

	virtual string description()=0;





};

