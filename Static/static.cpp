#include "static.h"
#include <iostream>
using namespace std;


int main(){
    int size;
    cout << "Enter array size: ";
    cin >> size;

    StaticList grade(size);
    for(int i = 0; i < size; i++){
        int data;
        cout << "Enter data for index " << i << " : ";
        cin >> data;
        grade.insertNum(i,data);
    }

    grade.printArr(size);
    grade.deleteIndex(2);
    grade.printArr(size);
    grade.searchNum(5);
    grade.printArr(size);
    
}