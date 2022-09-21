#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

vector<string>a={"one","two","three","four","five","six","seven","eight","nine"};

int main() {
    
    int n;
    int m;
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        if(i>=1 && i<=9) cout<<a[i-1]<<endl;
        else if(i>9){
            if(i%2==0) cout<<"even"<<endl;
            else cout<<"odd"<<endl;
        }
        
    }
    
    return 0;
}
