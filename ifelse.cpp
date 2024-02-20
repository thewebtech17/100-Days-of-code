// // // // // if else if :-
// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int SP,CP;
// // // // //     cout<<"enter the Cost Price :";
// // // // //     cin>>CP;
// // // // //     cout<<"enter the Selling Price :";
// // // // //     cin>>SP;
// // // // //     if(SP>CP){
// // // // //         int PF = SP-CP;
// // // // //         cout<<"YOur total profit is :";
// // // // // }
// // // // // else if(CP>SP){
// // // // //     int loss = CP-SP;
// // // // //     cout<<"Your total loss is :"<<loss<<endl;
// // // // // }
// // // // // else{
// // // // //     cout<<"you are not in profit or loss"<<endl;
// // // // // }
// // // // // return 0;



// // // // // }

// // // // //Q. maximum in three numbers :
// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     int n1,n2,n3;
// // // //     cout<<"enter the value of n1:";
// // // //     cin>>n1;
// // // //     cout<<"enter the value of n2:";
// // // //     cin>>n2;
// // // //     cout<<"enter the value of n3:";
// // // //     cin>>n3;
// // // //     if(n1<n2 && n1<n3){
// // // //         cout<<"maxium number is n1"<<n1<<endl;
// // // //     }
// // // //     else if(n2<n1 && n2<<n3 ){
// // // //         cout<<"Maximum number is n2"<<n2<<endl;
// // // //     }
// // // //     else{
// // // //         cout<<"Maximum number is n3"<<n3<<endl;
// // // //     }
// // // //     return 0;

// // // // }
// // // //Q.SWITCH STATEMENT:-

// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int weeks;
// // //     cout<<"enter number of the week :";
// // //     cin>>weeks;
// // //     switch (weeks){
// // //     case 7:
// // //         cout<<"yes today is sunday"<<endl;
// // //         break;
// // //     case 1:
// // //         cout<<"yes today is monday"<<endl;
// // //         break;
// // //     case 2:
// // //         cout<<"yes today is tueseday"<<endl;
// // //         break;        

// // //     case 3:
// // //         cout<<"yes today is wednesday"<<endl;
// // //         break;

// // //         case 4:
// // //         cout<<"yes today is thursday"<<endl;
// // //         break;
// // //         case 5:
// // //         cout<<"yes today is friday"<<endl;
// // //         break;
// // //         case 6:
// // //         cout<<"yes today is saturday"<<endl;
// // //         

    
// //   //Q.----{CALCULATOR}
// //   #include<iostream>
// //   using namespace std;
// //   int main(){
// //     int n1,n2;
// //     cout<<"enter any two numbers for your specific task :";
// //     cin>>n1>>n2;
// //     char task;
// //     cout<<" now enter the task :";
// //     cin>>task;
// //     switch (task){
// //     case '+':
// //         cout<<"addition of yours number is :"<<(n1+n2)<<endl;
// //         break;
// //     case '-':
// //         cout<<"subtraction of yours number is :"<<(n1-n2)<<endl;
// //         break;
// //     case '*':
// //         cout<<"multiplication of yours number is :"<<(n1*n2)<<endl;
// //         break;
// //     case '/':
// //         cout<<"division of yours number is :"<<(n1/n2)<<endl;
// //     break;
// //     case '%':
// //         cout<<"modulos of yours number is :"<<(n1%n2)<<endl;
// //         break;    
// //     default:
// //     cout<<"this is not a specific task";
// //         break;
// //     }
// //     return 0;



// //   }

// //Q------(divided into ages)
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"enter your age :- ";
//     cin>>age;
//     if(age<18){
//         cout<<"you are a child";
//     }
//     else if(age<=18){
//         cout<<"you are teenager";
//     }
//     else if(age<=30){
//         cout<<"Great! you are youngman";
//     }
//     else if(age>30){
//         cout<<"most grateful-! you are miditaor ";
//     }
//     else{
//         cout<<"you are old";
//     }
//     return 0;
// }

// Q.
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter your number :";
//     cin>>num;
//     if((num%2==0) && (num%3==0)){
//         cout<<"the number is : "<<num<<endl;
//     }
//     return 0;
// }
// Q ----------- while loop
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your desired number :";
//     cin>>n;
//     int sum = 0;
//     int i = 1;
//     while (i<=n){
//         sum +=i;
//         i++;
//     }
//     cout<<sum<<endl;
//     return 0;

// }
//Q--------{for-loop} :-
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE DESIRED NUMBER";
    cin>>n; 
    int sum =0;
    for ( int i=1; i < n; i++) {
        sum +=i;
    }
    cout<<sum<<endl;
    return 0;
}