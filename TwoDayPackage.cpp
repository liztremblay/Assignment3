//
//  TwoDayPackage.cpp
//  40117481_20273411_A3
//
//  Created by Elizabeth Tremblay on 2025-03-11.
//

#include "TwoDayPackage.hpp"
#include <string>
#include <stdexcept>
using namespace std;

TwoDayPackage::TwoDayPackage(){};

TwoDayPackage::TwoDayPackage(string sName, string sAddress, string sCity, string sSate, int sZip, string rName, string rAddress, string rCity, string rState, int rZip, double w, double cPerOz, double fFee): Package(sName, sAddress, sCity, sSate, sZip, rName, rAddress, rCity, rState, rZip, w, cPerOz) {
    
    if (flatFee < 0.0){
        throw invalid_argument("Two day fee must be >= 0.0");
    }
    flatFee = fFee;
}

TwoDayPackage::~TwoDayPackage(){};

double TwoDayPackage::calculateCost(){
    double cost = Package::calculateCost();
    return cost + flatFee;
} ;

