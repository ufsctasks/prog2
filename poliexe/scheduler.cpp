#include "scheduler.hpp"

void scheduler :: inserir(size_t job){

    cout << "inserting a job on the list" << endl;

    IDList.push_back(job);

}

void scheduler :: printPendingTasks(){
    
    for (size_t i = 0 ; i < IDList.size(); i++)
        cout << IDList.at(i) << endl;
}

void policy1 :: pickup(){
    IDList.erase(IDList.begin());
}
void policy2 :: pickup(){
    IDList.pop_back();
}