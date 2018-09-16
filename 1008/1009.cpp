//
// Created by mazedul on 9/16/18.
//
#include <iostream>

using namespace std;

int main(){

    string name;
    double salary,sale,total;
    cin>>name;
    cin>>salary>>sale;
    total=(sale/100)*15;

    cout<<precision(2);
    cout<<"TOTAL = R$ "<<total<<endl;
}