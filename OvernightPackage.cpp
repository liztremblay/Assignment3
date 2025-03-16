//
//  OvernightPackage.cpp
//  40117481_20273411_A3
//
//  Created by Elizabeth Tremblay on 2025-03-11.
//

#include "OvernightPackage.hpp"
#include <string>
#include <stdexcept>

OvernightPackage::OvernightPackage(){};

OvernightPackage::OvernightPackage(string sName, string sAddress, string sCity, string sSate, int sZip, string rName, string rAddress, string rCity, string rState, int rZip, double w, double cPerOz, double oFee): Package(sName, sAddress, sCity, sSate, sZip, rName, rAddress, rCity, rState, rZip, w, cPerOz) {
    
    if (overnightFee < 0.0){
        throw invalid_argument("OvernightFee must be >= 0.0");
    }
    overnightFee = oFee;
};

OvernightPackage::~OvernightPackage(){};

double OvernightPackage::calculateCost(){
    Package::getCostPerOunce();
    double newCost = costPerOunce + overnightFee;
    return newCost * weight;
};
