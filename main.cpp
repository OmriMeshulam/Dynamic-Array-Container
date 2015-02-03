#include <iostream>
#include <string>
#include "arrayClass.h"
using namespace std;

int main(){

    array customArray1, customArray2; //creating 2 custom arrays
    customArray1[1]=1; // populating indexes in the arrays
    customArray1.sizerUpper(); //increase counted size of array
    customArray1[5]=24;
    customArray1.sizerUpper();
    customArray2+=5;
    customArray2+=6;

    cout << "customArray1 contents: " << customArray1[1] << ", " << customArray1[5]<<"\n"
        << "customArray2 contents: "<<customArray2[0]<<", "<<customArray2[1]<<endl;

    cout << "customArray1 and customArray2 are ";
    if(customArray2==customArray1)cout <<"equal"<<endl; //testing conditional operators
    if(customArray2!=customArray1)cout <<"not equal"<<endl;

    cout << "customArray1 size: " << customArray1.getSize() <<"\n"
        << "customArray2 size: " <<customArray2.getSize()<<endl;

    customArray2=customArray1; //testing assignment operator
    cout << "After setting customArray2=customArray1 the arrays are now ... ";
    if(customArray2==customArray1)cout <<"equal"<<endl;
    if(customArray2!=customArray1)cout <<"not equal"<<endl;
    return 0;
}
