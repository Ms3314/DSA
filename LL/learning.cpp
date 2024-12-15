#include <bits/stdc++.h>
using namespace std ;
class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1)
    {
        data = data1 ;
        next = next1 ;
    }

    public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }

};

Node* convertArr2LL(vector<int> &arr)
{
    // now when i  used the new keyword to create a Node its value is being given to *head so its memory location is stores in head
    Node* head = new Node(arr[0]);
    // creating anew varibale mover with a return type of Node and storing the memory location of head  
    Node* mover = head ;
    for (int i = 1 ; i < arr.size() ; i++) {
        // here I am creating  a temporary variable temp that has the new node lcocation and ow as the mover has the pre node location it can insert this things loc into it 
        Node* temp = new Node(arr[i]);
        // u use the -> operator to go to this location 
        mover->next = temp ;
        // putiing the mover to the temp varibale so that the loop can repeat
        mover = temp ;
    }
    return head ; 
}



int main () {
    vector<int> arr = {2 , 5 , 8 , 7};
    Node*head = convertArr2LL(arr);
    cout << head->data << '\n';
    cout << head;
    Node *temp = head ;
    vector<int> arr1;
    
    cout<< "this is the linkdlist wali print" << "\n" ;
    for (int i =0 ; i < 4 ; i++)
    {
        int data = temp->data;
        printf(" %d " , data);
        temp = temp->next; 
    }

}

