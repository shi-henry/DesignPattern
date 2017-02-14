#include <iostream>
#include "AbstractFactory.h"
#include "Product.h"
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    AbstractFactoryA factoryA;
    AbstractFactory& factory1 = factoryA;
    Product* produce1 = new ProductA(factory1);
    if (NULL != produce1)
    {
        produce1->printProductName();
        delete produce1;
        produce1 = NULL;
    }
    produce1 = new ProductB(factory1);
    if (NULL != produce1)
    {
        produce1->printProductName();
        delete produce1;
        produce1 = NULL;
    }

    AbstractFactoryB factoryB;
    factory1 = factoryB;
    produce1 = new ProductA(factory1);
    if (NULL != produce1)
    {
        produce1->printProductName();
        delete produce1;
        produce1 = NULL;
    }
    produce1 = new ProductB(factory1);
    if (NULL != produce1)
    {
        produce1->printProductName();
        delete produce1;
        produce1 = NULL;
    }
    
    return 0;
}