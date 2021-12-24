#include <iostream>
#include <string>
#include <sstream>

void TestPrint(const std::string& str)
{
	const char* pStr{ str.c_str() };

	std::cout << strlen(pStr) << " : " << str.length() << " : " << pStr << std::endl;
}

int main()
{
	//int number{ 123 };
	//std::string str{};

	//str = std::to_string(number);

	//number = std::stoi(str);

	//std::cout << str << " : " << number << std::endl;

	// wide character literal
	wchar_t ch = L'가';
	
	std::wstring str = L"가나다";
	std::wcout << str.length() << " : " << str << std::endl;

	//std::string str{ "가나다" };
	//TestPrint(str);

	std::ostringstream oss;

	oss << "Hello" << "World" << 10 << 10.1f << std::endl;
	std::cout << oss.str() << std::endl;

	int myInt{ 123 };
	float myFloat{ 3.141592f };
	bool myBool{ true };

	std::cout << myBool << std::endl;
	std::cout << std::boolalpha << myBool << std::endl;
	std::cout << false << std::endl;
	std::cout << std::noboolalpha << std::endl;

	std::cout << std::dec << myInt << std::endl;
	std::cout << std::hex << myInt << std::endl;
	std::cout << std::oct << myInt << std::endl;

	std::cout.precision(3);
	std::cout << myFloat << std::endl;

	std::cout.width(10);
	std::cout << std::dec << myInt << std::endl;

	std::cout.fill('0');
	std::cout.width(10);
	std::cout << myInt << std::endl;
}