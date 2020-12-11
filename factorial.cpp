#include <iostream>
#include <time.h>
using namespace std;

//class Factorial
class Factorial {

//public methods
public:

//recursive method
	long long int recursiveFactorial(int n) {
		if (n == 0 || n == 1) {
			return 1;
		}
		return recursiveFactorial(n - 1) * n;
	}

//iterative method
	long long int iterativeFactorial(int n) {
		long long int factorial = 1;
		for (int i = 1; i <= n; i++) {
			factorial *= i;
		}
		return factorial;
	}
};
