#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream in("FirstFile.txt");
    string s;
    string searchedWord("File");
    int counter = 0;
    while(in >> s){
        if(s==searchedWord)
        counter++;
    }
    cout << "plik ma " << counter << " slow " << searchedWord;
}