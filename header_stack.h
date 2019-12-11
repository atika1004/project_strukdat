#include <iostream>
#include <conio.h>
using namespace std;
#define MAX 8

struct Stack {
	private :
		int data = -1;
		int A[MAX];
		
	public :
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
		
		void push (int inputData) {
			if (isFull())
				cout << "Peserta Sudah Penuh" << endl;
			else {
				data++;
				for (int i = data; i >= 0; i--) {
					A[i] = A[i-1];
				}
				A[0] = inputData;
				cout << "Peserta dengan id " << inputData << " telah terdaftar" << endl << endl;
				getch();
				system("cls");
			}
		}
		
		void pop () {
			if (isEmpty())
				cout << "Belum ada pendaftar" << endl;
			else {
				cout << "Peserta dengan id " << A[0] << " telah keluar" << endl << endl;
				
				for (int i = 0; i <= data; i++) {
					A[i] = A[i+1];
				}
				data--;
				getch();
				system("cls");
			}
		}
		

		
		void display() {
			if (isEmpty()) {
				cout << "Total Peserta = 0" << endl;
				cout << " ID Peserta  = Kosong" << endl;
			} else {
				cout << "Total Peserta = " << data + 1 << endl;
				cout << "ID Peserta  ";
//				for (int i = 0; i <= data; i++)
//				cout << A[i]<<" ,";	
				cout<<"\n============================="<<endl;
				for (int i = 0; i <= data; i++)
					cout << A[i] << endl;
//						void selection();
				cout << endl << endl;;
			}
		}
		
};
