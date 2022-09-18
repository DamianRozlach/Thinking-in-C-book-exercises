#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream in("FirstFile.txt");
    ofstream out("SecondFile.txt");
    string s;
    while(getline(in,s)){
        out<<s<<"\n";
    }

}

