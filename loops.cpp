#include<iostream>
using namespace std;
int main(){
    int n,m; //n=row;m=column;
    cout<<"Enter the number of rows :";
    cin>>n;
    cout<<"Enter the number of columns :";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j){
            cout<<"*";
        }
        cout<<endl;
    }
}