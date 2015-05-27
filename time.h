//function declarations

#include <iostream>

using namespace std;

#ifndef TIME_H
#define TIME_H

class time
{
public:
	time(); //default
	time(int, int); //overloaded
	~time(); //destructor

	friend ostream& operator<<(ostream& os, const time& t );

	void set(int, int);
	int get(int&, int&);

private:
	int hour;
	int min;

};

#endif