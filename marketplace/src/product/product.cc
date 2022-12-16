// product.cc
// A simple Product class

#include "product.h"
#include <string>

Product::Product(std::string id, std::string name, float price, std::string maker, std::string seller){
    id_=id;
    name_=name;
    maker_=maker;
    seller_=seller;
    price_=price;
    }

