#ifndef STATIC_H
#define STATIC_H
#include <iostream>
using namespace std;

class StaticList{
    private:
        int *arr;
    public:
        StaticList(int n){
            arr = new int[n];
        }
        StaticList();

        // insert
        void insertNum(int i, int data){
            arr[i] = data;
        }

        // delete
        void deleteIndex(int i){
            // set the value to 0
            arr[i] = 0;
        }

        // search
        void searchNum(int num){
            for(int i = 0; i < sizeof(arr); i++){
                if(arr[i] == num){
                    cout << num << " found in index " << i << endl;
                    break;
                }
                if(arr[i]!= num && i == sizeof(arr)-1){
                    cout << num << " can't be found in this array." << endl;
                }
            }
        }

        // print
        void printArr(int n){
            for(int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        
};

#endif