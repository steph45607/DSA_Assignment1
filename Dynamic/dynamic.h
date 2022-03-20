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
        void checkEmpty(){
            if(last == -1){
                cout << "List is empty" << endl;
            }
            else{
                cout << "List is not empty" << endl;
            }
        }
        void increaseSize(int *arr, int size){
            int *arrTemp = new int[2*size];
            for(int i = 0; i <size; i++){
                arrTemp[i] = arr[i];
            }
            delete [] arr;
            arr = arrTemp;
        }
        void insertAtIndex(int index, int num){
            if(index > size){
                increaseSize(arr, size);
            }
            arr[index] = num;
            last++;
        }
        void searchData(int num){
            int i;
            bool found = false;
            for(i = 0; i < size; i++){
                if(arr[i] == num){
                    found = true;
                    break;
                }
            }
            if(found){
                cout<< "Data found at index " << i << endl;
            }
            else{
                cout << "Data not found in this list." << endl;
            }
            
        }
        void deleteAtIndex(int index){
            for(int i = index; i < last; i++){
                arr[i] = arr[i+1];
            }
            last--;
        }
        void replaceIndex(int index, int num){
            arr[index] = num;
        }
        void count(){
            int count = 0;
            for(int i = 0; i <= last; i++){
                count++;
            }
            cout << "The size of this list is "<< count << endl;

        }
        void printList(){
            for(int i = 0; i < size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};


#endif