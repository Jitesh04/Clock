#include <iostream>
#include "time.h"

using namespace std;

int main(int argc, char *argv[])
{
	time myTime(8, 40);
	cout << "CM3 starts at " << myTime << endl;

	myTime.set(10, 30);

	int hours, mins;

	myTime.get(hours, mins);
	cout << mins << " past " << hours << endl;
	return 0;
}