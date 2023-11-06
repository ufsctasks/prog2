#include "scheduler.hpp"

void scheduler :: inserir(size_t job){

    cout << "inserting a job on the list" << endl;

    IDList.push_back(job);

}

void policy1 :: pickup(){
    IDList.erase(IDList.begin());
        

}
void policy2 :: pickup(){
    IDList.pop_back();
    

}