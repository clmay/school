#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Item
{
  // The item's actual value
  double value;
  // The address of the next item on the stack
  Item *next;
};

struct Stack
{
  // The address of the item that's currently the top item on the stack
  Item *top = nullptr;
  // The current size of the stack itself
  int size = 0;
};

// Function prototypes
void push(Stack *, double);
double pop(Stack *);
void printStack(const Stack *);

int main(int argc, char const *argv[])
{
  // Create a stack and store its address.
  Stack *s = new Stack;

  // Push some values onto the stack.
  push(s, 20.5);
  push(s, 60.004);
  push(s, 10.08);
  push(s, 40.3);
  push(s, -160.93);

  // And then pop and print until you get to the end.
  Item *i = s->top;
  while (i != nullptr)
  {
    i = s->top;
    printStack(s);
    pop(s);
  }

  // Free the memory
  delete s;

  // Exit the process
  return 0;
}

void push(Stack *stack, double num)
{
  // Create a new item
  Item *i = new Item;
  i->value = num;
  // The pointer to the item which is currently at the top of the stack is
  // stored in `stack->top`. We want to make the new item's `next` point at the
  // item that is currently the top of the stack.
  i->next = stack->top;
  // Then we want to update the stack so that the new item becomes the new `top`.
  stack->top = i;
  // And since the stack has grown by one item during this push operation, we
  // increment the stack's size, too.
  stack->size++;
}

double pop(Stack *stack)
{
  // If the stack is empty, there will not be a valid double value for us to
  // return, so we'll return HUGE_VAL instead.
  if (stack->size == 0)
  {
    return HUGE_VAL;
  }
  // Otherwise, we're going to pop the current item on top of the stack. So,
  // we'll use a pointer to an item as the placeholder to refer to the top item
  // in the stack.
  Item *i = stack->top;
  // Now that we have the item from the top of the stack, we'll grab its value.
  double val = i->value;
  // Since we're popping the item from the stack, we will make the next item in
  // the stack the new top of the stack.
  stack->top = i->next;
  // And since popping an item removes it from the stack, we will decrement the
  // size of the stack, as well.
  stack->size--;
  // Since we have updated the stack and stored the item's value, it's no longer
  // needed. We delete the item:
  delete i;
  // And return the value that we stored from it:
  return val;
}

void printStack(const Stack *stack)
{
  // Obviously a stack of size 0 contains no items, so if we're dealing with an
  // empty stack, we'll say so:
  if (stack->size == 0)
  {
    cout << setw(10) << "--"
         << " " << stack->size << " items found" << endl;
    return;
  }
  // Otherwise, for a non-empty stack, we'll grab the top item, just like before:
  Item *i = stack->top;
  // And we'll output the value of the top item (and indicate that it's the top):
  cout << setw(10) << i->value << " <= TOP" << endl;
  while (i->next != nullptr)
  {
    // Then, we switch to the next item:
    i = i->next;
    // And output its value, as well.
    cout << setw(10) << i->value << endl;
    // This loop ends when the next item is a nullptr, which indicates there are
    // no more items on the stack.
  }
  // Finally, per the assignment requirements, at the end of every printStack
  // call, we output its current size.
  cout << setw(10) << "--"
       << " " << stack->size << " items found" << endl;
}