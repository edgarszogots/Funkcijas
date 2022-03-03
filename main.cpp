#include <iostream>


using namespace std;
int process (int x, int y, int & max, double & avg) 
{
int starpiiba;
avg = (x+y)/2,0;
if(x > y){
  max = x;
    starpiiba = x-y;
  }
  else {
    max = y;
    starpiiba = y-x;
  }
  return starpiiba;
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
