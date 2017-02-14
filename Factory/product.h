#ifndef Product_H
#define Product_H

//all kinds of product derived from interface Product

class Product
{
public:
    Product(){};
    virtual ~Product(){};
    virtual void printProductName() = 0;
};

class StoreAProductA: public Product
{
public:
    StoreAProductA(){};
    ~StoreAProductA(){};
    virtual void printProductName();
    
private:
    int m_productMember;
};

class StoreAProductB: public Product
{
public:
    StoreAProductB(){};
    ~StoreAProductB(){};
    virtual void printProductName();
    
private:
    int m_productMember;
};

class StoreBProductA: public Product
{
public:
    StoreBProductA(){};
    ~StoreBProductA(){};
    virtual void printProductName();
    
private:
    int m_productMember;
};

class StoreBProductB: public Product
{
public:
    StoreBProductB(){};
    ~StoreBProductB(){};
    virtual void printProductName();
    
private:
    int m_productMember;
};

#endif