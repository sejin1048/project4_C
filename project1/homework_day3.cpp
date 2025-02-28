#include <iostream>
#include <bitset>
using namespace std;

int main() {
	//Q1.
	int num1;
	num1 = 0b00010010;
	cout << "Q1. result: " << bitset<8>(num1|=(1<<5)) << endl;

	//Q2.
	int num2;
	num2 = 0b10101111;
	cout << "Q2. result: " << bitset<8>(num2 &= ~(1 << 2)) << endl;

	//Q3.
	int num3;
	num3 = 0b11011010;
	cout << "Q3. result: " << bitset<8>(num3 ^= (1 << 4)) << endl;

	//Q4.
	int num4;
	cout << "Q4. please put any number: ";
	cin >> num4;
	bitset<8>(num4 &= (1 << 4));
	//bool isSet = (num4 & (1 << 4)); <- if we use it, we should not use bitset<8> and use "isSet" at ouput! "isSet" is random elements 
	if (num4 != 0) {
		cout << "-> Q4.extracted number: "<< 1 << endl;
	}
	else {
		cout << "-> Q4.extracted number: "<< 0 << endl;
	}

	////Q5.
	//int num5;
	//cout << "Q5. please put any number: ";
	//cin >> num5;
	//bitset<8>(num5 & 1);

	//if (num5 != 0) {
	//	cout << "-> Q5. <number:"<< num5 << "> is odd number" << endl;
	//}
	//else {
	//	cout << "-> Q5. <number:" << num5 << "> is even number" << endl;
	//}

	//Q5.sol2
	int num5;
	cout << "Q5. please put any number: ";
	cin >> num5;
	bool isOdd = num5 & 1;
	cout << "->Q5. result:" << (isOdd ? "odd" : "even") << endl;

	//Q6.
	int num6;
	cout << "Q6. please put any number: ";
	cin >> num6;
	bool isPowerOfTwo = num6 & (num6 - 1); // if the result is 0 -> it is PowerOfTwo => it means False.
	cout << "->Q6. result:" << (isPowerOfTwo ? "nope" : "PowerOfTwo") << endl; // <How to use Ternary operator> random Element ? "True":"False"

}



//int num3 = 0b11011010;
// num3 ^= (1<<4);