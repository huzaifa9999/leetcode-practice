//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    
            Node ans(0);
        Node *temp=&ans;
        unordered_map<int,int>mp;
        
    Node *curr1=head1;
    while(curr1)
    {
        mp[curr1->data]++;
        curr1=curr1->next;
        
    }
    
    
    Node *curr2=head2;
    while(curr2)
    {
        if(mp.find(curr2->data)!=mp.end())
        {
            temp->next= new Node(curr2->data);
            temp=temp->next;
        
            if(mp[curr2->data]==1)
            mp.erase(curr2->data);
            else
            mp[curr2->data]--;
        }
        curr2=curr2->next;
    }
        
        
        
        return ans.next;
}