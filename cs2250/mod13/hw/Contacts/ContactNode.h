#ifndef CONTACTNODE__INC__
#define CONTACTNODE__INC__

#include <string>
using namespace std;

class ContactNode
{
    private:
        string contactName;
        string contactPhoneNum;
        ContactNode* nextNodePtr;
    public:
        // Constructor
        ContactNode(string name, string phone);
        // Getters
        string GetName() const;
        string GetPhoneNumber() const;
        ContactNode* GetNext() const;
        // Other methods
        void PrintContactNode() const;
        void InsertAfter(ContactNode* nodePtr);
};

#endif