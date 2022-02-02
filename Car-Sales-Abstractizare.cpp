#include"View.h"

int main()
{
    /*Car* c = new Sedan(1, "BMW", "2.0", 250);

    Car* d = new Break(2, "Audi", "2.7", 930);

    cout << c->description() << endl;

    cout << d->description() << endl;*/

    ControlUser* x = new ControlUserInpl();

    User* pers = new Customer(1, "BlotiuC", "parola", "cash");

    View* v = new View(x, pers);

    v->play();


}
