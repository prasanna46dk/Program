#include<iostream>
#include<string>
int main() 
{
	std::string str = "How Are You?";
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 65 && str[i] <= 96)
			str[i] += 32;
		else if (str[i] >=97 && str[i] <= 122) 
			str[i] -= 32;
	}
         std::cout << str << "\n";
	 return 0;
}
