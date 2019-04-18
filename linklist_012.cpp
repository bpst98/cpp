#include <iostream>

using namespace std;

class node
{
  public :
  int data;
  node *next;
  node (int d)
  {
    data=d;
    next = NULL;
  }
};

void insert(node*&head,int d)   //insert in the beginning
{
  node *n =new node(d);
  n->next=head;
  head=n;
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

int main()
{


  node *head=NULL;
  input(head);



  return 0;

}
