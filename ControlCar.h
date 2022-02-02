#include"Admin.h"

class ControlCar
{
public:

	virtual void add(Car* a) = 0;

	virtual void show() = 0;

	virtual int position(int id) = 0;

	virtual void remove(int id) = 0;

	virtual int nextId() = 0;

	virtual void updateBrand(int id, string newBrand) = 0;

	virtual void updateMotor(int id, string newMotor) = 0;

	virtual void updateModel(int id, string newModel) = 0;

	virtual void load() = 0;

	virtual void showCar(int carId) = 0;

	virtual void getCar(string brand, string model, int& nr) = 0;

	virtual Car** all() = 0;

	virtual int count() = 0;






};

