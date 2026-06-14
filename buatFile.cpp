#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //buat sama buka file
    ofstream file("test.txt");

    //nulis kedalam file
    file << "testing masukin teks, line pertama";
    file << "\nMasuk ke line selanjutnya dengan n"; 

    //buat close file
    file.close();

}









