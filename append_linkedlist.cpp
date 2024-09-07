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
     void printList(){
        Node* temp = head;
        while(temp!= nullptr){
            std::cout << temp->value << "\n";
            temp = temp->next;
        }
     }
     void append(int value){
      Node* newNode = new Node(value);
      
      if(length == 0)
      {
         head = newNode;
         tail = newNode;
      }
      else{
         tail->next = newNode;
         tail = newNode;
      }
      length++;
}


};   


int main()
{
    LinkedList* myLinkedList = new LinkedList(1);
    myLinkedList-> append(2);
    myLinkedList->printList(); 
}