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
int GetSize(list head);


int main () {
  int size;
  list head;
  std::cout << "Enter the size of the linked list: ";
  cin >> size;
  head = CreateLinkedListLinear(size);
  PrintValues(head);
  cout << "The size of the linked list is: " << GetSize(head) << endl;


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

int GetSize(list head){
if (head == nullptr) {
  return 0;
}
return 1 + GetSize(head->next);

}
