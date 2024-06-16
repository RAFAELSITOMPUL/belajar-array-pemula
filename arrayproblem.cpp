#include <iostream>
using namespace std;

int main ()
{
	int jumlah_sepuluh;
	int a[10];
	for(int i=0;i<10;i++){
		cin >> a[i];
		if(a[i]>10) jumlah_sepuluh++;
	}
	cout << "Banyaknya = " << jumlah_sepuluh;
}
