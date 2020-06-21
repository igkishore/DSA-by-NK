/*Maximum sum in sliding window: Given array A[] with sliding window of size
w which is moving from the very left of the array to the very right. Assume that we can
only see the w numbers in the window. Each time the sliding window moves rightwards by
one position. For example: The array is [1 3 -1 -3 5 3 6 7], and w is 3.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    int w,m=0,s=0;
    cin>>w;
    for(int i=0;i<10-w;i++)
    {
        for(int j=0;j<w;j++)
        {
            s=s+a[i+j];
        }
        if(s>m)
        {
            m=s;
        }
        s=0;
    }
    cout<<m<<endl;
}
