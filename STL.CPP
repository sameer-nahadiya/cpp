#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include<set>
using namespace std;

int main()
{
    /*array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    cout << "element at index 2: " << a.at(2) << endl;
    return 0;

    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    cout << "capacity" << a.capacity() << endl;
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    a.pop_back();
    int size1 = a.size();
    cout << "after pop" << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << a[i] << endl;
    }
    cout << "capacity " << a.capacity() << endl;
    cout << "size " << a.size() << endl;

    deque<int> d;
    d.push_back(1);
    d.push_front(3);
    cout<<d;

    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    queue<string> q;
    q.push("V");
    q.push("I");
    q.push("T");
    cout << "first element " << q.front() << endl;
    cout<<"size before the pop "<<q.size()<<endl;
    q.pop();
    cout << "first element " << q.front() << endl;
    cout<<"size after the pop "<<q.size()<<endl;
    //max heap
    priority_queue<int> maxi;


    //min heap
    priority_queue<int ,vector<int>,greater<int>  > mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(32);
    maxi.push(33);
    int n=maxi.size();
    for (int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(7);
    mini.push(6);
    mini.push(3);
    mini.push(32);
    int n2=mini.size();
    for (int i=0;i<n2;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }*/
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(9);
    s.insert(2);
    s.insert(7);
    for (auto i : s)
    {
        cout << i << endl;
    }
    s.erase(s.begin()); 
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout<<s.count(5)<<endl;
}