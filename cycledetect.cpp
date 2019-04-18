bool cycle_detect(node *head)
  {
      node *slow=head;
      node*fast=head;

      while(fast!=NULL&&fat->next!=NULL)
  {
    fast=fast->next->next;
    slow=slow->next;


    if(slow==fast)
        {
        return true;
        }
  }

  return false;



  }
