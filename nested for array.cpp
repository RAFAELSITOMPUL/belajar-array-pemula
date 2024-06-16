#include <iostream>
using namespace std;

int main(){
	
	int a[10][10];
	//tabel perkalian 1-10
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			a[i][j] = (i+1)*(j+1);
		}
	}
	
	cout << a[3][2];
	
}
