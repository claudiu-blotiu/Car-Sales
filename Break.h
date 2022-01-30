#include"Sedan.h"

class Break:public Car
{
private:

	int torque = 1;

public:

	Break(int, string, string, int);

	void setTorque(int);
	int getTorque();

	string description();







};

