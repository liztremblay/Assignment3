//
//  Package.cpp
//  40117481_40273411_A3
//
//  Created by Elizabeth Tremblay & Ali Mekouar on 2025-03-11.
//
// 


#include "Package.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>

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

string Package::extractSenderName() const{
    string sender = getSenderInfo();
    stringstream si(sender);
    string name;
    getline(si,name);
    return name;
}

string Package::extractRecipientName() const{
    string recipient = getRecipientInfo();
    stringstream ri(recipient);
    string name;
    getline(ri,name);
    return name;
}

double Package::getCostPerOunce(){
    return costPerOunce;
}

string Package::getSenderInfo() const{
    return senderName + "\n" + senderAddress + ", " + senderCity + ", " + senderState + "\n" + to_string(senderZip);
};

string Package::getRecipientInfo() const{
    return recipientName + "\n" + recipientAddress + ", " + recipientCity + ", " + recipientState + "\n" + to_string(recipientZip);
};

double Package::calculateCost(){
    return weight*costPerOunce;
};
