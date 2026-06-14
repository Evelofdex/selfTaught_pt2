#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    //buat sama buka file, atau cuman buka file, tapi klo gk ada langsung dibuatkan
    //atau buat objek ofstream, sebagai tumpuan test.txt
    ofstream file("test.txt");

    //nulis kedalam file
    file << "testing masukin teks, line pertama";
    file << "\nMasuk ke line selanjutnya dengan n"; 
    
    //buat close file
    file.close();
    

    // ## file untuk input sama baca dipisah jadinya

    
    //buat untuk membaca file
    ifstream bacaFile;
    bacaFile.open("test.txt");

    //output teks file
    string text;
    while (getline(bacaFile, text)){
        cout << text << endl; // pake endl buat per baris newline
    }
    // buat close file yg baca
    bacaFile.close();
}









