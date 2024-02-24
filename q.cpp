// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number to see your number is equal to less than to 10 :";
//     cin>>n;
//     cout<<(n<=10)<<endl;
//     return 0;
// }
//ANOTHER WAY
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number to see :";
//     cin>>n;
//     if(n>10){
//         cout<<"more than 10";
//     }
//     else if(n<10){
//         cout<<"less than to 10";
//     }
//     else{
//         cout<<"equal to 10";

//     }
//     return 0;
// }
//Q. LOGICAL OPEARTORS :{AND-OPERATOR}
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     bool student = true;
//     cout<<"Enter your age to see that you're elgibile for discount :  ";
//     cin>>age;
//     if(age<18 && student){
//         cout<<"sorry! you're not elgibile for student discount ";
//     }
//     else{
//         cout<<"welcome you're elgibile for student discount";
//     }
//     return 0;
// }
//Q.{OR OPERATOR}
// #include<iostream>
// using namespace std;
// int main(){
//     int digit;
//     int num = 0;
//     cout<<"enter your number to see that your number is divided or not from 2 :";
//     cin>>digit;
//     if(digit || num){
//         cout<<"your number is equal to 0 or not also ok";
//     }
//     return 0;


// }

//Q.------------
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number to see your number is :";
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<"Great! your number is divided both from 2 and 3";
    }
    else if(n%2==0){
        cout<<"your number is only divided by 2";
    }
    else{
        cout<<"you're number is only divide by 3";
    }
    return 0;
}