#include "header.hpp"
int main(){

    vector < Vehicle* > listVehicles;
    Vehicle* p;
    
    while (true)
    {
        cout << "UFSC VEHICLE MANAGER SYSTEM (UVMS)" << endl;
        cout << "-----------------------------------" << endl;
        cout << "1. Insert a new vehicle" << endl;
        cout << "2. Insert a route to a vehicle be executed" << endl;
        cout << "3. Show reports (summary)" << endl;
        cout << "4. Show history by vehicle" << endl;
        cout << "0. Quit" << endl;

        int option;
        cin >> option;

        switch (option)
        {
            case 1:
                int type;
                string vehicleplate;
                string vehicledescription;
                cout << "Vehicle type: " << endl;
                cin >> type;
                    if(type == 1){
                        cout << "enter a Vehicle plate: " << endl;
                        cin >> vehicleplate;
                        cout << "enter a Vehicle description: " << endl;
                        cin >> vehicledescription;
                        listVehicles.push_back(new Car(vehicleplate, vehicledescription));
                        }
                    else if (type == 2){
                        cout << "enter a Vehicle plate: " << endl;
                        cin >> vehicleplate;
                        cout << "enter a Vehicle description: " << endl;
                        cin >> vehicledescription;
                        listVehicles.push_back(new Bus(vehicleplate, vehicledescription));
                    }
                    else if (type == 3){
                        cout << "enter a Vehicle plate: " << endl;
                        cin >> vehicleplate;
                        cout << "enter a Vehicle description: " << endl;
                        cin >> vehicledescription;
                        listVehicles.push_back(new LightTruck(vehicleplate, vehicledescription));
                    }
                    else if (type == 4){
                        cout << "enter a Vehicle plate: " << endl;
                        cin >> vehicleplate;
                        cout << "enter a Vehicle description: " << endl;
                        cin >> vehicledescription;
                        listVehicles.push_back(new HeavyTruck(vehicleplate, vehicledescription));
                    }
            break;
        case 2:
            string vehicleplate;
            cout << "Enter a plate: "<< endl;
            cin >> vehicleplate;

                for(size_t i = 0; i < listVehicles.size(); i++){
                    if()

                }

            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 0:
                break;
        }
    }
    

    return 0;
}