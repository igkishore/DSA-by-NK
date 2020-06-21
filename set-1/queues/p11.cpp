/* Given an integer k and a queue of integers, how do you reverse the order of the
first k elements of the queue, leaving the other elements in the same relative order? For
example, if k=4 and queue has the elements [10, 20, 30, 40, 50, 60, 70, 80, 90]; the output
should be [40, 30, 20, 10, 50, 60, 70, 80, 90].*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int k,n,t;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        q.push(t);
    }

}
