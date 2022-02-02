#include"ControlCar.h"

class ControlCarInpl:public ControlCar
{

private:

	Car** car;

public:

	int size = 0;

	ControlCarInpl();

	void add(Car* a);

	void show();

	int position(int id);

	void remove(int id);

	int nextId();

	void updateBrand(int id, string newBrand);

	void updateMotor(int id, string newMotor);

	void updateModel(int id, string newModel);

	void load();

	void showCar(int carId);

	void getCar(string brand, string model, int& nr);

	Car** all();

	int count();




};

