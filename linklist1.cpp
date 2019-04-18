#include<iostream>
using namespace std;

class node{
  public :

    int data;
    node *next;

    node (int d)
    {
      data=d;
      next = NULL;
    }

};
//function for linked list
void insert(node*&head,int d)   //insert in the beginning
{
  node *n=new node(d);
  n->next=head;
  head=n;
}


int length (node *temp)           //calculate length
{
  int count=0;
  while(temp!=NULL)
  {
  temp=temp->next;
  count++;

  }
  return count;

}

void print (node*head)         //print
{
  while(head!=NULL)
  {
    cout<<head->data<<" =>";
    head=head->next;
  }
}


void input(node*&head)           //input
{
  int d;
  cin>>d;

  while(d != -1)
  {
    insert(head,d);
    cin>>d;
  }

}


void InsertAtEnd(node *&head,int d)       //insert at end
{
  if(head==NULL)
{
  head = new node(d);
  return;
}

  node *temp = head;
    while(temp->next!=NULL)
    {
    temp = temp->next;
    }
  temp->next = new node(d);


}


void InsertInMiddle(node *&head,int d,int p)        //InsertInMiddle
{
if(p==0)
{
  insert(head,d);
}
else if(p>=length(head))
{
  InsertAtEnd(head,d);
}
else                                      //main insertion in the middle
{
  int jump=1;
  node *prev=head;

      while(jump<=p-1)
      {
        prev=prev->next;
        jump++;
      }

    node *n=new node(d);
    n->next=prev->next;
    prev->next=n;


}


}


//-------------finding mid pooint
void *midpoint (node *head)
{
  node *n1=head,*n2=head;
  while(n2!=NULL||n2->next==NULL)
  {
    n1=n1->next;
    n2=n2->next;
    n2=n2->next;

  }
  return n1;
}
//--------------reversing the linked list using recursion mera method
node *reversing(node *head)
{
  node *curr=head;
  node *prev=NULL;
  node *n;
  if(curr==NULL)
  {
    head=prev;
    return head;
  }
  n=curr->next;
  curr->next=prev;
  prev=curr;
  curr=n;

}
//===============reversing the linked list using recursion
node *reverse(node *head)
{
  if(head==NULL||head->next==NULL)
  {
    return head;
  }

  node*newhead = reverse(head->next);


  head->next->next=head;
  head->next=NULL;
  return newhead;
}


//===========search element =========
bool search(node *head,int key)
{
  if(head==NULL)
  return false;


    if(head->data==key)
    {
      return true;
    }

    return search(head->next,key);


}

//=========reverse linked list iterative method
node *iterative_reverse(node *head)
    {
      node *curr_node=head,*prev_node=NULL,*next_node;

      while(curr_node!=NULL)
        {
            next_node=curr_node->next;
            curr_node->next=prev_node;
            prev_node=curr_node;
            curr_node=next_node;
        }
    head=prev_node;
    return head;
    }


//==================merge sort two linked list
/*
node *merge (node *head1,*head2)
{
  if(head2==NULL)
  {
    return head1;
  }
  if(head1==NULL)
  {
    return head2;
  }
    if((head1->data)<(head2->data))
    {
      head1->next=head2;
    }
    else
    if((head1->data)>(head2->data))
    {
      head2->next=head1;
    }


}
*/
//..........................MAIN()
int main()
{
  node *head=NULL;

  input(head);

  print(head);
  cout<<endl;
  node *temp;
  temp=iterative_reverse(head);
  print(temp);



  return 0;
}
