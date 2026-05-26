#include "iostream"
#include "Publisher.h"
using namespace std;

void Publisher::Send(int frequency)
{
	cout << "frequency : " << frequency << endl;
}

void Publisher::Send(const char* message)
{
	cout << "message : " << message << endl;
}

void Publisher::Send(const char* message, int frequency)
{
	cout << "frequency : " << frequency << ", message : " << message << endl;
}
