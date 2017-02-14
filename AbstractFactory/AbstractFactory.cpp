#include "stdafx.h"
#include "AbstractFactory.h"

IngredientA* AbstractFactoryA::createIngredientA() const
{
    return new IngredientA1();
}

IngredientB* AbstractFactoryA::createIngredientB() const
{
    return new IngredientB1();
}


IngredientA* AbstractFactoryB::createIngredientA() const
{
    return new IngredientA2();
}

IngredientB* AbstractFactoryB::createIngredientB() const
{
    return new IngredientB2();
}