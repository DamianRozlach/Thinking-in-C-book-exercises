#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){
    ifstream in("FirstFile.txt");
    string line;
    vector<string> vec;
    while (getline(in,line))
    {
        vec.push_back(line);
    }
    for(int i = 0;i<vec.size();i++){
        cout << i << ": " << vec[vec.size() -1 - i] << endl;
    }
    
}