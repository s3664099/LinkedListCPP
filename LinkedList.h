#include "Node.h"

class LinkedList {
public:
   LinkedList();
   ~LinkedList();

   int size();
   void clear();
   int get(int i);

   void addFront(int data);
   void addBack(int data);
   void removeFront();
   void removeBack();
   void addAt(int i, int data);
   void deleteAt(int i);

private:
   Node* head;
   Node* tail;
   int listSize;
   Node* getNode(int i);
};
