#include "horsePower.h"
#include <string>
#include <iostream>

using namespace std;

horsePower::horsePower()
{
    uNum = 0;
    uName = "hp";
};

horsePower::horsePower(float num)
{
    uNum = num;
    uName = "hp";
};

float horsePower::getValue() const
{
    return uNum;
};

void horsePower::setValue(const float num)
{
     uNum = num;
};

void horsePower::setName(string temp)
{
    bool found = false;
    string names[2] = {"hp" , "horsepower"};
    for (int i = 0; i < 2; i++)
	if (temp == names[i])
	{
	    uName = temp;
    	    found = true;
	}
    if(found)
    {
	cout << "Name of unit: " << temp << endl;
    }
    else
	cout << temp << ", not found." << endl;
};

string horsePower::getName() const
{
    return uName;
};

ostream& operator << (ostream &output, const horsePower &hp)
{
    output << hp.getValue() << " " << hp.getName();
    return output;
};

istream& operator >> (istream &input, horsePower &hp)
{
    float tempVal;
    string tempNam;
    cout << "Enter a value:";
    input >> tempVal;
    cout << "Enter name of the unit:";
    input >> tempNam;
    hp.setValue(tempVal);
    hp.setName(tempNam);
    return input;
};

horsePower::horsePower(horsePower &o)
{
    uNum = o.getValue();
    uName = o.getName();
};

bool horsePower::operator < (const horsePower& hp) const
{
    cout << "I'm in the operator <\n";
    return (uNum < hp.getValue());
};

bool horsePower::operator == (const horsePower& hp) const
{
    cout << "I'm in the operator ==\n";
    return (uNum < hp.getValue());
};

bool horsePower::operator != (const horsePower& hp) const
{
    cout << "I'm in the operator !=\n";
    return (uNum != hp.getValue());
};

bool horsePower::operator >= (const horsePower& hp) const
{
    cout << "I'm in the operator >=\n";
    return (uNum >= hp.getValue());
};

bool horsePower::operator <= (const horsePower& hp) const
{
    cout << "I'm in the operator <=\n";
    return (uNum <= hp.getValue());
};

bool horsePower::operator > (const horsePower& hp) const
{
    cout << "I'm in the operator >\n";
    return (uNum > hp.getValue());
};
