#include<iostream>
using namespace std;
int main(){
    int n {},total {};
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int num:array){
        total+=num;
    }
     
    cout<<total;
    return 0;
}
