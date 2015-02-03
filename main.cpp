#include <iostream>
#include <string>
#include "arrayClass.h"
using namespace std;

int main(){

    array myarray, array2;
    myarray[1]=1;
    myarray.sizerUpper();
    myarray[5]=24;
    myarray.sizerUpper();
    array2+=5;
    array2+=6;
    cout << myarray[1] << ", " << array2[5]<<" "<<array2[0]<<" "<<array2[1]<<endl;
    if(array2==myarray)cout <<"equal"<<endl;
    if(array2!=myarray)cout <<"not equal"<<endl;
    cout <<myarray.getSize() <<" "<<array2.getSize()<<endl;
    array2=myarray;
    if(array2==myarray)cout <<"equal"<<endl;
    if(array2!=myarray)cout <<"not equal"<<endl;
    return 0;
}
