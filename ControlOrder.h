#include"Order.h"

class ControlOrder
{
public:

	virtual void add(Order* a) = 0;

	virtual void show() = 0;

	virtual int position(int id) = 0;

	virtual void remove(int id) = 0;

	virtual int nextId() = 0;

	virtual void updateUserId(int id, int newUserId) = 0;

	virtual void updateCarId(int id, int newCarId) = 0;

	virtual Order** getOrder(int userId, int& nr)=0;

	virtual Order** getOrderId(int orderId, int& nr) = 0;

	virtual void load() = 0;

	virtual Order** all() = 0;

	virtual int count() = 0;

	virtual string toSave() = 0;

	virtual void save() = 0;





};

