//
//  main.cpp
//  40117481_20273411_A3
//
//  Created by Elizabeth Tremblay on 2025-03-11.
//

#include <iostream>
#include <iomanip>
#include "Package.hpp"
#include "TwoDayPackage.hpp"
#include "OvernightPackage.hpp"
using namespace std;

void testStaticBinding(){
    Package p("Dylan G.", "Macrodata Refinement", "Kier", "PE", 72845, "Harmony Cobel", "Lumon Management", "Kier", "PE", 73017, 12.90, 1.50);
    TwoDayPackage tdp("Irving Bailiff", "Lumon Industries", "Kier", "PE", 87351, "Burt Goodman", "O&D Department", "Kier", "PE", 29313, 8.7, 1.50, 2.50);
    OvernightPackage op("Mark S.", "Lumon Industries", "Kier", "PE", 12345 , "Helly R.", "Lumon Industries", "Kier", "PE", 56789, 10.2, 1.50, 3.00);
    
    cout << "The shipping cost is for the package to " << p.getRecipientName() << " from " << p.getSenderName() << " is " << fixed << setprecision(2)<< p.calculateCost() << "$." << endl;
    
    cout << "The shipping cost is for the two day package to " << tdp.getRecipientName() << " from " << tdp.getSenderName() << " is " << fixed << setprecision(2)<< tdp.calculateCost() << "$." << endl;
    
    cout << "The shipping cost is for the overnight package to " << op.getRecipientName() << " from " << op.getSenderName() << " is " << fixed << setprecision(2)<< op.calculateCost()  << "$." << endl << endl;
    
};

void testDynamicBinding(){
    double sum = 0.00;
    Package* packages[10];
    
    packages[0] = new TwoDayPackage("Jon Snow", "Winterfell", "The North", "Westeros", 11111, "Arya Stark",                                      "Braavos", "Essos", "Westeros", 22222, 10.0, 1.50, 3.00);

    packages[1] = new TwoDayPackage("Tyrion Lannister", "Casterly Rock", "Westerlands", "Westeros", 33333,                                   "Daenerys Targaryen", "Dragonstone", "Crownlands", "Westeros", 44444,                                    5.0, 1.50, 3.00);

    packages[2] = new TwoDayPackage("Cersei Lannister", "Red Keep", "King's Landing", "Westeros", 55555,
                                    "Jaime Lannister", "Red Keep", "King's Landing", "Westeros", 55555, 7.0, 1.50,3.00);

    packages[3] = new TwoDayPackage("Sansa Stark", "Winterfell", "The North", "Westeros", 66666,
                                    "Brienne of Tarth", "Tarth", "Stormlands", "Westeros", 77777,
                                    8.0, 1.50, 3.00);

    packages[4] = new TwoDayPackage("Jorah Mormont", "Bear Island", "The North", "Westeros", 88888,
                                    "Samwell Tarly", "Oldtown", "Reach", "Westeros", 99999,
                                    6.0, 1.50, 3.00);

    packages[5] = new OvernightPackage("Bran Stark", "Winterfell", "The North", "Westeros", 10101,
                                        "The Night King", "Beyond the Wall", "The North", "Westeros", 12121,
                                        9.0, 1.50, 1.25);

    packages[6] = new OvernightPackage("Davos Seaworth", "Dragonstone", "Crownlands", "Westeros", 13131,
                                       "Melisandre", "Asshai", "Shadowlands", "Essos", 14141,
                                       7.5, 1.50, 1.25);

    packages[7] = new OvernightPackage("Theon Greyjoy", "Pyke", "Iron Islands", "Westeros", 15151,
                                        "Yara Greyjoy", "Pyke", "Iron Islands", "Westeros", 16161,
                                        5.5, 1.50, 1.25);

    packages[8] = new OvernightPackage("Sandor Clegane", "The Riverlands", "Westeros", "Westeros", 17171,
                                        "Gregor Clegane", "Clegane Keep", "Westeros", "Westeros", 18181,
                                        6.2, 1.50, 1.25);

    packages[9] = new OvernightPackage("Gendry Baratheon", "King's Landing", "Crownlands", "Westeros",                                          19191, "Robert Baratheon", "Storm's End", "Stormlands",                                                  "Westeros", 20202, 10.5, 1.50, 1.25);
    
    for (int i=0; i<10; i++){
        cout << "-------------------Package #" << (i+1) << "-------------------" << endl;
        cout << packages[i]->getSenderInfo() << endl << endl;
        cout << packages[i]->getRecipientInfo() << endl << endl;
        cout << "Shipping cost: " << packages[i]->calculateCost() << "$."<< endl << endl;
        sum += packages[i]->calculateCost();
    }
    
    cout << "Total shipping cost: " << sum << "$." << endl<< endl;
    
    for (int i=0; i<10; i++){
        delete packages[i];
    }

};



int main(){
    testStaticBinding();
    testDynamicBinding();
    
    return 0;
}


