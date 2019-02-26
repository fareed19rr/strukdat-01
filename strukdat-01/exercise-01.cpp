/*
Nama : Muhamad Farid Ridho Rambe
NPM : 140810180033
Nama Program : Fizz Buzz
Tanggal Buat : 26-02-2018
Deskripsi : Program akan mencetak angka dari 1-100. Untuk setiap angka yang bisa dibagi 3 maka program akan
			mencetak fizz.Untuk setiap angka yang bisa dibagi 5 maka program akan mencetak buzz.Jika angka
			bisa dibagi 3 dan 5, maka program akan mencetak FizzBuzz
*/
#include<iostream>
using namespace std;

void fizzbuzz(int batas){  //pendeklarasian fungsi void dan juga parameternya
	batas = 100; //pendeklarasian batas
	for(int i=1;i<=batas;i++){ //pendeklarasian pengulangan memakai fungsi for dengan variabel i sebagai parameter
		
		if(i%3==0 && i%5==0){ //kondisi pertama di mana jika angka bisa dibagi 3 dan 5 maka akan menjalankan perintah di bawah
			cout<<"FizzBuzz"<<endl; //akan menampilkan "Fizzbuzz" karena kondisi di atas terpenuhi
		}
		
		else if(i%3!=0 && i%5==0){ //kondisi kedua di mana jika angka hanya bisa dibagi 5 tetapi tidak bisa dibagi 3 maka akan menjalankan perintah di bawah
			cout<<"Buzz"<<endl; //akan menampilkan "Buzz" karena kondisi di atas terpenuhi
		}
		
		else if(i%3==0 && i%5!=0){ //kondisi ketiga di mana jika angka hanya bisa dibagi 3 tetapi tidak bisa dibagi 3 maka akan menjalankan perintah di bawah
			cout<<"Fizz"<<endl; //akan menampilkan "Fizz" karena kondisi di atas terpenuhi
		}
		
		else{ //kondisi terakhir jika kondisi-kondisi di atas tidak terpenuhi, akan menjalankan perintah di bawah
			cout<<i<<endl; //akan menampilkan angka dari 1-100 yang tidak bisa dibagi 3, dibagi 5, ataupun dibagi 3 dan 5
		}
	}
}

int main(){ //pendeklarasian fungsi utama
	int batas; //pendeklarsian batas
	fizzbuzz(batas); //pemanggilan fungsi FizzBuzz
}
