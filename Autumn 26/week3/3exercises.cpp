// #include<iostream>
// int main(){
//     int n, i=0;
//     std::cin>>n;
//     while(i<n){
//     std::cout<<"hello"<<std::endl;
//     i=i+1;
//     }
// }
// #include <iostream>
// int main(){
//     int n=4, counter=0;
//     while(counter<n){
//         std::cout<<counter<<std::endl;
//         counter=counter+1;
//     }
// }//the output should be 0 1 2 3
// #include <iostream>
// int main(){
//     double x, acc=1;
//     int n, counter=0;
//     std::cin>>x>>n;
//     while(counter<n){
//         acc=acc*x;
//         counter=counter+1;
//     }
//     std::cout<<x<<"^"<<n<<"="<<acc<<std::endl;
// }
// #include <iostream>
// int main(){
//     double x, acc=0;
//     int n, counter=0;
//     std::cin>>x>>n;
//     while (counter<n){
//         acc=acc+x;
//         counter=counter+1;
//     }
//     std::cout<<x<<"*"<<n<<"="<<acc<<std::endl;
// }
// #include <iostream>
// int main(){
//     int n;
//     std::cin>>n;
//     while((-11<n)&&(n<11)){
//         std::cout<<n<<std::endl;
//         std::cin>>n;
//     }
// }
// #include <iostream>
// #include <string>
// int main(){
//     std::string n, instruction;
//     std::cin>>n;
//     while (instruction!="STOP"){
//         std::cout<<n<<std::endl;
//         std::cin>>instruction;
//     }
// }

// #include <iostream>
// #include <string>
// int main(){
//     std::string n, input;
//     bool instruction;
//     instruction=true;
//     std::cin>>n;
//     while (instruction){
//         std::cout<<n<<std::endl;
//         std::cin>>input;
//         if (input=="STOP"){
//             instruction=false;
//         }
//         else if (input=="Stop"){
//             instruction=false;
//         }
//         else if (input=="stop"){
//             instruction=false;
//         }
//         else{
//             instruction=true;
//         }
//     }
// }

// #include <iostream>
// #include <string>
// int main(){
//     int input, sum;
//     sum=0;
//     while (input!=0){
//         std::cout<<"enter a number:"<<std::endl;
//         std::cin>>input;
//         sum=sum+input;
//         std::cout<<"the sum so far is:"<<std::endl;
//         std::cout<<sum<<std::endl;
//     }
// }
// #include <iostream>
// #include <string>
// int main(){
//     int input, count;
//     count=1;
//     double average, sum;
//     sum=0;
//     while (input!=0){
//         std::cout<<"enter a number:"<<std::endl;
//         std::cin>>input;
//         sum=sum+input;
//         average=sum/count;
//         count=count+1;
//         std::cout<<"the average so far is:"<<std::endl;
//         std::cout<<average<<std::endl;
//     }
// }
#include <iostream>
int main(){
    int dividend, divisor, quotient, remainder;
    std::cout<<"enter the dividend and divisor:"<<std::endl;
    std::cin>>dividend>>divisor;
    quotient=0;
    remainder=dividend;
    while (dividend>divisor){
        dividend=dividend-divisor;
        quotient=quotient+1;
        remainder=dividend;
    }
    std::cout<<"The quotient is "<<quotient<<"."<<" The remainder is "<<remainder<<"."<<std::endl;
}