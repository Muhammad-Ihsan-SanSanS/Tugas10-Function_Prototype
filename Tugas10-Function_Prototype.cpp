#include <iostream>
using namespace std;

void Perkalian ( int m, int n ) {
	cout << ( m * n );
	}
void Pembagian ( int o, int p ) {
	cout << ( o / p );
	}
void Penjumlahan ( int q, int r ) {
	cout << ( q + r );
	}
void Pengurangan ( int s, int t ) {
	cout << ( s - t );
	}
	
int main () {
	cout << "Fungsi  hasil  Perkalian  26x11  = ";
	Perkalian (26,11);
	cout << endl;
	cout << "Fungsi  hasil  Pembagian  20:10  = ";
	Pembagian (20,10);
	cout << endl;
	cout << "Fungsi hasil Penjumlahan 2000+11 = ";
	Penjumlahan (2000,11);
	cout << endl;
	cout << "Fungsi hasil Pengurangan 2000-26 = ";
	Pengurangan (2000,26);
	cout << endl;
	
	return 0;	
}
