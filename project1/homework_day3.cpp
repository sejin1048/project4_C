#include <iostream>
#include <bitset>
using namespace std;

int main() {
	////Q1.
	//int num1;
	//num1 = 0b00010010;
	//cout << "Q1. result: " << bitset<8>(num1|=(1<<5)) << endl;

	////Q2.
	//int num2;
	//num2 = 0b10101111;
	//cout << "Q2. result: " << bitset<8>(num2 &= ~(1 << 2)) << endl;

	////Q3.
	//int num3;
	//num3 = 0b11011010;
	//cout << "Q3. result: " << bitset<8>(num3 ^= (1 << 4)) << endl;

	////Q4.
	//int num4;
	//cout << "Q4. please put any number: ";
	//cin >> num4;
	//bitset<8>(num4 &= (1 << 4));
	////bool isSet = (num4 & (1 << 4)); <- if we use it, we should not use bitset<8> and use "isSet" at ouput! "isSet" is random elements 
	//if (num4 != 0) {
	//	cout << "-> Q4.extracted number: "<< 1 << endl;
	//}
	//else {
	//	cout << "-> Q4.extracted number: "<< 0 << endl;
	//}

	//////Q5.
	////int num5;
	////cout << "Q5. please put any number: ";
	////cin >> num5;
	////bitset<8>(num5 & 1);

	////if (num5 != 0) {
	////	cout << "-> Q5. <number:"<< num5 << "> is odd number" << endl;
	////}
	////else {
	////	cout << "-> Q5. <number:" << num5 << "> is even number" << endl;
	////}

	////Q5.sol2
	//int num5;
	//cout << "Q5. please put any number: ";
	//cin >> num5;
	//bool isOdd = num5 & 1;
	//cout << "->Q5. result:" << (isOdd ? "odd" : "even") << endl;

	////Q6.
	//int num6;
	//cout << "Q6. please put any number: ";
	//cin >> num6;
	//bool isPowerOfTwo = num6 & (num6 - 1); // if the result is 0 -> it is PowerOfTwo => it means False.
	//cout << "->Q6. result:" << (isPowerOfTwo ? "nope" : "PowerOfTwo") << endl; // <How to use Ternary operator> random Element ? "True":"False"

	////switch
	//int myInput;
	//cin >> myInput;

	//switch (myInput) {
	//	case 1:
	//		cout << "it is 1" << endl;
	//		break;
	//	case 2:

	//		cout << "it is 2" << endl;
	//		break;	
	//	default:
	//		cout << "etc" << endl;
//}
	////ternary operator
	//int myInput;
	//cin >> myInput;

	//bool isBigger = myInput > 10;
	//// if conditional sentence ? is True : operate , False : operate
	////isBigger ? (cout << "is bigger") : (cout << "is smaller");
	//cout << (isBigger ? "is bigger" : "is smaller") << endl;

	////if conditional senctence exercise1)
	//int age;
	//cout << "------exercise1------" << endl;
	//cout << "please put your age : ";
	//cin >> age;

	//if (age >= 200) {
	//	cout << "you are too old!" << endl;
	//}
	//else if (age >= 20) {
	//	cout << "adult" << endl;
	//}
	//else if (age >= 17) {
	//	cout << "highschool student" << endl;
	//}
	//else if (age >= 14) {
	//	cout << "middleschool student" << endl;
	//}
	//else if (age >= 8) {
	//	cout << "elementary schoolchild" << endl;
	//}

	//else if (age >= 1) {
	//	cout << "preschooler" << endl;
	//}
	//else {
	//	cout << "it is unusual number" << endl;
	//}

	////if conditional senctence exercise2)
	//string name;
	//cout << "------exercise2------" << endl;
	//cout << "please put your name : ";
	//cin >> name;

	//if (name == "honggildong") {
	//	cout << "male" << endl;
	//}
	//else if (name == "seongchoonhyang") {
	//	cout << "female" << endl;
	//}
	//else {
	//	"I don't know your gender";
	//}

//	//ternary operator exercise3)
//	int num;
//	cout << "------exercise3------" << endl;
//	cout << "please put number : ";
//	cin >> num;
//	bool test = (num % 5 == 0);
//	cout << num <<(test ? "is multiple of 5" : " is 'not' multiple of 5") << endl;

	//switch exersice4)
	int num1, num2;
	char op;
	cout << "------exercise4------" << endl;
	cout << "Please enter two integers to calculate : "; 
	cin >> num1 >> num2;
	cout << "Please enter the operator(+ - * /) : ";
	cin >> op;
	
	switch (op) {
		case '+':
			cout << "**** result of calculate ---> " << num1 + num2 << endl;
			break;
		case '-':
			cout << "**** result of calculate ---> " << num1 - num2 << endl;
			break;
		case '*':
			cout << "**** result of calculate ---> " << num1 * num2 << endl;
			break;
		case '/':
			if (num2 != 0) {
				cout << "**** result of calculate ---> " << "share :" << num1 / num2 << " rest :" << num1 % num2 << endl;
			}
			else {
				cout << "we can't operate!" << endl;
			}
			break;
		default:
			cout << "it is not an operator" << endl;
	}

	




}





//int num3 = 0b11011010;
// num3 ^= (1<<4);