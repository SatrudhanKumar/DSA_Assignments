#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxx(vector<int>a){
    int max=INT8_MIN;
    for(int i=0;i<4;i++) {
        if(max<a[i]) max=a[i];
    }
    return max;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */       vector<int>a;
     for(int i=0; i<4; i++ ){
         int temp;
         cin >> temp;
         a.push_back(temp);
     }
    cout<<maxx(a);
    
    return 0;
}
