#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;
 int main(){
    vector<float> vec;
    char buf[50];
    float f = 1.1;
    for(int i = 0;i<25;i++){
        vec.push_back(f*(i+1));
        sprintf(buf,"%05.2F",vec[i]);
        cout << buf << endl;
        vec[i]=vec[i]*vec[i];
    }
    cout << "Vec after change" << endl;
    for(int i = 0;i<25;i++){
        sprintf(buf,"%05.2F",vec[i]);
        cout << buf << endl;
    }
 }