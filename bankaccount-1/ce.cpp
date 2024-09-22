#include "ce.hpp"

void CE::ShowInformation()
{
    cout << "CC Account.  Client: " << m_client->GetName() << " Address: " << m_client->GetAddress() << " Job: " << m_client->GetJob() << " Income: " << m_client->GetIncome() << "  Balance: " << m_balance << "  Limit: " << m_limit << endl;

}
