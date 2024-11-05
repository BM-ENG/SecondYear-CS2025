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
bool IsAscendingOrder(list head);

int main () {
  std::cout << "Enter the size of the linked list: ";
  int size;
  cin >> size;
  list head = CreateLinkedListLinear(size);
  PrintValues(head);
  if (IsAscendingOrder(head)) {
    cout << "The linked list is in ascending order" << endl;
  }else {
    cout << "The linked list is not in ascending order!!" << endl;
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

bool IsAscendingOrder(list head){
  if (head == nullptr || head->next == nullptr) {
    return true;    
  }
  if (head->data > head->next->data) {
    return false;
  }
  return IsAscendingOrder(head->next);
} 



