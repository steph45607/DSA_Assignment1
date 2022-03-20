#include "contact.h"
#include "contactPerson.h"
#include <iostream>
using namespace std;

class ContactBook{
    private:
        arrayListType<Contact> Book;
        Contact myContact;
        int numcontact = 0;
    public:
        // add
        void addContact(){
            myContact.createContact();
            Book.insertAt(numcontact,myContact);
            numcontact++;
        };
        // delete
        void deleteContact(){
            Book.print();
            int number;
            cout << "Enter -999 if you want to cancel." << endl;
            cout << "Enter number to be deleted: ";
            cin >> number;
            if(number == -999){
                cout << "None deleted!" << endl;
            }
            else if(number < numcontact){
                Book.removeAt(number-1);
                cout << "...contact deleted!\n" << endl;
                Book.print();
            }
            else{
                Book.removeAt(number-1);
            }
        };
        // search
        void searchContact(){
            string name;
            cout << "Enter name to be searched: ";
            cin >> name;
            // bool found = false;
            // for(int i = 0; i < numcontact; i++){
                
            // }
            int found = Book.seqSearch(name);
            if(found >= 0){
                cout << "Found on index " << found << endl;
            }
            else{
                cout << "Data not found." << endl;
            }
        };
        void printContacts(){
            Book.print();
        }
};

int main(){
    ContactBook Book;
    bool check = true;
    while(check){
        int ans;
        cout << "==CONTACT BOOK==" << endl;
        cout << "1. Add a new contact" << endl;
        cout << "2. Delete a contact" << endl;
        cout << "3. Search a contact" << endl;
        cout << "4. Print contact book" << endl;
        cout << "5. Exit program" << endl;

        cout << "\nWhat is your choice? Input the number"<< endl;
        cin >> ans;
        if(ans == 1){
            Book.addContact();
        }
        else if(ans == 2){
            Book.deleteContact();
        }
        else if(ans == 3){
            Book.searchContact();
        }
        else if(ans == 4){
            Book.printContacts();
        }
        else if(ans == 5){
            cout << "Thank you! See you next time!";
            check = false;
        }
        else{
            cout << "Please enter the right value." << endl;
        }
    }

}