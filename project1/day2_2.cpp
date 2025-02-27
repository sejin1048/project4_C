#include <iostream>
#include <bitset>
using namespace std;

int main() {
	//int a = 10;
	//int b = 4;
	//cout << a + b;
	//a += 5;



	//int b = 0;
	//b++; //after
	//++b; //before
	//int c = b++; //(<result> before:3 plus->insert, after:2 ; insert->plus)
	//cout << c;

	//bit calculation
	//cout << (1 << 1) << endl;
	// &(and) at bit calculation we use only on &
	int a = 0b0101;
	int b = 0b1001;
	//cout << bitset<4>(a | b)<< endl; //bitset<4> means we will see 4bit for binary
	//cout << (a | b) << endl;

	// ^(xor)
	int c = 0b1010;
	int d = 0b1001;
	//cout << bitset<4>(c ^ d) << endl;
	//cout << (c ^ d) << endl;

	// shifting !!
	int e = 0b0001;
	cout << bitset<4>(e << 3) << endl;

	// particular bit add and delete  <- It is useful when we show the state of the game character
	int f = 0b1000; //we want to make 1010 -> use "or"operator with "0010" 
	//bit add
	cout << bitset<4>(f |= (1 << 1)) << endl;
	//bit delete 
	cout << bitset<4>(f &= ~(1 << 1)) << endl; // we can delete the bit that was moved

}