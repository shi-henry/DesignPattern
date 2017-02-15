#include <iostream>
#include "AbstractFactory.h"
#include "Product.h"
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    AbstractFactory* factory1 = new AbstractFactoryA();
    Product* produce1 = new ProductA(*factory1);
    if (NULL != produce1)
    {
        produce1->printProductName();
        delete produce1;
        produce1 = NULL;
    }
    produce1 = new ProductB(*factory1);
    if (NULL != produce1)
    {
        produce1->printProductName();
        delete produce1;
        produce1 = NULL;
    }

    if (NULL != factory1)
    {
        delete factory1;
        factory1 = NULL;
    }

    factory1 = new AbstractFactoryB();
    produce1 = new ProductA(*factory1);
    if (NULL != produce1)
    {
        produce1->printProductName();
        delete produce1;
        produce1 = NULL;
    }
    produce1 = new ProductB(*factory1);
    if (NULL != produce1)
    {
        produce1->printProductName();
        delete produce1;
        produce1 = NULL;
    }

    if (NULL != factory1)
    {
        delete factory1;
        factory1 = NULL;
    }
    
    return 0;
}