#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_front(5);
    dq.push_front(6);
    dq.push_front(7);
    dq.push_back(8);
    dq.push_back(9);
    dq.push_back(10);
    /*for(auto u:dq){
        cout<<u<<endl;
    }*/
    for(int i=0;i<dq.size();i++){
       cout<<dq[i]<<endl;
    }
}
