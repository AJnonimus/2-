// seller_main.cc
// A simple seññer class executable

#include <iostream>
#include <string>
#include "seller.h"

int main(void){
    Seller persona("30864553B", "Fernando", "Alonso", "c/ Pedro Benito", "Fuentealbilla", "Masachusetts", "El Congo", 2005);
    Seller persona2("xx2", "ARVIPE", "HOMOGAY", "c/  Benito", "GAYLANDIA", "TUNAOC", "EL NEGRETE", 2007, "deportes");

    std::cout<<persona.get_full_address();
    std::cout<<"id: " <<persona.get_id();
}