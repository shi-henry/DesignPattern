#include <iostream>
#include "product.h"
#include "productStore.h"
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ProductStore* store1 = new ProductStoreA();
    // should chang raw pointer to smart pointer
    Product* product1 = store1->createProduct('A');
    if (NULL != product1)
    {
        product1->printProductName();
        delete product1;
        product1 = NULL;
    }
    Product* product2 = store1->createProduct('A');
    if (NULL != product2)
    {
        product2->printProductName();
        delete product2;
        product2 = NULL;
    }

    if (NULL != store1)
    {
        delete store1;
        store1 = NULL;
    }

    ProductStore* store2 = new ProductStoreB();

    // should chang raw pointer to smart pointer
    Product* product3 = store2->createProduct('A');
    if (NULL != product3)
    {
        product3->printProductName();
        delete product3;
        product3 = NULL;
    }
    Product* product4 = store2->createProduct('A');
    if (NULL != product4)
    {
        product4->printProductName();
        delete product4;
        product4 = NULL;
    }

    if (NULL != store2)
    {
        delete store2;
        store2 = NULL;
    }
    return 0;
}