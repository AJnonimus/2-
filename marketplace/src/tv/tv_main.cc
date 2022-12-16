// tv_main.cc
// A simple tv class executable

#include <iostream>
#include <string>
#include "tv.h"

int main(void){
    Tv p("xx1", "Producto", 5.75, "Fabricante" , "Vendedor", 8.78);
    std::cout<<"ID: " <<p.get_id()<< "\n";
    std::cout<<"Nombre: " <<p.get_name()<< "\n";
    std::cout<<"Fabricante: " <<p.get_maker()<< "\n";
    std::cout<<"Vendedor: " <<p.get_seller()<< "\n";
    std::cout<<"Precio: " <<p.get_price()<< "\n";
    std::cout<<"Inch: " <<p.get_inch()<< "\n";

}