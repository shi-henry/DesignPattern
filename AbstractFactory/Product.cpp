#include "stdafx.h"
#include <iostream>
#include "Product.h"
#include "AbstractFactory.h"
using namespace std;

ProductA::ProductA(const AbstractFactory& factory)
{
    m_pIA = factory.createIngredientA();
}

void ProductA::printProductName()
{
    cout<<"ProductA->";
    if (NULL != m_pIA)
    {
        m_pIA->printIngredientName();
    }
}

ProductB::ProductB(const AbstractFactory& factory)
{
    m_pIA = factory.createIngredientA();
    m_pIB = factory.createIngredientB();
}

void ProductB::printProductName()
{
    cout<<"ProductB->";
    if (NULL != m_pIB)
    {
        m_pIB->printIngredientName();
    }
    cout<<"ProductB->";
    if (NULL != m_pIA)
    {
        m_pIA->printIngredientName();
    }
}