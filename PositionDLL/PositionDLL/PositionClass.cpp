#include "PositionClass.h"
#include <string>

void PositionClass::WritePosition(float x, float y, float z)
{
	ofstream file("position.txt", ios::out);

	if (file.is_open())
	{
		file << x << endl << y << endl << z;
	}
	file.close();
}

float* PositionClass::ReadPosition()
{
	ifstream file("position.txt", ios::in);
	float* temp = new float[3];
	if (file.is_open())
	{
		string buffer;
		getline(file, buffer);
		temp[0] = stof(buffer);
		getline(file, buffer);
		temp[1] = stof(buffer);
		getline(file, buffer);
		temp[2] = stof(buffer);
	}
	file.close();
	return temp;
}
