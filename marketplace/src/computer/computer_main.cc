// computer_main.cc
// A simple Computer class executable

#include <iostream>
#include <string>
#include "computer.h"

int main(void){
    Computer p("xx1", ComputerType::Gaming ,"Producto", 5.75, "Fabricante" , "Vendedor");
    std::cout<<"ID: " <<p.get_id()<< "\n";
    std::cout<<"Nombre: " <<p.get_name()<< "\n";
    std::cout<<"Fabricante: " <<p.get_maker()<< "\n";
    std::cout<<"Vendedor: " <<p.get_seller()<< "\n";
    std::cout<<"Precio: " <<p.get_price()<< "\n";
    std::cout<<"Tipo: ";
    switch (p.get_type())
    {
    case ComputerType::Desktop:
        std::cout<<"Desktop \n";
        break;
    
    case ComputerType::Laptop:
        std::cout<<"Laptop \n";

    case ComputerType::Server:
        std::cout<<"Server \n";
    
    case ComputerType::Tablet:
        std::cout<<"Tablet \n";

    case ComputerType::Gaming:
        std::cout<<"Gaming \n";

    default:
        break;
    }
    
}