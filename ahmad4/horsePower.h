#ifndef _HORSEPOWER_H_
#define _HORSEPOWER_H_

#include <string>
using namespace std;

class horsePower
{
    public:
        horsePower(float num);
	horsePower();
        horsePower(horsePower& o);
        void setValue(const float num);
	void setName(string temp);
	float getValue() const;
	string getName() const;
	horsePower operator = (const horsePower& hp);
	bool operator == (const horsePower& hp) const;
	bool operator != (const horsePower& hp) const;
	bool operator <= (const horsePower& hp) const;
	bool operator > (const horsePower& hp) const;
	bool operator < (const horsePower& hp) const;
	bool operator >= (const horsePower& hp) const; 

    private:
        float uNum ;
        string uName;

};
	ostream& operator << (ostream& output, const horsePower& hp);
	istream& operator >> (istream& input, horsePower& hp);
#endif

