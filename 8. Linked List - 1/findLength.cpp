// Length of LL
// Send Feedback
// Given a linked list, find and return the length of input LL. Do it iteratively.
// Input format :
// Linked list elements (separated by space and terminated by -1)
// Output format :
// Length of LL
// Sample Input :
// 3 4 5 2 6 1 9 -1
// Sample Output :
// 7


#include <iostream>
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

using namespace std;
//#include "Solution.h"

Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int length(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    Node * temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    
    return count;
    
}

int main() {
    Node *head = takeinput();
    // int pos;
    // cin >> pos;
    cout << length(head);
    return 0;
}

