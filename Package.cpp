//
//  Package.cpp
//  40117481_20273411_A3
//
//  Created by Elizabeth Tremblay & Ali Mekouar on 2025-03-11.
//
// 

// Base* b = new Derived();  // Pointer to Base class, object of Derived class
// b->display();  // Calls Derived class's display method




#include "Package.hpp"

Package::Package(){};

//Do we need to define the strings as const string& sName?
Package::Package(string sName, string sAddress, string sCity, string sSate, int sZip, string rName, string rAddress, string rCity, string rState, int rZip, double w, double cPerOz): senderName(sName), senderAddress(sAddress), senderCity(sCity), senderState(sSate), senderZip(sZip), recipientName(rName), recipientAddress(rAddress), recipientCity(rCity), recipientState(rState), recipientZip(rZip){
    if (weight < 0.0){
        throw invalid_argument("Weight must be >= 0.0");
    }
    weight = w;
    
    if (costPerOunce < 0.0){
        throw invalid_argument("Cost per ounce must be >= 0.0");
    }
    costPerOunce = cPerOz;
};

Package::~Package(){};

//void Package::setSenderInfo(string, string, string, string, int){};
//void Package::setRecipientInfo(string, string, string, string, int){};
double Package::getCostPerOunce(){
    return costPerOunce;
}

//string Package::getSenderInfo() const{};
//string Package::getRecipientInfo() const{};

//void Package::printInfo(){};

double Package::calculateCost(){
    return weight*costPerOunce;
};
