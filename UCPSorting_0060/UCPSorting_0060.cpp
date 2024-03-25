// UCPSorting_0060.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 1.Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen.?
// 2.Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar elemen-elemen.
// 3.Dalam algorithma sortir, jika data sudah ada beberapa yang berutan, maka algorithma mana yang harus dipilih? Jelaskan mengapa.
//4.Konversi Algorithma berikut kedalam C++:
//	Repeat steps 2 and 3 varying j from 0 to n – 2
//ind the minimum value in arr[j] to arr[n – 1]:
//t min_index = j
//peat step c varying i from j + 1 to n – 1
// .If arr[i] < arr[min_index] :
// 	i.min_index = i
// 3.	Swap arr[j] with arr[min_index]
// 	Ketentuan :
// 	a.Nama variable array diganti menjadi nickname
// 	b.Panjangnya variable array adalah sebanyak 2 nim belakang
// 	c.Program bisa input data dan menampilkan data setelah proses sortir.

// jawaban
// 1.dengan membandingkan elemen yg di setorkan ke index 0
//2.dengan memilih jarak antara elemen di sebuah kelompok supaya di kombinasikan 
// ke dalam multiple sublists
//3. insertionsort
//4.

#include <iostream>
#include <string>
using namespace std;

int arr[60]; // Deklarasi variabel global array a dengan ukuran 60
int n;// Deklarasi variabel global n untuk menyimpan banyaknya elemen array 

void input() {	//procedur untuk input

	while (true) {
		cout << "Masukan banyaknya elemen pada array : "; //output ke layar
		cin >> n;	//input dari pengguna
		if (n <= 60) // jika n kurang dari atau sama dengan 60
			break;	//keluar dari loop
		else {		// jika n lebih dari 60
			cout << "\nArray dapat mempunyai maksimal 60 elemen. \n"; // output ke layar
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {  // Looping dengan i dimulai dari 0 hingga n-1
		cout << "data ke-" << (i + 1) << ": "; //Output ke layar
		cin >> arr[i];				//output dari pengguna

	}
}

void bubbleSortArray() { // procedur untuk mengurutkan array dnegan metode bubble sort
	int pass = 1; // step 1

	do {
		for (int j = 0; j <= n - 1 - pass; j++) { //step 2
			if (arr[j] > arr[j + 1]) { // step 3
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
		pass = pass + 1; //step 4

		cout << "\nPass" << pass - 1 << ": "; // number of pass
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";	// Menampilkan data pada number off pass

		}
		cout << endl;
	} while (pass <= n - 1);  //step 5

}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j]; // menampilkan array
		if (j < n - 1) {
			cout << " -->";
		}
	}
	cout << endl;
	cout << endl;

	cout << " jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
	cout << endl;
	cout << endl;

}
