#include "dynamic.h"
#include <iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter list size: ";
    cin >> size;

    DynamicList grade(size);
    grade.checkEmpty();
    grade.count();
    grade.deleteAtIndex(3);
    grade.replaceIndex(3,46);
    grade.insertAtIndex(2,521);
    grade.searchData(46);
    grade.printList();
}