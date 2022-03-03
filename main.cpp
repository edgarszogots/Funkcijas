#include <iostream>
using namespace std;
int process (int x, int y, int & max, double & avg) 
{
 avg = x/2.0+y/2.0;  
if (x > y) {
max = x;
  return max - y;
}	
else {
max = y;
 return max - x; 
} 
 main
}
int main() {
	int a,b,liel;
	double vid;
	cout << "Ievadiet skaitļus:\n";
	cin >> a >> b;
	int diff=process(a,b,liel,vid);
	cout << "Lielākais: "
		<< liel << endl;
	cout << "Vidējais: "
		<< vid	<< endl;
	cout << "Starpība: "
		<< diff << endl;
	return 0;
}
