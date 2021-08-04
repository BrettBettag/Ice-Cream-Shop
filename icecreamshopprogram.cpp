#include <iostream>

using namespace std;

const double smcone = 1.00;
const double medcone = 1.50;
const double lgcone = 2.00;

const double strawberrysundae = 1.50;
const double chocolatesundae = 2.00;
const double hotfudgesundae = 2.50;

const double smblizzard = 2.00;
const double medblizzard = 2.50;
const double lgblizzard = 3.00;

char cone;
char sundae;
char blizzard;

double conetotal;
double sundaetotal;
double blizzardtotal;
double total;

char ConeMenu()
{
    cout << "Would you like to order an icecream cone?" << endl;
    cin >> cone;
    return cone;
}

double OrderCone()
{
    int conetype;
    cout << "What size cone? 1  small, 2  medium, 3  large " << endl;
    cin >> conetype;
    if (conetype == 1)
        conetotal += smcone;
    else if (conetype == 2)
        conetotal += medcone;
    else if (conetype == 3)
        conetotal += lgcone;
    else
        cout << "Invalid cone entry type" << endl;
    return conetotal;
}

double OrderSundae()
{
    int sundaetype;
    cout << "Would you like to order a Sundae?  1 strawberry, 2 chocolate, 3 fudge " << endl;
    cin >> sundaetype;
    switch (sundaetype)
    {
    case 1:
        sundaetotal += strawberrysundae;
        break;
    case 2:
        sundaetotal += chocolatesundae;
        break;
    case 3:
        sundaetotal += hotfudgesundae;
        break;
    default:
        cout << "You ordered an invalid type of sundae" << endl;
    }
    return sundaetotal;
}

double OrderBlizzard()
{
    int blizzardtype;
    cout << "Would you like to order a blizzard?  1 small, 2 medium, 3 large " << endl;
    cin >> blizzardtype;
    switch (blizzardtype)
    {
    case 1:
        blizzardtotal += smblizzard;
        break;
    case 2:
        blizzardtotal += medblizzard;
        break;
    case 3:
        blizzardtotal += lgblizzard;
        break;
    default:
        cout << "Invalid blizzard type entry" << endl;

    }
    return blizzardtotal;
}

int main()
{
    cone = ConeMenu();

    while ((cone == 'y') || (cone == 'Y')){

    conetotal = OrderCone();

    cone = ConeMenu();

    }
    cout << "Final total for cones ordered is: $" << conetotal << endl;
    total += conetotal;
    cout << "Would you like to order a sundae? " << endl;
    cin >> sundae;

    while ((sundae == 'y') || (sundae == 'Y')){

    sundaetotal = OrderSundae();

    cout << "Would you like to order a sundae? " << endl;
    cin >> sundae;
    }
    cout << "Final total for sundaes ordered is: $" << sundaetotal << endl;
    total += sundaetotal;
    cout << "Would you like to order a blizzard? " << endl;
    cin >> blizzard;

    while ((blizzard == 'y') || (blizzard == 'Y')){

    blizzardtotal = OrderBlizzard();

    cout << "Would you like to order a blizzard? " << endl;
    cin >> blizzard;
    }
    cout << "Your total for blizzard cost is: $" << blizzardtotal << endl;
    total += blizzardtotal;

    cout << "Your total cost is: $" << total << endl;
    return 0;
}
