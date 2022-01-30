#include"Car.h"

class Sedan:public Car
{

private:

	int TopSpeed = 1;
public:

	Sedan(int, string, string, int);

	void setTopSpeed(int);
	int getTopSpeed();

	string description();



};

