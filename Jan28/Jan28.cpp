// Jan28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 


using std::cout; 
using std::string; 
using std::cin; 
using std::getline; 

int main()
{
    //std::cout << "Hello World!\n";

    //Let's get into char, int, float, string, cin, and some other stuff after 15 minute break...

    //char characterArray[10] = "asdfasdf"; //actually also a pointer "in disguise" 
    //const char* name = "asfdasdfadsfasdf"; //a POINTER
    
    //Let's write a program that asks a user for their name and "echos" it back at them
    
    //prompt the user: 
    cout << "Enter your name:\n";//cout stands for character output 
    //get input from the keyboard: 
    //cin >> //cin stands for "character input" 

    string name; 
    getline(cin, name); 

    cout << "Hello, " << name << "\n";

    cout << "How much did your shoes cost - cuz they are neat, and I want some\n";
    string shoeCost; //camelCase, snake_case
    getline(cin, shoeCost);

    cout << "Confirming that your shoes cost: " << shoeCost << "\n";

    cout << "\n\nSo, TEN pairs of those shoes will cost: $" << std::stof(shoeCost) * 10 << "\n";


    float costOf10Shoes = std::stof(shoeCost) * 10;


    cout << "Another way to print that same result: " << costOf10Shoes << "\n";
    //stof -> stands for convert string to float \ 

    //while (true)
    //{
    //    cout << "\a"; //the Windows "alert" sound
    //}

    //string name;  
}
