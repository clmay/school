#include <iostream>
using namespace std;

#include "ContactNode.h"

ContactNode::ContactNode(string name, string phone)
{
    this->contactName = name;
    this->contactPhoneNum = phone;
    this->nextNodePtr = nullptr;
}

string ContactNode::GetName() const
{
    return this->contactName;
}

string ContactNode::GetPhoneNumber() const
{
    return this->contactPhoneNum;
}

ContactNode* ContactNode::GetNext() const
{
    return this->nextNodePtr;
}

void ContactNode::PrintContactNode() const
{
    cout << "Name: " << this->contactName << endl;
    cout << "Phone number: " << this->contactPhoneNum << endl << endl;
}

void ContactNode::InsertAfter(ContactNode* nodePtr)
{
    this->nextNodePtr = nodePtr;
}