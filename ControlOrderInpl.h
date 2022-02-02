#include"ControlOrder.h"

class ControlOrderInpl:public ControlOrder
{
private:

	Order** order;

public:

	int size = 0;

	ControlOrderInpl();

	void add(Order* a);

	void show();

	int position(int id);

	void remove(int id);

	int nextId();

	void updateUserId(int id, int newUserId) ;

	void updateCarId(int id, int newCarId);

	Order** getOrder(int userId, int& nr);

	Order** getOrderId(int orderId, int& nr);

	void load();

	Order** all();

	int count();

	string toSave();

	void save();







};

