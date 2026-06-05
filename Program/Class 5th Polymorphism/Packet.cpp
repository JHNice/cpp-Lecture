#include "iostream"
#include "Packet.h"
using namespace std;

void Packet::Send(int frequency)
{
	cout << "frequency : " << frequency << endl;
}

void Packet::Send(const char* message)
{
	cout << "message : " << message << endl;
}

void Packet::Send(const char* message, int frequency)
{
	cout << "frequency : " << frequency << ", message : " << message << endl;
}
