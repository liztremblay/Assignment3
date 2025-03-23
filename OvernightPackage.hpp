//
//  OvernightPackage.hpp
//  40117481_40273411_A3
//
//  Created by Elizabeth Tremblay & Ali Mekouar on 2025-03-11.
//

#ifndef OvernightPackage_hpp
#define OvernightPackage_hpp

#include <string>
#include "Package.hpp"
using namespace std;

class OvernightPackage: public Package {
private:
    double overnightFee;
    
public:
    OvernightPackage();
    
    OvernightPackage(string, string, string, string, int, string, string, string, string, int, double, double, double);
    
    ~OvernightPackage();
    
    double calculateCost() override final;
    
};

#endif /* OvernightPackage_hpp */
