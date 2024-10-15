#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c; 
	// leer datos
	cin >> a >> b >> c;
	// x1
	cout << "x1: " << (-b+ sqrt(b*b - 4*a*c)) / (2*a) << "\n";
	// x2
	cout << "x2: " << (-b-sqrt(b*b-4*a*c))/(2*a) << "\n";
	return 0;
}
