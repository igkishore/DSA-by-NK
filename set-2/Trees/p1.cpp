#include<bits/stdc++.h>
using namespace std;
class tree
{
public:
    int d;
    tree* l;
    tree* r;
};
int ma(tree* rt)
{
    int rv,lf,r,mat=0;
    if(rt)
    {
        rv=rt->d;
        lf=ma(rt->l);
        r=ma(rt->r);

        if(rv>lf)
        {
            mat=rv;
        }
        else
        {
            mat=lf;
        }
        if(mat<r)
        {
            mat=r;
        }
    }
    return mat;
}
int main()
{
    tree* nn = new tree();
    nn->d=1;
    tree* rt = new tree();
    rt=nn;
    tree* n1= new tree();
    n1->d=2;
    nn->l=n1;
    tree* n2 = new tree();
    n2->d = 3;
    nn->r=n2;
    tree* n3 = new tree();
    n3->d = 4;
    n1->l=n3;
    n3->r=NULL;
    n3->l=NULL;
    tree* n4 = new tree();
    n4->d = 5;
    n1->r=n4;
    n4->l=NULL;
    n4->r=NULL;
    tree* n5 = new tree();
    n5->d = 6;
    n2->l=n5;
    n5->l=NULL;
    n5->r=NULL;
    tree* n6 = new tree();
    n6->d = 7;
    n2->r=n6;
    n6->l=NULL;
    n6->r=NULL;
    int k=ma(rt);
    cout<<k<<endl;

}
