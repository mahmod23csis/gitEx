#include <iostream>
#include <string>
#include <fstream>
#include "horsePower.h"

using namespace std;

int main()
{
    horsePower hp1;
    horsePower hp2(2);
    horsePower hp3(hp2);

    cout << hp1 << endl;
    cout << hp2 << endl;
    cout << hp3 << endl;
    
    cout << "TESTING SETTERS\n";

    hp1.setValue(100);
    hp1.setName("hp");

    cout << hp1 << endl;
    
    cout << "TESTING COMPARISON OPERATORS\n";

    if (hp1 < hp2)
	cout << "hp1 is smaller than hp2\n";
    if (hp1 > hp2)
	cout << "hp1 is greater than hp2\n";
    if (hp3 == hp1)
	cout << "hp3 is equal to hp1\n";
    if (hp2 != hp3)
	cout << "hp2 is not equal to hp3\n";

    cout << "TESTING INPUT & OUTPUT\n";

    cin >> hp3;
    cout << hp3 << endl;

    return 0;
}
