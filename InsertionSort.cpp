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
    for(i = 1; i <= n -1;i++){//Step 1
    temp = arr[i]; //Step 2
    j = i - 1;//Step 3
    while (j >= 0 && arr[j] > temp ){
        arr[j + 1] = arr [j]; //Step 4a
        j--;//Step4b
    }
    arr[j] = temp;//Step 5
}
}

void display(){
    cout << endl;//Output baris Kosong
    cout << "=================================" << endl;
    cout << "Total Passs = " << n - 1 << endl; //Count element movement
    cout << "=================================" << endl; //Output ke layar
    cout << "Element Array yang telah tersusun" << endl; //Output ke layar
    cout << "=================================" << endl; //Output ke layar
for (int j = 0; j < n; j++){//Looping dengan j dimulai dari 0 hingga n-1
    cout << arr[j] << endl;//Output ke layar
}
cout<< endl; //Output baris kosong
}


int main(){
    input();
    insertionSort();
    display();
    system("Pause");
    return 0;
}
