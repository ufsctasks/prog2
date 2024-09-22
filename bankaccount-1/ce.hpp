#include "cc.hpp"

class CE : public CC
{
protected:
    float m_limit;

public:
    /*CE(Client *client, float balance, float limit
    {
        m_client = client;
        m_balance = balance;
        m_limit = limit;
    };*/

    CE(Client *client, float balance, float limit) :
        CC(client, balance), m_limit(limit) {};

    void ShowInformation();
};
