

#include <iostream>
using namespace std;

int n;
int aulia[6];

void input() {      

	while (true) {
		cout << "Masukan banyaknya elemen pada array : ";     
		cin >> n;       
		if (n <= 6)    
			break;      
		else {          
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";  
		}
	}

	cout << endl;                                 
	cout << "=======================" << endl;              
	cout << "Masukan Elemen Array" << endl;       
	cout << "=======================" << endl;    

	for (int i = 0; i < n; i++) {         
		cout << "Data ke-" << (i + 1) << ": ";   
		cin >> aulia[i];   
	}

}


void selectionSort() {

	for (int j = 0; j <= n - 2; j++) {
		int min = j;
		for (int i = j + 1; i <= n - 1; i++) {
			if (aulia[i] < aulia[min]) {
				min = i;

			}
		}
		if (min != j) {
			int temp = aulia[j];
			aulia[j] = aulia[min];
			aulia[min] = temp;
		}
	}
}

void display() {
	cout << endl;
	cout << "=================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << aulia[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;

}

int main() {
	input(); 
	selectionSort();  
	display();  
	return 0;
}


//INSERTION SORT
// dengan cara membagi data menjadi dua bagian yaitu sorted list
// dan unsorted list. kemudian data diurutkan sesuai dengan data yang tepat


//SELECTION SORT
// dengan cara melihat data paling kecil pertama menuju data paling kecil terakhir
// kemudian melakukan scanning secara berulang. data paling kecil
// dilakukan dari sebelah kiri ke kanan


//ALGORITMA SORTIR
// yaitu dengan cara mengurutkan data yang disimpan diwadah tertentu dalam struktur
// data yang kemudian disusun menjadi urut. semakin banyak kita melakukan pass
// maka kita akan mengetahui berapa jumlah langkah yang dilakukan di dalam suatu algoritma
