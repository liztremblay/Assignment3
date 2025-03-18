//
//  Package.hpp
//  40117481_40273411_A3
//
//  Created by Elizabeth Tremblay & Ali Mekouar on 2025-03-11.
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
    
    virtual ~Package();
    
    
    string extractSenderName() const;
    string extractRecipientName() const;
    
    string getSenderInfo() const;
    string getRecipientInfo() const;
    
    double getCostPerOunce();
    
    virtual double calculateCost();
};

#endif /* Package_hpp */
