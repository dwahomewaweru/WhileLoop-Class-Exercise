// WhileLoop Class Exercise.cpp 
// Basic structure of a while loop

#include <iostream>
using namespace std;

int main() {
	// Declare and initialize variable
	int number = 20;
	int sum = 0;
	while (number<-25) {
		sum += number;
		number++;
	}
	cout << " Sum = " << sum;
	return 0;
}