#include <iostream>
#include "Factory.h"
#include "Product.h"


using namespace std;

int main(int argc,char* argv[])
{
    Factory *fac = new ConcreteFactory();
    Product* p = fac->CreateProduct();
    return 0;
}
