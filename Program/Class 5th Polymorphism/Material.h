#pragma once
class Material
{
protected:
	const char* name;
	float weight;
	float hardness;
	float transparency;
	int tier;
public:
	void Describe();

	virtual void Promote();

	virtual ~Material();
};