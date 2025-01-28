#include<iostream> 
#include<Windows.h>
#include<iomanip> 

using std::cout;
using std::setfill;
using std::setw;

using WHOLE_NUMBER = int;
using DECIMAL_NUMBER = float;



enum class TerminalColor {
	Red = 31,
	Green = 32,
	Yellow = 33,
	Blue = 34,
	Magenta = 35,
	Cyan = 36,
	White = 37,
	Default = 0
};

int main()
{

	cout << R"(
   _____            _________                    .__       .__       _____                 
  /     \ ___.__.  /   _____/_____   ____   ____ |__|____  |  |     /  _  \ ______ ______  
 /  \ /  <   |  |  \_____  \\____ \_/ __ \_/ ___\|  \__  \ |  |    /  /_\  \\____ \\____ \ 
/    Y    \___  |  /        \  |_> >  ___/\  \___|  |/ __ \|  |__ /    |    \  |_> >  |_> >
\____|__  / ____| /_______  /   __/ \___  >\___  >__(____  /____/ \____|__  /   __/|   __/ 
        \/\/              \/|__|        \/     \/        \/               \/|__|   |__|    
)";



	std::string noon = "12:00PM";
	std::string now = "6:54PM";

	cout << setw(7) << noon << "\n";
	cout << setw(7) << setfill('0') << now << "\n";

	int a = 23;
	WHOLE_NUMBER b = 12'345;
	cout.imbue(std::locale(""));


	cout << a << "\n";
	cout << b << "\n";

	cout << "\033[" << (int)(TerminalColor::Yellow) << "m";
	cout << __TIMESTAMP__ << "\n";
	cout << "\033[" << static_cast<int>(TerminalColor::Default) << "m";
	cout << "'Ro?\n";

	system("pause");

	Sleep(1'000);
	system("cls");

	cout << "\n\n\n1";
	Sleep(1'000);

	cout << "\n\n\n\t2";
	Sleep(1'000);

	cout << "\n\n\n\t3";
	Sleep(1'000);


	//wcout << "\U1F495" << "\n"

	system("chcp 65001");

	std::locale::global(std::locale("en_US.UTF-8"));
	std::wcout.imbue(std::locale());

	std::wcout << L"こんにちは世界\n"; //ko-nee-chee-wa, se-kai
	std::wcout << L"नमस्ते, संसार\n"; //namaste, sansara 
	std::cout << "Hello World!\n";

	return 0;
}