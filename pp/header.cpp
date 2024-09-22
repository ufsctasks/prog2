#include "header.hpp"

float Car :: calcDistance(){
    consumo = 12;
    distance = 0;
    litros = 0;
    for(size_t i = 0; i < routes.size(); i++)
    {
        distance += routes.at(i).second;
    }
    litros = distance/consumo;
    return distance;
}
float Bus :: calcDistance(){
    consumo = 7;
    distance = 0;
    litros = 0;
    for(size_t i = 0; i < routes.size(); i++)
    {
        distance += routes.at(i).second;
    }
    litros = distance/consumo;
    return distance;
}
float LightTruck :: calcDistance(){
    consumo = 4;
    distance = 0;
    litros = 0;
    for(size_t i = 0; i < routes.size(); i++)
    {
        distance += routes.at(i).second;
    }
    litros = distance/consumo;
    return distance;
}
float HeavyTruck :: calcDistance(){
    consumo = 2;
    distance = 0;
    litros = 0;
    for(size_t i = 0; i < routes.size(); i++)
    {
        distance += routes.at(i).second;
    }
    litros = distance/consumo;
    return distance;
}