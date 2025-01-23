#include "iostream"
using std::cout;

int main()
{
    /*
    const int dozen = 12;
    int PI = 3.14; // the .14 will get "truncated" (not rounded)
    float pi = 3.14;
    cout << "float version of pi is: " << pi << "\n";
    cout << "PI is : " << PI << "\n";

    int some_number = 420; // snake_case, camelCase
    cout << "some_number is: " << some_number << "\n";
    */

//    cout << R"(___________                        _________                      __  .__    .__                 
//\__    ___/ __| _/______   ____ / _____/ ____   _____   _____/  |_|  |__ |__| ____    ____  
//  |    |  \   __\ \____ \_/ __ \\_____  \\_  __ \ /  _ \ /     \   __\  |  \|  |/    \  / ___\ 
//  |    |   |  |  |  |_> >  ___/ /        \|  | \/(  <_> )  Y Y  \  | |   Y  \  |   |  \/ /_/  >
//  |____|   |__|  |   __/ \___  >_______  /|__|    \____/|__|_|  /__| |___|  /__|___|  /\___  / 
//                 |__|        \/        \/                     \/          \/        \//_____/ )";

    std::string normalString = "This is a \"normal\" string with \\ escape sequences.";
    std::string rawString = R"(This is a "raw" string with \ no escape sequences.)";

    cout << normalString << "\n";
    cout << rawString << "\n";

    return 0;
}
