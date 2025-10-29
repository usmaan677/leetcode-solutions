#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;

class Queue{
    public:
        stack<int> instack;
        stack<int> outstack;
        
        Queue(){};
        void Enqueue(int x){
            instack.push(x);
        }
        void Dequeue(){
            shift();
            if(!outstack.empty()){
                outstack.pop();
            }
        }
        void Print(){
            shift();
            if(!outstack.empty()){
                cout<<outstack.top()<<endl;
            }
            
        }
    private:
        void shift(){
            if(outstack.empty()){
                while(!instack.empty()){
                    outstack.push(instack.top());
                    instack.pop();
                }
            }
        }
};
        

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    Queue queue;
    cin>>q;
    for(int i=0;i<q;i++){
        int process;
        cin>> process;
        if(process == 1){
            int num;
            cin>>num;
            queue.Enqueue(num);
        }else if(process == 2){
            queue.Dequeue();
        }else if(process == 3){
            queue.Print();
        }
    }
    return 0;
}
