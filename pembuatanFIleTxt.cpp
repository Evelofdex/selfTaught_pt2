#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class textFileMaker{
    private:
    string text;
    string namaFile;
    vector<string> listNamaFile;

    public:
    void setText(string t){ text = t; }

    void tambahFile(){
        cout << "Masukan nama file yg akan dibuat ntar(tanpa spasi)\n";
        cout << "-: ";
        cin >> namaFile;
        //cek nama file duplikat
        if (!listNamaFile.empty()){
            for (int i = 0; i <= listNamaFile.size(); i++){
                if (namaFile == listNamaFile.at(i)){
                    cout << "File dengan nama '" << listNamaFile.at(i) << "' sudah ada/dah dibuat sebelumnya\n";
                    cout << "Gunakan nama lain\n\n";
                    return;
                }
            }
        }
        //membuat file
        ofstream file("folderFileText\\" + namaFile + ".txt");
        //masukin nama file kedalam list
        listNamaFile.push_back(namaFile);
        cout << "text file dengan nama '" << namaFile << "' telah dibuat!\n";
        //di close, karna pembuatan file dah beres
        file.close();
    }
    void isiTeks(){

    }
    void outputText(){

    }
    void listFile(){

    }
};

int main(){
    char pilihan;
    textFileMaker m;

    do{
        cout << "\ntext file maker\n";
        cout << "======================================\n";
        cout << "1. tambah file\n";
        cout << "2. isi teks kedalam suatu file\n";
        cout << "3. output isi teks dalam suatu file\n";
        cout << "4. output isi teks dalam suatu file\n";
        cout << "5. Exit\n";
        cout << "======================================\n";
        cout << "pilihan: ";
        cin >> pilihan;
    
        switch (pilihan){
            case '1':
                m.tambahFile();
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                break;
            default:
                break;
        }
    } while (pilihan != '5');
}