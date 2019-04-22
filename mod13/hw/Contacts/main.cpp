#include <iostream>
#include <string>
using namespace std;

#include "ContactNode.h"

const int numContacts = 3;

void OutputList(ContactNode* contact);

int main(int argc, char const *argv[])
{
    ContactNode* head = nullptr;
    ContactNode* tail = nullptr;
    string name;
    string phone;

    for (size_t i = 0; i < numContacts; i++)
    {
        ContactNode* newContact = nullptr;

        cout << "Person " << i + 1 << endl;
        cout << "Enter name:" << endl;
        getline(cin, name);
        cout << "Enter phone number:" << endl;
        getline(cin, phone);
        cout << "You entered: " << name << ", " << phone << endl << endl;

        newContact = new ContactNode(name, phone);
        if (head == nullptr) {
            head = newContact;
            tail = newContact;
        }
        tail->InsertAfter(newContact);
        tail = tail->GetNext();
    }
    OutputList(head);
    return 0;
}

void OutputList(ContactNode* contact)
{
    cout << "CONTACT LIST" << endl;
    while (contact != nullptr) {
        contact->PrintContactNode();
        contact = contact->GetNext();
    }   
}