
#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node* next;

};

 struct CharStack
 {
    Node* bas;
    void create();
    void pop();
    void push(char );
    
  };

void CharStack::create() {
    bas = NULL;
}

void CharStack::push(char val) {

    Node* newnode = new Node;
    newnode->data = val;

    newnode->next = bas;
    bas = newnode;
}
void CharStack::pop() {
    Node* temp;
    temp = bas;
    bas->next = bas;
    delete temp;

}

bool isPolindrome(string s) {

    int length = s.size();
    CharStack cs;
    cs.create();

    int i, mid = length / 2;

    for (i = 0; i < mid; i++) {
        // burda kaldýn
    }
 
}



int main()
{
    string s = "madam";

    if (isPolindrome(s)) {
        cout << "Polindrome";
    }
    else
    {
        cout << "NOT Polindrome";
    }
    return 0;
}

