#ifndef Ingredient_H
#define Ingredient_H

#include <string>
#include <iostream>


class IngredientA
{
public:
    virtual void printIngredientName() = 0;
};

class IngredientA1: public IngredientA
{
    void printIngredientName()
    {
        std::cout<<"IngredientA1"<<std::endl;
    }
};

class IngredientA2: public IngredientA
{
    void printIngredientName()
    {
        std::cout<<"IngredientA2"<<std::endl;
    }
};

class IngredientB
{
public:
    virtual void printIngredientName() = 0;
};

class IngredientB1: public IngredientB
{
    void printIngredientName()
    {
        std::cout<<"IngredientB1"<<std::endl;
    }
};

class IngredientB2: public IngredientB
{
    void printIngredientName()
    {
        std::cout<<"IngredientB2"<<std::endl;
    }
};

#endif