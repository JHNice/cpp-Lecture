#pragma once
#include "Material.h"
class Platinum :
    public Material
{
public:
    Platinum();
    void Describe();
    void Promote() override;
};

