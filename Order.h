#include"ControlUserInpl.h"

class Order
{
private:

	int id = 1;
	int userId = 1;
	int carId = 1;
	
public:

	Order()
	{

	}

	Order(int, int, int);

	void setId(int);
	int getId();

	void setUserId(int);
	int getUserId();

	void setCarId(int);
	int getCarId();

	virtual string description();

	virtual string toSave();





};

