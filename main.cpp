#include <iostream>


using namespace std;
int process (int x, int y, int & max, double & avg) 
{
int starp;
avg = (x+y) / 2.0;
if (x>y){ 
  max = x;
  starp = x-y;
}
else if (y>x){ 
  max = y;
  starp = y-x;
} 
return starp;
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
