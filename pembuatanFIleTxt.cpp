#include <iostream>
#include <fstream>
using namespace std;

class textFileMaker{
    private:
    string text;

    public:

};

int main(){

    string namaFile;
    char pilihan;

    cout << "text file maker\n";
    cout << "======================================\n";
    cout << "1. tambah file\n";
    cout << "2. isi teks kedalam suatu file\n";
    cout << "3. output isi teks dalam suatu file\n";
    cout << "======================================\n";
    cout << "pilihan: ";
    cin >> pilihan;
    

    cout << "Masukan nama file: ";
    cin >> namaFile;

    ofstream inputFile("folderFileText\\" + namaFile + ".txt");


    // close gile
    inputFile.close();
}