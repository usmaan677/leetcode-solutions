#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

void solve (int n, int A, int B, int C, int &res){
    if(n==1){
        res++;
        cout<<A<<" "<<C<<endl;
        return;
    }
    solve(n-1,A,C,B,res);
    cout<<A<<" "<<C<<endl;
    res++;
    solve(n-1,B,A,C,res);
}

int main() {
    int res=0;
    int n;
    cin>>n;
    cout<<(pow(2,n)-1)<<endl;
    solve(n,1,2,3,res);
    return 0;
}