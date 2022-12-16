// product_main.cc
// A simple Product class executable

#include <iostream>
#include <string>
#include "product.h"

int main(void){
    Product p("xx1", "Producto", 5.75, "Fabricante" , "Vendedor");
    std::cout<<"ID: " <<p.get_id()<< "\n";
    std::cout<<"Nombre: " <<p.get_name()<< "\n";
    std::cout<<"Fabricante: " <<p.get_maker()<< "\n";
    std::cout<<"Vendedor: " <<p.get_seller()<< "\n";
    std::cout<<"Precio: " <<p.get_price()<< "\n";
    
}