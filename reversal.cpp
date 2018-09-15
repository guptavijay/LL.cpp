Node* reverse(Node *head)      // function containg head node
{
  // Your code here
  Node * temp=head;
  Node * temp2;
  Node * cur=head;
  Node * prev=NULL;
  while(cur)
  {
      temp2=cur->next;
      cur->next=prev;
      prev=cur;
      cur=temp2;
      
  }
  return prev;
  
}
