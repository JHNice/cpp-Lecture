#pragma once
class Material
{
protected:
	const char* name;
	float weight;
	float hardness;
	float transparency;
public:
	void Describe();
};