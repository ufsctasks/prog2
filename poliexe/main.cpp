#include "scheduler.hpp"

int main(){
    
    while (true)
    {
        scheduler *p;
        
        int option;
        cout << "TASK SCHEDULER SYSTEM - UFxC TSS" << endl;
        cout << "Select an option bellow:" << endl;
        cout << "1 - Schedule a task to process" << endl;
        cout << "2 - Pick up a task to process using Policy 1" << endl;
        cout << "3 - Pick up a task to process using Policy 2" << endl;
        cout << "4 - Print pending tasks" << endl;
        cout << "5 - Exit" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            size_t i;
            cout << "choose a task id to input" << endl;
            cin >> i;

            p->inserir(i);

            break;
    
        case 2:
        
            break;
    
         case 3:
        
            break;
    
        case 4:
            cout << "Pending tasks:" << endl;


        break;
        case 5:
        
            break;
        }
    }
    
    return 0;
}