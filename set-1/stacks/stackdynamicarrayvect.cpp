#include<bits/stdc++.h>
using namespace std;
class stak
{
public:
    vector<int> a;
    int s;
    stak();
    void push(int d);
    void pop();
    void top();
    void siz();
    bool isempt();
    bool isfull();
    void print();
};
stak::stak()
{
    s=0;
}
void stak::push(int d)
{
    a.push_back(d);
    s++;
}
void stak::pop()
{
    a.pop_back();
    s--;
}
void stak::top()
{
    cout<<"top is : "<<a[s-1]<<endl;
}
void stak::siz()
{
    cout<<"size is : "<<s<<endl;
}
bool stak::isempt()
{
   if (s==0)
   {
       return true;
   }
   return false;
}

void stak::print()
{
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    stak s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.print();
    s.pop();
    s.print();
    s.push(5);
    s.top();
    s.siz();
    s.print();
    cout<<"is mt :"<<s.isempt()<<endl;
}
