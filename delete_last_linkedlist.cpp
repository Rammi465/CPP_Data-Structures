#include<iostream>
class Node{
    public:   //Attributes
      int value;
      Node* next;

      Node(int value){    //Constructor
        this->value = value;
        next = nullptr;

      }
};

class LinkedList{
    private:
      Node* head;
      Node* tail;
      int length;

    public:
     LinkedList(int value){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;

     }
}; 
void deleteLast()
{
   if(length == 0)
   {
    return;
   }
   Node* temp = head;
   Node* pre = head;









}