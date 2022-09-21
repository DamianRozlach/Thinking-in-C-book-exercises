#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream in("FirstFile.txt");
    string s;
    int counter = 0;
    while(in >> s){
        counter++;
    }
    cout << "plik ma " << counter << " slow";
}