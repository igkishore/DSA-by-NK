//Problem-1 Give an algorithm for reversing a queue Q. To access the queue, we are only
//allowed to use the methods of queue ADT.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    stack<int> qq;
    int n=q.size();
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        qq.push(q.front());
        q.pop();
    }
    for(int i=0;i<5;i++)
    {
        q.push(qq.top());
        qq.pop();
        cout<<q.back()<<" ";
    }
}
