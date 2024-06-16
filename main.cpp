#include <iostream>
using namespace std;

int main ()
{
	//DEKLARASI
	int nilai[5] = {20,50,60,10,100};
	nilai[0] = 65;
	
	for(int i=0;i<5;i++){
		cout << nilai[i] << endl;
	}
}
