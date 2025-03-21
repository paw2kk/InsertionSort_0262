#include <iostream>
using namespace std;

int arr[20]; //Membuat Array dengan panjang data 20
int n; //Membuat Variabel inputan n

void input(){ //Produce Input
    while (true)
{
    cout << "Masukkan Jumlah Data pada Array : "; //Membuat Inputan jumlah element Array
    cin >> n; //Memanggil variabel inputan n

    if (n <= 20)
    {//Membuat Kondisi n tidak lebih dari 20
        break;
    }
    else 
    {
        cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; //Menampilkan Pesan jika lebih dari 20
    }
}
cout << endl; //Membuat jarak per baris program
cout << "======================" << endl;
cout << "Masukkan Element Array" << endl;
cout << "======================" << endl;

for (int i = 0; i < n; i++) //Menggunakan perulangan for untuk menyimpan data pada array
{
    cout << "Data ke-" << (i + 1) <<":"; //Memasukkan atau menginput nilai data n
    cin >> arr[i]; //Menyimpan nilai data n kedalam array arr
}
}

void insertionSort(){
    int i, temp, j;
    for(i = 1; i <= n -1;i++)//Step 1
}