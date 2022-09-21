#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

vector<string>a={"one","two","three","four","five","six","seven","eight","nine"};

int main() {
    
    int i;
    cin>>i;
    
        if(i>=1 && i<=9) cout<<a[i-1]<<endl;
        else if(i>9){
           cout <<"Greater than 9" <<endl;
        }
        
    
    
    return 0;
}
