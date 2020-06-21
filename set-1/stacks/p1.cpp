#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s;
    string s1;
    cin>>s1;
    char c;
    for(int i=0;i<s1.size();i++)
    {
     c=s1[i];
        if(c=='{' || c=='(' || c=='[' )
            {
                s.push(c);
            }
        if(c=='}' || c==')' || c==']' )
            {

                if(c=='}' && s.top()=='{')
                {

                    s.pop();
                }
                else if(c==')' && s.top()=='(')
                {

                    s.pop();
                }
                else if(c==']' && s.top()=='[')
                {

                    s.pop();
                }
                else
                {
                      cout<<"not Balanced"<<endl;
                    return 0;
                }
            }
    }
    if(s.empty())
    {
        cout<<"Balanced"<<endl;
        return 0;
    }
    cout<<"not Balanced"<<endl;
}
