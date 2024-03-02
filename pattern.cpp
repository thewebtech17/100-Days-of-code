// #include<iostream>
// using namespace std;
// int main(){
//     int row,column;
//     cout<<"Enter the no. of rows"<<endl;
//     cout<<"Enter the no. of rows"<<endl;
//     cin>>row>>column;
//     for(int i=1;i<=row;i++){
//         for (int j = 0; j<column; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }


// }
//Q.--------- :-
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter no. of rows :"<<endl;
    cout<<"enter no. of rows :"<<endl;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"#";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    
    }
  
}