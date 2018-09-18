// linked list is palindrome or not
// O(N)  and O(N) space  using stack

#include<bits/stdc++.h>
bool isPalindrome(Node *head)
{
    //Your code here
    Node * temp= head;
    Node *temp1=head;
    stack<int> s;
    int cnt=0;
    while(temp)
    {
    s.push(temp->data);           //push all elements into stack
    temp=temp->next;
    }
    while(temp1)                //traverse list again and pop one elemnet every time and compare
    {
        int p=s.top();
        s.pop();
        if(temp1->data!=p)
        {
            cnt++;
        }
        temp1=temp1->next;
    }
    if(cnt>0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}
