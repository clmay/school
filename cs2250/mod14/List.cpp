#include <iostream>
#include "List.h"
using namespace std;

List::List()
{
    head = NULL;
    tail = NULL;
}

void List::createnode(int value)
{
    node *tmp = new node;
    tmp->data = value;
    tmp->next = NULL;
    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else
    {
        tail->next = tmp;
        tail = tail->next;
    }
}

void List::display()
{
    node *tmp = new node;
    tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << "\t";
        tmp = tmp->next;
    }
}

void List::insert_start(int value)
{
}

void List::insert_position(int pos, int value)
{
}

void List::delete_first()
{
    node *temp = new node;
    temp = head;
    head = head->next;
    delete temp;
}

void List::delete_last()
{
    node *prev = new node;
    node *curr = new node;
    curr = head;
    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    tail = prev;
    prev->next = NULL;
    delete curr;
}

void List::delete_position(int pos)
{
    node *prev = new node;
    node *curr = new node;
    curr = head;
    for(int i = 1; i < pos; i++)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    // TODO: Ensure within list boundaries
    delete curr;
}