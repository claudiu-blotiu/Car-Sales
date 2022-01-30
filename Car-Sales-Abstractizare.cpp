#include"Admin.h"

int main()
{
    /*Car* c = new Sedan(1, "BMW", "2.0", 250);

    Car* d = new Break(2, "Audi", "2.7", 930);

    cout << c->description() << endl;

    cout << d->description() << endl;*/

    User* a = new Customer(1, "Alex", "parola", "Card");

    User* b = new Admin(1, "Bogdan", "meditatii", true);

    cout << a->description() << endl;

    cout << b->description() << endl;



}
