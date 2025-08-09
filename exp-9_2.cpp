//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-9

//Program-2
#include<iostream>
using namespace std;

int main(){

    int arr[5]={10, 20, 30, 40, 50};

    int* p1=&arr[2];
    int* p2=&arr[4];

    int diff;

    diff=*p2-*p1;

    cout<<"Difference between two selected pointers is: "<<diff;

    return 0;
}