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
// #include <iostream>
// int main(){
//     int dividend, divisor, quotient, remainder;
//     std::cout<<"enter the dividend and divisor:"<<std::endl;
//     std::cin>>dividend>>divisor;
//     quotient=0;
//     remainder=dividend;
//     while (dividend>divisor){
//         dividend=dividend-divisor;
//         quotient=quotient+1;
//         remainder=dividend;
//     }
//     std::cout<<"The quotient is "<<quotient<<"."<<" The remainder is "<<remainder<<"."<<std::endl;
// }
// #include <iostream>
// #include <cmath>
// #include <string>
// int main(){
//     double a,b,c;
//     std::cout<<"please enter the lengths of sides of the triangle"<<std::endl;
//     std::cin>>a>>b>>c;
//     std::string type;
//     double perimeter, area;
//     bool validity;
//     validity=(a+b>c)&&(a+c>b)&&(b+c>a);
//     if (validity){
//         perimeter=a+b+c;
//         area=0.5*sqrt(std::pow(a*c,2)-pow((a*a+c*c-b*b)/2,2));
//         if ((a==b)&&(b==c)){
//             type="equilateral";
//         }
//         else if ((a==b)||(b==c)||(a==c)){
//             type="isosceles";
//         }
//         else {
//             type="scalene";
//         }
    
//     std::cout<<"the triange is "<<type<<" the perimeter is "<<perimeter<<" the area is"<<area<<std::endl;
//     }
//     else {
//     std::cout<<"invalid number"<<std::endl;
//     }
// }
// #include <iostream>
// int main(){
//     int x0,y0,x1,y1;
    
//     std::cout<<"please enter the initial coordinates of the knight"<<std::endl;
//     std::cin>>x0>>y0;
//     std::cout<<"please enter the final coordinates of the knight"<<std::endl;
//     std::cin>>x1>>y1;
//     if ((x0>=1)&&(x0<=8)&&(x1>=1)&&(x1<=8)&&(y0>=1)&&(y0<=8)&&(y1>=1)&&(y1<=8)){
//         if ((abs(y1-y0)==2)&&(abs(x1-x0)==1)){
//             std::cout<<"valid move"<<std::endl;
//         }
//         else if ((abs(x1-x0)==2)&&(abs(y1-y0)==1)){
//             std::cout<<"valid move"<<std::endl;
//         }
//         else{
//             std::cout<<"invalid move, agaisnt the rule of motion of knight"<<std::endl;
//         }
//     }
//     else {
//         std::cout<<"beyond the boundary of the board"<<std::endl;
//     }
//     }
// #include<iostream>
// int main(){
//     for(int i=0; i<7; i++){
//         std::cout<<i<<std::endl;
//     }
// }//0 1 2 3 4 5 6 will be printed
// #include<iostream>
// int main(){
//     int n;
//     double x, result=1;
//     std::cin>>x>>n;
//     result=x;
//     for(int i=1; i<n; i++){
//         result=result*x;
//     }
//     std::cout<<x<<"^"<<n<<"="<<result<<std::endl;
// }
// #include <iostream>
// int main(){
//     int n,result,k;
//     std::cin>>n;
//     if (n!=0){
//         result=n;
//         k=n;
//         for(int i=1; i<n;i++){
            
//             result=result*(k-1);
//             k=k-1;
//         }
//         std::cout<<n<<"! ="<<result<<std::endl;
//     }
//     else if (n==0){
//         std::cout<<n<<"! ="<<1<<std::endl;
//     }
// }
// #include <iostream>
// int main(){
//     for(int i = 0; i = 3; i++){
//         std::cout << "*" << std::endl;
//     }
//     std::cout << "x" << std::endl;
// }
// #include <iostream>
// int main(){
//     int n, i0, i1;
//     std::cin>>n;
//     i0=0; 
//     i1=0;
//     while(i0<n){
//         while (i1<n){
//             std::cout<<"x";
//             i1=i1+1;
//         }
//         std::cout<<std::endl;
//         i0=i0+1;
//         i1=0;
//     }
// }

// #include <iostream>
// #include <string>
// int main(){
//     int n,i2,i1,k;
//     std::cin>>n;
//     for (int i1=0; i1<n; i1++){
//         for (int i2=0; i2<n; i2++){
//             k=(i2+1)*(i1+1);
//             std::string ks=std::to_string(k);
//             std::cout<<ks<<"\t";
//         }
//         std::cout<<std::endl;
//     }
// }
// #include <iostream>
// int main(){
//     int n, curmax,curmin;
//     std::cout<<"please enter number:"<<std::endl;
//     std::cin>>n;
//     curmax=n;
//     curmin=n;
//     std::cout<<"maximum so far:"<<curmax<<std::endl;
//     std::cout<<"minimum so far:"<<curmin<<std::endl;
//     while (n!=0){
//         std::cout<<"please enter number:"<<std::endl;
//         std::cin>>n;
//         if (n>curmax){
//             curmax=n;
//         }
//         if (n<curmin){
//             curmin=n;
//         }
//         std::cout<<"maximum so far:"<<curmax<<std::endl;
//         std::cout<<"minimum so far:"<<curmin<<std::endl;
//     }
// }

// #include <iostream>
// int main(){
//     int n,i,k,max;
//     i=0;
//     std::cout<<"please enter the number"<<std::endl;
//     std::cin>>n;
//     max=n;
//     k=n;
//     std::cout<<k<<"\t";
//     while (k!=1){
//         if (k%2==0){
//             k=k/2;
//             std::cout<<k<<"\t";
//             i=i+1;
//         }
//         else{
//             k=k*3+1;
//             if (k>max){
//                 max=k;
//             }
//             std::cout<<k<<"\t";
//             i=i+1;
//         }
//     }
//     std::cout<<"the maximum during operation is "<<max<<"  the number of steps is "<<i<<std::endl;
// }
        
// #include <iostream>
// #include <cmath>
// int main(){ 
//     int n, i,k;
//     bool factor=true;
//     std::cout<<"please enter a number"<<std::endl;
//     std::cin>>n;
//     i=2;
//     k=n;
    
//      while((i<=std::sqrt(n))&&(factor)){
//             if (n%i==0){
//                 factor=false;
//             }
//             i=i+1;
//         }
// if (factor==false){
//     std::cout<<"not prime"<<std::endl;
// }

// else{
//     std::cout<<"prime"<<std::endl;
// }
// }
            
            





// #include <iostream>
// int main(){
//     int n = 5, k = 3, r = 0;
//     for(int i = 0; i < n + k; i++){
//         for(int j = 0; j < i; j++){
//             k = k - 1;
//             r++;
//         }
//     }
//     std::cout << r << std::endl;
// }
            



        







