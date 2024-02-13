#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
     int data;
     Node* next;

     Node(int data)
     {
        int data1=data;
        next=NULL;

     }
};


     Node* convertToLL(vector<int>&arr)
     {
        Node* head= new Node(arr[0]);
        Node* mover=head;

        for(int i=1; i<arr.size(); i++)
        {
            Node* temp= new Node(arr[i]);
            mover->next =temp;
            //mover=mover->next;
            mover=temp;
        return head;
     }
     }

int main()
{
    vector<int>arr={12, 5, 6};
    Node* head=convertToLL(arr);
    cout<<head->data;

    return 0;
}


