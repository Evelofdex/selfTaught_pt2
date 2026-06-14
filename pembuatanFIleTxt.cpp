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

    cout << "Masukan nama file: ";
    cin >> namaFile;

    ofstream inputFile("folderFileText\\" + namaFile + ".txt");


    // close gile
    inputFile.close();
}