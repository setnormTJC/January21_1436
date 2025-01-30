// Jan28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 


using std::cout; 
using std::string; 
using std::cin; 
using std::getline; 

void demoReadingUserInputAndEchoingBackAtThem()
{
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
}

void demoANOTHERExampleOfReadingUserInput()
{
    cout << "Can I see past my OWN pain and acknowledge that of others?\n";

    string response; 

    getline(cin, response);

    cout << "Your response was: \n";
    cout << response << "\n"; //\n is an "escape sequence" which moves the terminal output text to the Next line
}

void demoReadingTWOLinesFromUser()
{
    cout << "Enter first sentence?\n";

    string response1;

    getline(cin, response1);

    cout << "Enter ANOTHER sentence: \n";

    string response2;
    getline(cin, response2);


    cout << "You entered the following two bits of text: \n";
    cout << response1 << "\n";
    cout << response2 << "\n";
}

void demoDataTypes()
{
    int someNumber = 420; 

    char someLetter = 'a';//error character data type expects SINGLE quotes '

    float someDecimalNumber = 2.718; //base of natural logarithm

    cout << "Some (whole) number is: " << someNumber << "\n";

    cout << "someLetter is: " << someLetter << "\n";

    cout << "Enter a NEW value for our decimal (fractional/nonwhole) number: \n";
    
    cin >> someDecimalNumber; //means character input

    cout << "You entered: " << someDecimalNumber << "\n";

    float someDecimalNumberMultipliedBy10 = someDecimalNumber * 10; 

    cout << "That number multiplied by 10 is: " << someDecimalNumberMultipliedBy10 << "\n";
}


int main()
{
    demoDataTypes(); 

    //demoANOTHERExampleOfReadingUserInput();  //calling a function!
    //demoReadingTWOLinesFromUser(); 

    

}
