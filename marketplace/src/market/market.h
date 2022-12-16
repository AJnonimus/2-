// basket.h
// A simple basket class

#ifndef MARKET_H
#define MARKET_H

#include <string>
#include <list>
#include <map>
#include <fstream>
#include <iostream>
#include <vector>
#include <iterator>
#include "client.h"
#include "seller.h"
#include "product.h"

class Market 
{

private:
    std::list<Client> client_list_;
    std::list<Seller> seller_list_;
    std::string slogan_;
    

public:
Market(){};
    Market(std::string slogan)
    {
        slogan_=slogan;   
    }

inline std::string get_slogan(){return slogan_;}
inline void set_slogan(std::string slogan){slogan_=slogan;}

bool add_client(Client c);
bool add_seller(Seller s);

inline int n_clients() { return client_list_.size(); }
inline int n_sellers() { return seller_list_.size(); }

bool delete_client(Client &c);
bool delete_seller(Seller &s);

bool add_product_seller(Product p, std::string id_seller);
bool add_product_client(Product p, std::string id_client);

bool delete_product_client(Product p, std::string id_client);
bool delete_product_seller(Product p, std::string id_seller);

float get_money_in_basket();
void dump_market();


};

#endif