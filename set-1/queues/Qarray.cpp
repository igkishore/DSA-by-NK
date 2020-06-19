#include<bits/stdc++.h>
using namespace std;
int a[1000];
int i=0;
int f=-1;
int r=-1;
void enq(int d)
{
    if(i==0)
    {
        f=0;
        r=0;
       a[i]=d;
        i++;
    }
    else
    {
        r=i;
       a[i]=d;
        i++;
    }
}
void deq()
{
      cout<<a[f]<<endl;
      f++;
}
void fnt()
{
      cout<<a[f]<<endl;

}
void siz()
{
    cout<<(i-f)<<endl;
}
void ismt()
{
    if(f==-1 && r==-1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
int main()
{
    enq(1);
    enq(2);
    enq(3);
    deq();
    deq();
    deq();
    fnt();
    siz();
    ismt();
}
