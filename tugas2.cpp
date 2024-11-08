#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string Nama[10];
    float Komisi[10],Penjualan[10],TotalKomisi=0;
    int i,JmlhSales=10;

    cout << "Input Penjualan Sales" << endl;
    cout << setprecision(12);
	cout << "========================================="<<endl;
    for (i = 0; i < JmlhSales; i++) {
        cout << "Data Salesman ke -" << i + 1 << endl;
        cout << "Masukan Nama Salesman : ";
        cin >> Nama;
        cout << "Penjualan Salesman : ";
        cin >> Penjualan;
    cout << "========================================="<<endl;    
        if(Penjualan < 500000){
        	Komisi = Penjualan[i] * 0.1;
		}else{
			Komisi = 500000 * 0.1;
            Komisi[i] += (Penjualan - 500000) * 0.15;
             cout<<endl<<"-------------------------------------"<<endl<<endl;
		}
			TotalKomisi += Komisi[i];
		}
		cout<<"Total komisi yang dibayarkan oleh PT. MURAH HATI adalah: "<< TotalKomisi<< endl;
    return 0;
}
