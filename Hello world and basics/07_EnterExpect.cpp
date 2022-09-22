#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<cstring>

using namespace std;

int main(){
    ifstream in("FirstFile.txt");
    vector<string> v;
    string s;
    char c[5];
    while(getline(in,s)){
        v.push_back(s);
    }
    strcpy(c,"\n");
    for(int i = 0;i<v.size();i++){
        cout << v[i]<<endl<<"Press enter";
        
        while ((char)cin.get()!=c[0])
        {
            /* code */
            if(true){};
        }
        
    }

    cout << "end of program";
}