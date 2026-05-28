#pragma once
#include "Item.h"
class Pickaxe :
    public Item
{
private:
    const char* name;
    int AttackDamage;

public:
    Pickaxe();

    virtual ~Pickaxe();

    virtual void Use();
};

