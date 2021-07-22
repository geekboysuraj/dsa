//Stack Implementation using Linked List    

#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int n){
    data = n;
    next = NULL;
    }
};

struct MyStack{
    Node* head;
    int size;

    MyStack(){
        head = NULL;
        size = 0;
    }

    void push(int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
        size++;
    }
    int pop(){
        if(head == NULL){
            return -1;
        }
        int poppedItem = head->data;
        Node* temp = head;
        head = head->next;
        delete(temp);
        size--;
        return poppedItem;
    }

    int sizee(){
        return size;
    }

    int top(){
        if(head==NULL){
            return -1;
        }
        return head->data;
    }

    bool isEmpty(){
        if(head == NULL) return true;
        else return false;
    }

};

int main(){

    MyStack st;
    st.push(50);
    st.push(23);
    st.push(26);
    cout<<st.top()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.top()<<endl;
    cout<<st.sizee()<<endl;
    cout<<st.isEmpty()<<endl;

    return 0;
}

