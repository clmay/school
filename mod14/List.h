/*
 * =====================================================================================
 *
 *       Filename:  List.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/15/2019 06:12:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  LIST__INC__
#define  LIST__INC__

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class List
{
    private:
        node *head, *tail;
    public:
        List();
        void createnode(int value);
        void display();
        void insert_start(int value);
        void insert_position(int pos, int value);
        void delete_first();
        void delete_last();
        void delete_position(int pos);
};

#endif /* ----- #ifndef LIST__INC__ ----- */