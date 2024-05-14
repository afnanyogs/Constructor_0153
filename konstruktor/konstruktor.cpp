#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	int nim;
	string nama;
public:
	mahasiswa() {
		nim = 0;
		nama = "";
	}
	mahasiswa(int iNim) {
		nim = iNim;
	}
	mahasiswa(string);
	mahasiswa(int iNim, string iNama);
	void cetak();
};



mahasiswa::mahasiswa(string iNama) {
	nim = 0;
	nama = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama) {
	nim = iNim;
	nama = iNama;
}

void mahasiswa::cetak() {
	cout << endl << "Nim =" << nim << endl;
	cout << "Nama = " << nama << endl;
}



int main() {
	mahasiswa mhs1;
	mahasiswa mhs2(153);
	mahasiswa mhs3("Yogi");
	mahasiswa mhs4(153, "Yogi");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();


	return 0;
}