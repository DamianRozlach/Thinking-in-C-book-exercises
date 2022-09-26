#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;
 int main(){
    vector<float> vec1;
    vector<float> vec2;
    vector<float> vec3;
    char buf[50];
    float f = 1.1;
    for(int i = 0;i<25;i++){
        vec1.push_back(f*(i+1));
        vec2.push_back(3*f*(i+1)*(2*i));
        vec3.push_back(vec1[i]+vec2[i]);
    }
    cout << "\nVec1: \n";
    for(int i = 0;i<25;i++){
        sprintf(buf,"%05.2F",vec1[i]);
        cout << i << ": " << buf << endl;
    }
    cout << "\nVec2: \n";
    for(int i = 0;i<25;i++){
        sprintf(buf,"%05.2F",vec2[i]);
        cout << i << ": " << buf << endl;
    }
    cout << "\nVec3: \n";
    for(int i = 0;i<25;i++){
        sprintf(buf,"%05.2F",vec3[i]);
        cout << i << ": " << buf << endl;
    }
 }