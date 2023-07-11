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
        cout << node->data%10; 
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

class Solution
{
    public:
    
   Node* reverseList(Node* head) {
        
        Node *newHead=NULL;
        while(head!=NULL)
        {
            Node *next=head->next;
            head->next=newHead;
            newHead=head;
            head=next;
        }
        
        return newHead;
    }
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
        bool carry=true;
        head=reverseList(head);
        
        Node* curr=head;
        
        while(curr!=NULL&&carry==true)
        {
            if(curr->data!=9)
            { 
                curr->data+=1;
        
                carry=false;
    
            }
            
            else if(curr->data==9&&curr->next!=NULL)
            {
                
 
                curr->data=0;         
                curr=curr->next;
                
            }
                
                else if(curr->data==9&&curr->next==NULL)
                { carry=false;
                       Node* temp = new Node(0);
                         curr->data=1;
                temp->next=head;
                head=temp;
            curr=curr->next;
                
                }
                
                
            
            
        }
        head=reverseList(head);
        return head;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends