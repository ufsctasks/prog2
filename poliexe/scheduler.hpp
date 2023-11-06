#ifndef SCHEDULER_HPP
#define SCHEDULER_HPP
#include<iostream>
#include<vector>

using namespace std;

class scheduler
{
    protected:
        vector < size_t > IDList;
    public:
        scheduler();
        void inserir(size_t job);
        ~scheduler();
        virtual void pickup() = 0;
};

class policy1 : public scheduler{

    public:

        void pickup();

};

class policy2 : public scheduler{

    public:

        void pickup();

};

#endif