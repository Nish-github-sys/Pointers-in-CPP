//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-9

//Program-1
#include<iostream>
using namespace std;

int main(){

    int a=20;
    int* aptr;
    aptr=&a;

    float b=20.2;
    float* bptr;
    bptr=&b;

    double c=20.2;
    double* cptr;
    cptr=&c;

    bool d=true;
    bool* dptr;
    dptr=&d;

    cout<<"-->Before Incrementing:"<<endl;
    cout<<"int ptr: "<<aptr<<endl;
    cout<<"float ptr: "<<bptr<<endl;
    cout<<"double ptr: "<<cptr<<endl;
    cout<<"bool ptr: "<<dptr<<endl;
    cout<<endl;

    cout<<"-->After Incrementing:"<<endl;

    aptr++;
    bptr++;
    cptr++;
    dptr++;

    cout<<"int ptr: "<<aptr<<endl;
    cout<<"float ptr: "<<bptr<<endl;
    cout<<"double ptr: "<<cptr<<endl;
    cout<<"bool ptr: "<<dptr<<endl;

    return 0;
}