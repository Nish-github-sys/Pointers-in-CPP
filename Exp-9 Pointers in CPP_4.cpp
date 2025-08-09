//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-9

//Program-4
#include<iostream>
using namespace std;

int main(){

    string str1="";

    cout<<"Enter the String: ";
    cin>>str1;

    string* str_ptr=&str1;

    cout<<"Entered String is: "<<*str_ptr;

    return 0;
}


/*==========OUTPUTS==========
Enter the String: Nishka
Entered String is: Nishka
*/
