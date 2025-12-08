#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream outputFile("output.txt");
    if(outputFile.is_open()) {
        outputFile << "Hello, File I/O\nThis is a first example output file";
        outputFile.close();
        cout << "File is written successfully!" << endl;
    } else {
        cout << "Failed to open the file";
    }

    return 0;
}