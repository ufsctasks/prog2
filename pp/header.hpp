#ifndef HEADER_HPP
#define HEADER_HPP
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class Vehicle {

    protected:    
    int consumo;
    float distance;
    float litros;

    public:
    string plate;
    vector<pair< string, float > > routes;    
    string description;
    Vehicle() : consumo (0) {};
    float setRoute(string city, float distance){routes.push_back({city, distance});};
    virtual float calcDistance() = 0;

};

class Car : public Vehicle{
    protected:
        string plate;
        vector<pair< string, float > > routes;    
        string description;  

    public:
        Car(string newPlate, string newDescription) {plate = newPlate; description = newDescription;};
        float setRoute(string city, float distance){routes.push_back({city, distance});};
        float calcDistance();

};

class Bus : public Vehicle{

    protected:
        string plate;
        vector<pair< string, float > > routes;    
        string description;  

    public:
        Bus(string newPlate, string newDescription) {plate = newPlate; description = newDescription;};
        float setRoute(string city, float distance){routes.push_back({city, distance});};
        float calcDistance();
    

};

class LightTruck : public Vehicle{

     protected:
        string plate;
        vector<pair< string, float > > routes;    
        string description;  

    public:
        LightTruck(string newPlate, string newDescription) {plate = newPlate; description = newDescription;}; 
        float setRoute(string city, float distance){routes.push_back({city, distance});};
        float calcDistance();

};

class HeavyTruck : public Vehicle{

    protected:
        string plate;
        vector<pair< string, float > > routes;    
        string description;  

    public:
        HeavyTruck(string newPlate, string newDescription) {plate = newPlate; description = newDescription;}; 
        float setRoute(string city, float distance){routes.push_back({city, distance});};
        float calcDistance();

};

#endif