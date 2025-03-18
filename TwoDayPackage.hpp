//
//  TwoDayPackage.hpp
//  40117481_40273411_A3
//
//  Created by Elizabeth Tremblay & Ali Mekouar on 2025-03-11.
//

#ifndef TwoDayPackage_hpp
#define TwoDayPackage_hpp

#include <string>
#include "Package.hpp"
using namespace std;

class TwoDayPackage: public Package {
private:
    double flatFee;
    
public:
    TwoDayPackage();
    
    TwoDayPackage(string, string, string, string, int, string, string, string, string, int, double, double, double);
    
    ~TwoDayPackage();
    
    double calculateCost() override;
};

#endif /* TwoDayPackage_hpp */
