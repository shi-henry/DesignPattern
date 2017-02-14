#ifndef Product_H
#define Product_H

#include "Ingredient.h"

class AbstractFactory;
class Product
{
public:
	Product(){};
    virtual ~Product(){};
    virtual void printProductName() = 0;
};

class ProductA: public Product
{
public:
    ProductA(const AbstractFactory& factory);
	virtual ~ProductA(){};
    virtual void printProductName();

private:
    IngredientA* m_pIA;
    // IngredientB* m_pIB;
};

class ProductB: public Product
{
public:
    ProductB(const AbstractFactory& factory);
	virtual ~ProductB(){};
    virtual void printProductName();

private:
    IngredientA* m_pIA;
    IngredientB* m_pIB;
};

#endif