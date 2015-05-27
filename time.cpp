#include "time.h"

time::time()
{
	hour, min = 0;
}

time::time(int h, int m)
{
	hour = h;
	min = m;
}

time::~time()
{
}

ostream& operator<<(ostream& os, const time &t)
{
	os << t.hour << ":" << t.min << endl;
	return os;
}

void time::set(int h, int m)
{
	hour = h;
	min = m;
}

int time::get(int &h, int &m)
{
	h = hour;
	m = min;
	return 0;
}

