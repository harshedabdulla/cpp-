#include<iostream>
using namespace std;
int main(){
    float number, sum=0.0;
    do{
        cout<<"Enter a number: ";
        cin>>number;
        sum += number;
    }while(number != 0);
    cout<<"The sum till now is "<<sum;
    return 0;
}