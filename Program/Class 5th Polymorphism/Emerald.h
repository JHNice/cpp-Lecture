#pragma once
#include "Material.h"
class Emerald : 
	public Material
{
public:
	Emerald();

	void Describe();

	void Promote() override;
};

