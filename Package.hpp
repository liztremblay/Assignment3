//
//  Package.hpp
//  40117481_20273411_A3
//
//  Created by Elizabeth Tremblay on 2025-03-11.
//

#ifndef Package_hpp
#define Package_hpp
#include <string>
using namespace std;

class Package {
protected:
    string senderName, senderAddress, senderCity, senderState;
    int senderZip;
    string recipientName, recipientAddress, recipientCity, recipientState;
    int recipientZip;
    double weight, costPerOunce;
    
public:
    Package();
    
    Package(string, string, string, string, int, string, string, string, string, int, double, double);
    
    ~Package();
    
//    void setSenderInfo(string, string, string, string, int);
//    void setRecipientInfo(string, string, string, string, int);
    
//    string getSenderInfo() const;
//    string getRecipientInfo() const;
    double getCostPerOunce();
    
    void printInfo();
    
    virtual double calculateCost();
};

#endif /* Package_hpp */
