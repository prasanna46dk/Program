#include<iostream>
using namespace std;
int gcd (int, int);

void ArrayRotation(int *array, int rotationCount, int arrayLength)
{
	int i, j, k, temp;
	for (i = 0; i <= gcd(rotationCount,arrayLength); i++){
		temp = array[i]; 
		j = i;
		while (true){
			k = j + rotationCount;
			if (k >= arrayLength)
				k = k - arrayLength;
			if ( k == i)
				break;
			array[j] = array[k];
			j = k;
		}
		array [j] = temp;
	}
}

int gcd (int a, int b)
{
	if (b == 0)
		return a;
	else 
		gcd(b, a%b);
}

int main ()
{
	int array []= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	ArrayRotation(array, 7, 10);
	for (int i = 0; i < 10; i++)
		std::cout << array[i] << "\n";
}


