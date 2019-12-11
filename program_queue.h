#include <iostream>
#include <conio.h>
using namespace std;
#define MAX 5

struct Queue {
	private:
	int data = -1;
	int A[MAX];
	
	public:
	bool isEmpty() {
		if (data == -1)
			return true;
			
		return false;
	}
	
	bool isFull() {
		if (data >= 4)
			return true;
			
		return false;
	}
	
	void enqueue(int inputData) {
		if (isFull() == true) {
				cout << "!!!! Ruangan Telah Penuh. !!!!" << endl<<endl;
				getch ();
				system("cls");
		
		} else 	{
			
		data++;
			A[data] = inputData;
			cout << "Id Peserta  " << inputData << " telah masuk ke dalam ruangan " << endl;
		
			getch();
				system("cls");
	}
}
	
	void dequeue() {
		if (isEmpty()== true)
			cout << "Belum ada antrian" << endl;
		else {
			cout << "Peserta dengan id " << A[0] << " akan keluar." << endl;
			
			for (int i = 0; i <= data; i++) 
				A[i] = A[i+1];
				
			data--;
		getch();
		}
		
			system("cls");
	}
	
		
	void display() {
		if (isEmpty()) {
			cout << "Jumlah Peserta = 0" << endl;
			cout << "Peserta = Kosong" << endl;
		} else {
			cout << "Jumlah Peserta = " << data + 1 << endl;
			cout << "Data Id Peserta = ";
			for (int i = 0; i <= data; i++) {
				cout << A[i] << " ,";
			
			}
			cout<<endl;
			}
				
	}
}
;
