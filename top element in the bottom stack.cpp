#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&jat,int target)
{
    if(jat.empty())
    {
        jat.push(target);
        return;
    }
    int temp=jat.top();
    jat.pop();
    solve(jat,target);
    jat.push(temp);
}
void iatb(stack<int>&jat)
{
    if(jat.empty())
    {
        cout<<"stack is empty"<<endl;
        return ;
    }
    int target=jat.top();
    jat.pop();
    solve(jat,target);
  
}
int main()
{
    stack<int>jat;
    jat.push(10);
    jat.push(20);
    jat.push(30);
    jat.push(40);
    jat.push(50);
    iatb(jat);
    while(!jat.empty())
    {
        cout<<jat.top()<<" ";
        jat.pop();

    }
}