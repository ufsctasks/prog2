#ifndef CLIENT_HPP
#define CLIENT_HPP



#include <iostream>

using namespace std;

class Client
{
private:
    string m_name;
    string m_address;
    string m_job;
    float m_income;

public:
    //constructor
    Client(string name, string address, string job, float income) :
        m_name(name), m_address(address), m_job(job), m_income(income) {}

    //getters and setters
    string GetName() { return m_name; };
    string GetAddress() { return m_address; };
    string GetJob() { return m_job; };
    float GetIncome() { return m_income; };
};

#endif
