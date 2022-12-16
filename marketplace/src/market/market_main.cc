// basket_main.cc
// A simple basket class executable

#include <iostream>
#include <string>
#include "basket.h"
#include "product.h"
#include "market.h"

int main(void)
{
    Basket b;
    Market m;

    
    Client c_1("c1");
    Client c2("c2");

    Seller s1("S1");

    Product p_1("xx1", "Croquetas", 3);
    Product p2_1("xx1", "Croquetas", 3);
    Product p3_1("xx2", "lentejas", 2);
    Product p5_1("xx2", "lentejas", 2);

    b.add_product(p_1);
    b.add_product(p2_1);
    b.add_product(p3_1);
    b.add_product(p5_1);

   m.add_client(c_1);
   m.add_client(c2);
   m.add_seller(s1);

   m.add_product_client(p_1, "c1");
   m.add_product_client(p3_1, "c1");
   m.add_product_client(p_1, "c2");
   m.add_product_client(p3_1, "c1");

   m.add_product_seller(p_1, "S1");

    std::cout<<"Creando el dump";

    m.dump_market();
 
}


