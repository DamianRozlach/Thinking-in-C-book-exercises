#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int main(){
    ifstream in("FirstFile.txt");
    string line;
    vector<string> v;
    while(getline(in,line)){
        v.push_back(line + "\n");
    }
    string oline;
    for(int i=0;i<v.size();i++){
        oline+=v[i];
    }
    cout << oline;
}