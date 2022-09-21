#include<iostream>
#include<cmath>
using namespace std;

double circleSurface(double radius);

int main(){
    double radius;
    cout << "Podaj promien kola\n";
    cin >> radius;
    cout << "Powierzchania koła wynosi\n";
    cout << circleSurface(radius);
}

double circleSurface(double radius){
    return 3.14*pow(radius,2);
}