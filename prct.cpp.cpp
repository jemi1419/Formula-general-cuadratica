#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c; 
	cin >> a >> b >> c;
	cout << "x1: " << (-b+ sqrt(b*b - 4*a*c)) / (2*a) << "\n";
	cout << "x2: " << (-b-sqrt(b*b-4*a*c))/(2*a) << "\n";
	return 0;
}
