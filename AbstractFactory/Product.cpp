#include <iostream>
#include "Product.h"
#include "AbstractFactory.h"
using namespace std;

ProductA::ProductA(const AbstractFactory& factory)
{
    m_pIA = factory.createIngredientA();
}

ProductA::~ProductA()
{
    if (NULL != m_pIA)
    {
        delete m_pIA;
        m_pIA = NULL;
    }
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

ProductB::~ProductB()
{
    if (NULL != m_pIA)
    {
        delete m_pIA;
        m_pIA = NULL;
    }
    if (NULL != m_pIB)
    {
        delete m_pIB;
        m_pIB = NULL;
    }
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