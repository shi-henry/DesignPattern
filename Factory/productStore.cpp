#include <iostream>
#include "product.h"
#include "productStore.h"
using namespace std;

Product* ProductStoreA:: createProduct(char productName)
{

    switch(productName)
    {
        case 'A':
            return new StoreAProductA();
            break;
        case 'B':
            return new StoreAProductB();
            break;
        default:
            return NULL;
            break;
    }
}

Product* ProductStoreB:: createProduct(char productName)
{

    switch(productName)
    {
        case 'A':
            return new StoreBProductA();
            break;
        case 'B':
            return new StoreBProductB();
            break;
        default:
            return NULL;
            break;
    }
}