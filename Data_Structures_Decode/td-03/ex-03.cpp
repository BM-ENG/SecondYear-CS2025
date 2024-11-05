#include <iostream>
using namespace std ;  
  

// create struct node
struct node;
using list = node*;

struct node { 
    int data; 
    list next; 
};


void PrintValues(list head);
list CreateLinkedListLinear(int size); 
bool IsExist(list head, int value);


int main () {
  std::cout << "Enter the size of the linked list: ";
  int size;
  cin >> size;
  list head = CreateLinkedListLinear(size);
  PrintValues(head);
  cout << "Enter the value you want to search: ";
  int value;
  cin >> value;
  if (IsExist(head, value)) {
    cout << "The value is exist in the linked list" << endl;
  }else {
    cout << "The value is not exist in the linked list!!" << endl;
  }

  return 0;
}



list CreateLinkedListLinear(int size) {
    list head = nullptr;
    list current = nullptr;

    for (int i = 0; i < size; i++) {
        list newNode = new node;
        cout << "Enter the value of node " << i + 1 << ": ";
        cin >> newNode->data;
        newNode->next = nullptr;
        if (head == nullptr)  
          head = newNode;
        else  
          current->next = newNode;
        current = newNode;
    }
    
    return head;
}

// create new functino for print the linked list
void PrintValues(list head){
  list current = head;

  while (current != nullptr) {
    cout << current->data <<"  ";
    current = current->next;

  }
  cout << endl;
}

bool IsExist(list head, int value){
  if (head == nullptr) 
    return false; 

  if (head->data == value) 
    return true; 
  
  return IsExist(head->next, value);
}

