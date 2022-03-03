#include <iostream>


using namespace std;
int process (int x, int y, int & max, double & avg) 
{
int starp;
avg = (x+y)/2;
if(x > y){
  max = x ;
    starp = x-y;
  }
  else {
    max = y;
    starp = y;
  }


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

