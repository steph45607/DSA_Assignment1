#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
using namespace std;

class Contact{
    private:
        string name;
        int phone;
        string email;
    public:
        Contact(string n="None", int p=0, string e="None")
        :name(n), phone(p), email(e){}
        ~Contact(){};

        // getters
        string getName(){
            return this -> name;
        }
        int getPhone(){
            return this -> phone;
        }
        string getEmail(){
            return this -> email;
        }

        // setters
        void setName(string n){
            this -> name = n;
        }
        void setPhone(int p){
            this -> phone = p;
        }
        void setEmail(string e){
            this -> email = e;
        }

        void printPerson(){
            cout << "Name           : " << this -> name << endl;
            cout << "Phone number   : " << this -> phone << endl;
            cout << "Email          : " << this -> email << endl;
        }

        void createContact(){
            string name, email;
            int phone;
            cout << "Enter the contact details:\n\n";
            cout << "Name: ";
            cin >> name;
            setName(name);
            cout << "Mobile number: ";
            cin >> phone;
            setPhone(phone);
            cout << "Email: ";
            cin >> email;
            setEmail(email);
        }
        
};
#endif