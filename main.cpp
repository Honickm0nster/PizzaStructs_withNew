//
//  main.cpp
//  Assignment_8
//
//  Created by Noah Honickman on 12/26/20.
//This program creates a struct using the "new" keyword and prints out the contents. 

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct pizza {
    string name;
    int diameter;
    int weight;
    
};
int main() {
     pizza *first = new pizza{};
    cout << "Enter the diameter for the pizza: ";
    cin >> first->diameter;
    cout<< "\n";
    cout<< "Enter the name for the pizza: ";
    cin >> first->name;
    cout << "\n";
    cout << "Enter the weight for the pizza: ";
    cin >> first->weight;
    cout << "\n";
    cout << " The diameter is " << first->diameter << ".\n";
    cout << "The name is " << first->name << ".\n";
    cout << "The weight is " << first->weight << ".\n";

    
    
    return 0;
}
