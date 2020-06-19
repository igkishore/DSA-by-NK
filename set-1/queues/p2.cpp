//How can you implement a queue using two stacks?
#include<bits/stdc++.h>
using namespace std;
stack<int> s1,s2;
int ii=0;
void deq()
{
    for(int i=0;i<5-ii;i++)
    {
        s2.push(s1.top());
        s1.pop();
    }
    cout<<s2.top()<<endl;
    s2.pop();
    for(int i=0;i<5-ii;i++)
    {
        s1.push(s2.top());
        s2.pop();
    }
    ii++;
}
int main()
{
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    deq();
    deq();
}
