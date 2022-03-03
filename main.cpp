#include <iostream>


using namespace std;
int process (int x, int y, int & max, double & avg) {
int starpiba;
avg =(x+y)/2;
if(x > y){
max = x;
  starpiba = x-y;
  }
  else{
    max = y;
    starpiba = y;
}
  return starpiba;
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
