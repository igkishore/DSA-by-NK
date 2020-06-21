/*Given a queue Q containing n elements, transfer these items on to a stack S
(initially empty) so that front element of Q appears at the top of the stack and the order of
all other items is preserved. Using enqueue and dequeue operations for the queue, and push
and pop operations for the stack, outline an efficient O(n) algorithm to accomplish the
above task, using only a constant amount of additional storage*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    queue<int> q;
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        q.push(t);
    }
    for(int i=0;i<n;i++)
    {
        t=q.front();
        q.pop();
        s.push(t);
    }
        for(int i=0;i<n;i++)
    {
        t=s.top();
        s.pop();
        q.push(t);
    }
        for(int i=0;i<n;i++)
    {
        t=q.front();
        q.pop();
        s.push(t);
        cout<<s.top()<<" " ;
    }

}
