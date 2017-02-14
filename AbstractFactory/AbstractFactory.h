#ifndef AbstractFactory_H
#define AbstractFactory_H

#include "Ingredient.h"

class AbstractFactory
{
public:
    virtual IngredientA* createIngredientA() const = 0;
    virtual IngredientB* createIngredientB() const = 0;
};

class AbstractFactoryA: public AbstractFactory
{
public:
	AbstractFactoryA(){};
	~AbstractFactoryA(){};
    virtual  IngredientA* createIngredientA() const;
    virtual  IngredientB* createIngredientB() const;
};

class AbstractFactoryB: public AbstractFactory
{
public:
	AbstractFactoryB(){};
	~AbstractFactoryB(){};
    virtual IngredientA* createIngredientA() const;
    virtual IngredientB* createIngredientB() const;
};

#endif