#pragma once
#include "Item.h"
class BFSword :
    public Item
{
private:
    const char* name;
    int AttackDamage;
public:
    BFSword();
    virtual ~BFSword();
    virtual void Use() override;
};

