// seller.h
// A simple seller class

#ifndef SELLER_H
#define SELLER_H

#include <iostream>
#include "person.h"
#include "basket.h"
#include <string>


class Seller: public Person, public Basket
{
    private: 
        std::string sector_;    

    public: Seller(std::string id,
            std::string name="empty",
            std::string surname="empty",
            std::string address="empty",
            std::string town="empty",
            std::string province="empty",
            std::string country="empty",
            int entry_year=0,
            std::string sector=""):Person(id, name, surname, address, town, province, country, entry_year)
    {
        sector_=sector;
    }

    inline std::string get_sector() {return sector_;}
    inline void set_sector(std::string sector){sector_= sector;} 


};

#endif
