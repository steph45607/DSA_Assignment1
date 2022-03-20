#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int arr[size];
    int check = 1;
    while(check == 1){
        int ans;
        cout << "=============================================="<< endl;
        cout << "These are the operations for this array:" << endl;
        cout << "1. Insert data"<< endl;
        cout << "2. Delete data"<< endl;
        cout << "3. Search data"<< endl;
        cout << "4. Print data"<< endl;
        cout << "5. Quit program"<< endl;
        cout << "=============================================="<< endl;
        
        cout << "Enter the number of operation: " << endl;
        cin >> ans;

        if(ans == 1){
            cout << "----------------------------------------------"<< endl;
            for(int i = 0; i < size; i++){
                cout << "Enter data for index " << i << " :";
                cin >> arr[i];
            }
            cout << "List is full! Can't add more data."<< endl;
            cout << "=============================================="<< endl;
        }
        else if(ans == 2){
            cout << "----------------------------------------------"<< endl;
            int toDelete;
            cout << "Enter the data to be deleted: ";
            cin >> toDelete;

            for(int i = 0; i < size; i++){
                if(toDelete == arr[i]){
                    for(int j = i; j < size; j++){
                        arr[j] = arr[j+1];
                    }
                    arr[size] = 0;
                    cout << "Data deleted in index "<< i << " !" << endl;
                    cout << "----------------------------------------------"<< endl;
                    break;
                }
                else{
                    cout << "Data not found in index " << i << endl;
                }
            }
            cout << "=============================================="<< endl;

        }
        else if(ans == 3){
            cout << "----------------------------------------------"<< endl;
            int search;
            cout << "Enter data to search: ";
            cin >> search;
            for(int i = 0; i < size; i++){
                if(search == arr[i]){
                    cout << "Data found in index "<< i << " !" << endl;
                    break;
                    cout << "----------------------------------------------"<< endl;
                }
                else{
                    cout << "Data not found in index " << i << endl;
                }
            }
            cout << "=============================================="<< endl;
        }
        else if(ans == 4){
            cout << "----------------------------------------------"<< endl;
            for(int i = 0; i < size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else if(ans == 5){
            cout << "----------------------------------------------"<< endl;
            cout << "Thank you for using this program, have a great day!" << endl;
            check = 2;
        }
        else{
            cout << "Please enter the right value!" << endl;
            cout << "=============================================="<< endl;
        }

    }
}