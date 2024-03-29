//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        vector<int>even;
        vector<int>odd;
        Node* curr=head;
        while(curr!=NULL)
        {
            if(curr->data%2==0)
            {
                even.push_back(curr->data);
                
            }
            else odd.push_back(curr->data);
            
            curr=curr->next;
        }
        
        Node *temp=head;
        while(temp!=NULL)
        {
        for(int i=0;i<even.size();i++)
        { 
            temp->data=even[i];
            temp=temp->next;
            
        }
            for(int i=0;i<odd.size();i++)
        { 
            temp->data=odd[i];
            temp=temp->next;
            
        }
    }
    
    return head;}
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends