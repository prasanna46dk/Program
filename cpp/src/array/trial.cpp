#include<iostream>

int fun ()
{
	throw "not a directory";
	}
int main ()
{
	try {

		fun();
		}catch (){
				std::cout << "Hi\n";
			}
	
	}
