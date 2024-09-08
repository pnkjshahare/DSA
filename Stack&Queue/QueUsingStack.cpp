#include<bits/stdc++.h>
using namespace std;
class ImplementQue{
    public:
    stack<int>s1,s2;
    void pushele(int x){
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void popele(){
        s1.pop();
    }
    void topele(){
        cout<<"Top Element is =>"<<s1.top()<<endl;
    }
    void sizeque(){
        cout<<"Size of queue=>"<<s1.size()<<endl;
    }
};
int main()
{
ImplementQue myobj;
myobj.pushele(10);
myobj.topele();
myobj.pushele(20);
myobj.popele();
myobj.topele();
myobj.sizeque();
return 0;
}