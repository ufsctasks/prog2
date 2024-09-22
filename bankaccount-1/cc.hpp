#ifndef CC_HPP
#define CC_HPP

#include "client.hpp"
#include <iostream>

using namespace std;

class CC
{
protected:
    Client* m_client;
    float m_balance;

public:
    CC(Client *client, float balance) :
        m_client(client), m_balance(balance) {};

    void ShowInformation();

    //bool Transfer(CC destino, float valor);

    void UpdateClient(Client *newClient)
    {
        m_client = newClient;
    }
};

#endif

