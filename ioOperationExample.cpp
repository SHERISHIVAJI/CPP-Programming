#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt");
    outFile << "Hello, this is a out file example for Input Output operations";
    outFile.close();

    ifstream inFile("example.txt");
    string content;
    getline(inFile, content);
    cout << content << endl;
    inFile.close();

    return 0;
}