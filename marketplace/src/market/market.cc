// market.cc
// A market class

#include "market.h"
#include "client.h"
#include "product.h"

bool Market::add_client(Client client)
{
    for (auto i = client_list_.begin(); i != client_list_.end(); i++)
    {
        if (i->get_id() == client.get_id())
        {
            return false;
        }
    }

    client_list_.push_back(client);
    return true;
}

bool Market::add_seller(Seller seller)
{
    for (auto i = seller_list_.begin(); i != seller_list_.end(); i++)
    {
        if (i->get_id() == seller.get_id())
        {
            return false;
        }
    }

    seller_list_.push_back(seller);
    return true;
}

bool Market::delete_client(Client &c)
{
    for (auto i = client_list_.begin(); i != client_list_.end(); i++)
    {
        if (i->get_id() == c.get_id())
        {
            client_list_.erase(i);
            return true;
        }
    }
    return false;
}

bool Market::delete_seller(Seller &s)
{
    for (auto i = seller_list_.begin(); i != seller_list_.end(); i++)
    {
        if (i->get_id() == s.get_id())
        {
            seller_list_.erase(i);
            return true;
        }
    }
    return false;
}

bool Market::add_product_seller(Product p, std::string id_seller)
{
    for (auto i = seller_list_.begin(); i != seller_list_.end(); i++)
    {
        if (i->get_id() == id_seller)
        {
            i->add_product(p);
            return true;
        }
    }
    return false;
}

bool Market::add_product_client(Product p, std::string id_client)
{
    for (auto i = seller_list_.begin(); i != seller_list_.end(); i++)
    {
        if (i->delete_product(p.get_id()))
        {
            for (auto j = client_list_.begin(); j != client_list_.end(); j++)
            {
                if (id_client == j->get_id())
                {
                    j->add_product(p);
                    return true;
                }
            }
            return false;
        }
    }
    return false;
}

bool Market::delete_product_client(Product p, std::string id_client)
{
    for (auto j = client_list_.begin(); j != client_list_.end(); j++)
    {
        if (j->get_id() == id_client)
        {
            return (j->delete_product(p));
        }
    }
    return false;
}

bool Market::delete_product_seller(Product p, std::string id_seller)
{
    for (auto j = seller_list_.begin(); j != seller_list_.end(); j++)
    {
        if (j->get_id() == id_seller)
        {
            return (j->delete_product(p));
        }
    }
    return false;
}

float Market::get_money_in_basket()
{
    float totalcestas = 0.0;

    for (auto j = client_list_.begin(); j != client_list_.end(); j++)
    {
        totalcestas += j->get_total();
    }

    return totalcestas;
}

void Market::dump_market()
{
    // std::string fichero;
    std::ofstream fich("ventas.txt");

    if (!fich)
    {
        std::cout << "Error al abrir ventas.txt\n";
        exit(EXIT_FAILURE);
    }

    fich << "CLIENT ID   |   PRODUCT ID   |   PRODUCT QTY   \n";
    for (auto i = client_list_.begin(); i != client_list_.end(); i++)
    {
      for (int j= 0; j< i->get_ids().size(); j++){

        // fichero= i->get_id() + "\t|\t" + (i->get_ids()[j]) + "\t|\t" + std::to_string(i->get_qs()[j]) + "\n";
        // fich << fichero;
        fich<< i->get_id();
        fich<<"\t|\t";
        fich<<i->get_ids()[j];
        fich<<"\t|\t";
        fich<< i->get_qs()[j];
        


      }
        
    }
    fich.close();
}