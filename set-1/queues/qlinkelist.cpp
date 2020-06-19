#include<bits/stdc++.h>
using namespace std;
class q
{
public:
    int d;
    q* n;
};
q* f=NULL;
q* r=NULL;
int s=0;
void enq(int da)
{
    if(s==0)
    {
        q* nn = new q();
        nn->d=da;
        nn->n=NULL;
        s++;
        f=nn;
        r=nn;
    }
    else
    {
        q* nn = new q();
        nn->d=da;
        nn->n=NULL;
        s++;
        r->n=nn;
        r=nn;
    }
}
void dq()
{
   cout<<f->d<<endl;
   f=f->n;
   s--;
}
void siz()
{
    cout<<s<<endl;
}
void fnt()
{
   cout<<f->d<<endl;
}
void ismt()
{
    if(f==NULL && r==NULL)
    {
        cout<<"Yes"<<endl;
        return ;
    }
    cout<<"No"<<endl;
}
int main()
{
    enq(1);
    enq(2);
    enq(3);
    enq(4);
    enq(5);
    dq();
    fnt();
    siz();
    ismt();
}
