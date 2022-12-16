// person_main.cc
// A simple Person class executable

#include <iostream>
#include <string>
#include "client.h"

int main(void){
    Client persona("30864553B", "Fernando", "Alonso", "c/ Pedro Benito", "Fuentealbilla", "Masachusetts", "El Congo", 2005);
    Client persona2("xx2", "ARVIPE", "HOMOGAY", "c/  Benito", "GAYLANDIA", "TUNAOC", "EL NEGRETE", 2007, 1);

    std::cout<<persona.get_full_address();
    std::cout<<"id: " <<persona.get_id();
}