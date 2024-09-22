#include <iostream>
#include "client.hpp"
#include "cc.hpp"
#include "ce.hpp"
#include <vector>

using namespace std;

int main()
{
    vector< Client > clientList;
    vector< CC > ccList;  //vetor de conta corrente
    vector< CE > ceList;  //vetor de conta especial

    //vector< Client > clientList;

    //Client *p = &clientList.at(4);

    while(true)
    {
        cout << "UFSC Bank - your money is safe with us, you can trust" << endl;

        cout << "1.New Client" << endl;
        cout << "2.Update Client" << endl;
        cout << "3.Remove Client" << endl;
        cout << "4.New Account CC" << endl;
        cout << "5.New Account CE" << endl;
        cout << "6.Update Account" << endl;
        cout << "7.Show Clients" << endl;
        cout << "8.Show CC/CE Accounts" << endl;

        /*
         Depositar - 2 parametros (conta, valor)
         Sacar - 2 parametros (conta, valor)
         Transferir - 3 parametros (contaOrigem, contaDestino, valor)
         */

        cout << "Select an option:";
        char option;
        cin >> option;
        cin.ignore();

        if(option == '1')
        {
            string name, address, job;
            float income;
            cout << "Enter Client Name:";
            getline(cin, name);
            cout << "Enter Client Address:";
            getline(cin, address);
            cout << "Enter Client Job:";
            getline(cin, job);
            cout << "Enter Client Income:";
            cin >> income;

            Client newclient(name, address, job, income);
            clientList.push_back(newclient);
            continue;
        }
        if(option == '2')
        {

            continue;
        }
        if(option == '3')
        {

            continue;
        }
        if(option == '4')
        {
            cout << "Enter with Client Id: ";
            size_t indexClient;
            cin >> indexClient;
            cout << "Enter with account balance: ";
            float balance;
            cin >> balance;

            Client *p = &clientList.at(indexClient);

            CC newAccount(p, balance);
            ccList.push_back(newAccount);
            continue;
        }
        if(option == '5')
        {
            cout << "Enter with Client Id: ";
            size_t indexClient;
            cin >> indexClient;
            cout << "Enter with account balance: ";
            float balance;
            cin >> balance;
            cout << "Enter with account limit: ";
            float limit;
            cin >> limit;

            Client *p = &clientList.at(indexClient);

            CE newAccount(p, balance, limit);
            ceList.push_back(newAccount);
            continue;
        }
        if(option == '7')
        {
            for(size_t i=0; i<clientList.size(); i++)
            {
                cout << "Index:" << i << "  Name:" << clientList.at(i).GetName() << " Address:" << clientList.at(i).GetAddress() << " Job:" << clientList.at(i).GetJob() << " Income:" << clientList.at(i).GetIncome() << endl;
            }
            cout << endl;
            continue;
        }
        if(option == '8')
        {
            cout << "Report of CC accounts: " << endl;
            for(size_t i=0; i<ccList.size(); i++)
            {
                ccList.at(i).ShowInformation();
            }
            cout << endl;
            cout << "Report of CE accounts: " << endl;
            for(size_t i=0; i<ceList.size(); i++)
            {
                ceList.at(i).ShowInformation();
            }
            cout << endl;
            continue;
        }
        if(option == '0')
        {

            break;
        }
    }


    return 0;
}
