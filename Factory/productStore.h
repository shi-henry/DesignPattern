#ifndef ProductStore_H
#define ProductStore_H

// all kinds of ProductStore(factory) derived from ProductStore

class Product;
class ProductStore
{
public:
    ProductStore(){};
    virtual ~ProductStore(){};
    virtual Product* createProduct(char productName) = 0;
};

class ProductStoreA: public ProductStore
{
public:
    ProductStoreA(){};
    ~ProductStoreA(){};
    virtual Product* createProduct(char productName);
};

class ProductStoreB: public ProductStore
{
public:
    ProductStoreB(){};
    ~ProductStoreB(){};
    virtual Product* createProduct(char productName);
};

#endif