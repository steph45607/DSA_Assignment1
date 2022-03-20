#ifndef DYNAMIC_H
#define DYNAMIC_H
#include <iostream>
using namespace std;

class DynamicList{
    private:
        int* arr;
        int size;
        int last;

    public:
        DynamicList(int n){
            size = n;
            arr = new int[size];
            last = -1;
        }
        checkEmpty(){
            if(last == -1){
                return true;
            }
            return false;
        }
        
};


#endif