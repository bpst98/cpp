#include<iostream>
#include<queue>
using namespace std;

class node
{
  public :
  int data;
  node *left;
  node *right;

  node(int d): data(d),left(NULL),right(NULL)
  {}

};

node *buildtree()
{
  int d;
  cout<<"ENTER DATA : ";
  cin>>d;

    if(d==-1)
      return NULL;
    else
    {
      node* n =new node (d);
      n->left=buildtree();
      n->right=buildtree();
      return n;

    }

}




void Print2(node *root)
{
  if(root==NULL)
    return;

  Print2(root->left);
  cout<<root->data<<" ";
  Print2(root->right);

}

void Print1(node *root)
{
  if(root==NULL)
    return;
  cout<<root->data<<" ";
  Print1(root->left);
  Print1(root->right);

}

void Print3(node *root)
{
  if(root==NULL)
    return;
  Print3(root->left);
  Print3(root->right);
  cout<<root->data<<" ";

}

void LEVELorder(node *root)
  {
  queue<node *> q;
  q.push(root);
  q.push(NULL);
    while(!q.empty())
    {
        node *temp=q.front();


    if(temp==NULL)
{        q.pop();
        cout<<temp->data<<" ";
}
else{
          if(temp->left)
          q.push(temp->left);

          if(temp->right)
          q.push(temp->right);
    }
    }
  }

  int countNodes(node* root)
  {
    if(root==NULL)
    {
      return 0;
    }

    return (1+countNodes(root->left) +countNodes(root->right));
  }

    int height( node* root)
    {
        if(root==NULL)
        {
          return 0;

        }
        int h1=height(root->left);
        int h2=height(root->right);

        return max(h1,h2+1);
    }

    int diameter(node *root)
        {
            if(root==NULL)
            return 0;

            int op1= height(root->left)+height(root->right);
            int op2=height(root->left);
            int op3=height(root->right);
            return max(op1,max(op2,op3));
        }


    class PAIR{
    public:
      int diameter;
      int height;
    };

    PAIR fastdiameter(node *root)
    {
      PAIR p;
      if(root==NULL)
      {
          p.height=p.diameter=0;
          return p;
      }
      PAIR left =fastdiameter(root->left);
      PAIR right=fastdiameter(root->right);

      p.height = max(left.height,right.height)+1;

      int op1=left.height +right.height;
      int op2=left.height ;
      int op3=right.height;
      p.diameter=max(op1,max(op2,op3));
      return p;

    }

int main()
{
  node *root = buildtree();

  Print1(root);
  cout<<endl;

  Print2(root);
  cout<<endl;

  Print3(root);
  cout<<endl;

  cout<<" count :"<<countNodes(root)<<endl
      <<"height :"<<height(root)<<endl
      <<"diameter"<<diameter(root)<<endl;

}
