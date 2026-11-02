// #include <iostream>
// #include <cmath>

// int main(){
//     double n;
//     std::cout<<"please enter a number"<<std::endl;
//     std::cin>>n;
//     std::cout<<"|"<<n<<"|="<<std::abs(n)<<std::endl;
// }
// #include <iostream>
// double myabs(double i){
//     double r;
//     if (i<0){
//         r=-i;
//     }
//     else{
//         r=i;
//     }
//     return r;
// }
// int main(){
//     double n;
//     std::cout<<"please enter a number"<<std::endl;
//     std::cin>>n;
//     std::cout<<"|"<<n<<"|="<<myabs(n)<<std::endl;
// }

// #include<iostream>
// #include<cmath>
// double sopw(double x, double n){
//     double sum=0;
//     for(int i=1;i<=n;i=i+1){
//         sum=sum+std::pow(x,i);
//     }
//     return sum;
// }
// int main(){
//     double x, n;
//     std::cout<<"please enter the number and power"<<std::endl;
//     std::cin>>x>>n;
//     std::cout<<"sum of powers of "<<n<<"is "<<sopw(x,n)<<std::endl;
// }

// #include<iostream>
// #include<cmath>

// double mypow(double base, int exp){
//     double result=1;
//     if (exp>=0){
//         for (int i=0; i<exp; i=i+1){
//             result=result*base;
//         }
//     }
//     else{
//         for (int i=0; i<-exp; i=i+1){
//             result=result/base;
//         }
//     }
//     return result;
// }
// double sopw(double x, double n){
//    double sum=0;
//     for(int i=1;i<=n;i=i+1){
//         sum=sum+mypow(x,i);
//     }
//     return sum;
// }
// int main(){
//     std::cout << "x=2;n=3: " << sopw(2, 3) << std::endl;
//     std::cout << "x=0.5;n=2: " << sopw(0.5, 2) << std::endl;
//     std::cout << "x=1;n=1: " << sopw(1, 1) << std::endl;
//     std::cout<<"x=2;n=3: "<<sopw(2,3)<<std::endl;

// }

// #include <iostream>
// int myfactorial(int in){
//     int fact=in;
//         int k=in;
//         for(int i=1;i<in;i=i+1){
//             fact=fact*(k-1);
//             k=k-1;
//         }
//         return fact;
// }
// int main(){
//     int n; 
//     std::cout << "please enter a number" << std::endl;
//     std::cin >> n;
//     std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
// }
#include <iostream>

// we can define a function that returns a bool

// bool leap_year(int year){
//     bool ly;
//     if (year%4!=0){
//         ly=false;

//     }
//     else if(year%4==0){
//         if (year%100!=0){
//             ly=true;
//         }
//         else if(year%400==0){
//             ly=true;
//         }
//         else{
//             ly=false;
//         }
//     }
//     return ly;
// }

// int main(){

//     int input_year;

//     std::cout << "please enter a year" << std::endl;
//     std::cin >> input_year;

//     // a function returning a bool 
//     // can be used directly in the condition
//     // of an if statement 

//     if(leap_year(input_year)){
//         std::cout << "it's a leap year" << std::endl;
//     }
//     else{
//         std::cout << "it's not a leap year" << std::endl;
//     }
// }

// #include <iostream>
// double max_num(double n1, double n2){
//     double max;
//     if (n1>n2){
//         max=n1;
//     }
//     else if (n1<n2){
//         max=n2;
//     }
// return max;
// }
// int main(){
//     std::cout<<"please enter two numbers"<<std::endl;
//     double n1, n2;
//     std::cin>>n1>>n2;
//     std::cout<<"the larger number is"<<max_num(n1, n2)<<std::endl;


// }

// #include <iostream>
// double max_num(double n1, double n2, double n3){
//     double max;
//     if ((n1>n2)&&(n1>n3)){
//         max=n1;
//     }
//     else if ((n2>n1)&&(n2>n3)){
//         max=n2;
//     }
//     else if ((n3>n2)&&(n3>n1)){
//         max=n3;
//     }
//     return max;3
// }
// int main(){
//     double n1, n2, n3;
//     std::cout<<"please enter three numbers"<<std::endl;
//     std::cin>>n1>>n2>>n3;
//     std::cout<<"the max is "<<max_num(n1,n2,n3)<<std::endl;



// }
// #include <iostream>
// int main(){
//     int n1, n2;
//     std::cout<<"please enter two values"<<std::endl;
//     std::cin>>n1>>n2;
//     std::cout<<"you entered:"<<std::endl;
//     std::cout<<"n1: "<<n1<<std::endl;
//     std::cout<<"n2: "<<n2<<std::endl;
//     int tmp;
//     tmp=n1;
//     n1=n2;
//     n2=tmp;
//     std::cout<<"after swapping the values:"<<std::endl;
//     std::cout<<"n1: "<<n1<<std::endl;
//     std::cout<<"n2: "<<n2<<std::endl;
// }
// wrong version!
#include <iostream>

// type void means we are not returning anything

// this won't work!
// void myswap(int n1, int n2){
//     int tmp;
//     tmp = n1;
//     n1 = n2;
//     n2 = tmp;
// }

// int main(){
//     int n1, n2;

//     std::cout << "please enter two values" << std::endl;
//     std::cin >> n1 >> n2;

//     std::cout << "you entered:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

//     myswap(n1, n2);

//     std::cout << "after swapping the values:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;
// }

//   #include <iostream>

// // this is the only different line:
// void myswap(int& n1, int& n2){

//     int tmp;
//     tmp = n1;
//     n1 = n2;
//     n2 = tmp;

// }

// int main(){
//     int n1, n2;

//     std::cout << "please enter two values" << std::endl;
//     std::cin >> n1 >> n2;

//     std::cout << "you entered:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

//     myswap(n1, n2);

//     // when the function is called here
//     // the n1 in myswap becomes just a different name
//     // for the n1 in the main
//     // (same for n2)

//     std::cout << "after swapping the values:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;
// }  
// #include <iostream>
// #include <string>
// void myswap(std::string& a, std::string& b){
//     std::string tmp;
//     tmp=a;
//     a=b;
//     b=tmp;
// }
// int main(){
//     std::string n1, n2;

//     std::cout << "please enter two values" << std::endl;
//     std::cin >> n1 >> n2;

//     std::cout << "you entered:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

//     myswap(n1, n2);
//     // here a becomes another name for n1
//     // while b becomes another name for n2

//     // it's just about the position/order in the parentheses:
//     // n1 is passed to the first parameter (a)
//     // n2 is passed to the second parameter (b)

//     std::cout << "after swapping the values:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;
// }
// #include <iostream>
//  void sort_three_numbers(double& s1, double& s2, double& s3){
//     int a,b,c;
//     a=s1;
//     b=s2;
//     c=s3;
//     if (s1>s2){
//         s1=b;
//         s2=a;
//     }
//     if (s2>s3){
//         s2=c;
//         s3=a;
//     }
//     if (s1>s2){
//         s1=c;
//         s2=b;
//     }

//  }
// int main(){
//     double n1, n2,n3;
//     std::cout << "please enter three numbers:" << std::endl;
//     std::cin >> n1 >> n2>>n3;
//     sort_three_numbers(n1, n2,n3);
//     std::cout << n1 << " " << n2 <<" "<<n3<< std::endl;
// }
// #include <iostream>
// #include <cmath>
// // for the square root

// bool quadsolve(double a, double b, double c, double& x1, double& x2){

//     bool realsol;
//     double delta = b*b - 4 * a * c;

//     if(delta < 0){
//         realsol = false;
//     }
//     else{

//         realsol = true;
//         x1 = (-b + std::sqrt(delta)) / (2 * a);
//         x2 = (-b - std::sqrt(delta)) / (2 * a);

//         // function sqrt computes the square root
//         // more legible and sometimes more efficient
//         // than using e.g. std::pow(delta, 0.5)

//     }

//     return realsol;
// }

// int main(){

//     double a, b, c;
//     // it is just a coincidence that these variables are named
//     // like the function parameters, they could have a different name

//     std::cout << "this program finds the real solutions" << std::endl;
//     std::cout << "of an equation of the form ax^2 + bx + c = 0" << std::endl;
//     std::cout << "please enter the coefficients a, b, c:" << std::endl;

//     std::cin >> a >> b >> c;

//     double s1, s2;
//     // we pass these variables uninitialised to the function
//     // because the values will be provided in output 
//     // by the function

//     if(quadsolve(a, b, c, s1, s2)){
//         std::cout << "the solutions are:" << std::endl;
//         std::cout << s1 << std::endl;
//         std::cout << s2 << std::endl;
//     }
//     else{
//         std::cout << "there are no real solutions" << std::endl;
//     }

// }
// #include <iostream>

// bool recta(double a, double b, double&p, double&ar){
//     bool rect;
    
//     if((a<=0)||(b<=0)){
//         rect=false;
//     }
//     else{
//         rect=true;
//         p=2*(a+b);
//         ar=a*b;
//     }
//     return rect;

// }
// int main(){;
//     double a,b;
//     std::cin>>a>>b;
//     double p, ar;
//     if(recta(a, b, p, ar)){
//         std::cout<<"the area and perimeter are"<<std::endl;
//         std::cout<<ar<<std::endl;
//         std::cout<<p<<std::endl;


//     }
//     else{
//         std::cout<<"invalid input"<<std::endl;
//     }
// }
// #include <iostream>
// bool itgdv(int dividend, int divisor, int&quotient, int&remainder){
//     bool itgd;
//     if (divisor==0){
//         itgd=false;
//     }
//     else{
//         itgd=true;
//         quotient=dividend/divisor;
//         remainder=dividend%divisor;

//     }
//     return itgd;
// }
// int main(){
//     int dividend, divisor;
//     std::cin>>dividend>>divisor;
//     int quotient, remainder;
//     if (itgdv(dividend,divisor,quotient,remainder)){
//         std::cout<<dividend<<"/"<<divisor<<"="<<quotient<<"--"<<remainder<<std::endl;
//     }
//     else{
//         std::cout<<"the divisor cannot be zero"<<std::endl;

//     }

//     }
// #include <iostream>

// bool leap_year(int year){
//     bool ly;
//     if (year%400==0){
//         ly=true;
//     }
//     else if((year%4==0)&&(year%100!=0)){
//         ly=true;
//     }
//     else{
//         ly=false;
//     }
//     return ly;


    // TODO: check whether the year is a leap year or not
    // store result in variable ly

// }

// void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
//     d2=d1+1;
//     m2=m1;
//     y2=y1;
//     if((d2==31)&&(m1== 4 || m1== 6 || m1== 9 || m1== 11)){
//         d2=1;
//         m2=m1+1;
    

//     }
//     else if((d2==32)&&(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)){
//         d2=1;
//         m2=m1+1;

//         if (m2==13){
//             m2=1;
//             y2=y1+1;
            
//         }
//     }
//     else if((m1==2)&&(leap_year(y1))){
//         if (d2==30){
//             m2=3;
//             d2=1;
//         }
//     }
//     else if((m1==2)&&(!leap_year(y1))){
//         if (d2==29){
//             m2=3;
//             d2=1;
//         }
//     }
//     else{
//         m2=m1;
//         y2=y1;
//     }
//     }



    

//     // TODO: d1, m1, y1 are inputs 
//     // corresponding to the date d1/m1/y1
//     // d2, m2, y2 are outputs that the function must compute
//     // corresponding to the date d2/m2/y2 
//     // which is meant to be the day after d1/m1/y1

//     // function leap_year is useful for this task

//     // do not begin to write code straightaway
//     // sketch some diagrams first like we did
//     // for the leap year task

//     // (this function should not print anything)




// int main(){
//     int d1, m1, y1, d2, m2,y2;
//     std::cin>>d1>>m1>>y1;
//     next_date(d1,m1,y1,d2,m2,y2);
//     std::cout<<"the next day is"<<d2<<","<<m2<<","<<y2<<std::endl;


//     // TODO: write a main to test the function


// #include <iostream>

// int f(){
//     std::cout << "this is function f" << std::endl;
//     return 1;
//     std::cout << "printing after the first return statement" << std::endl;
//     return 2;
//     std::cout << "printing after the second return statement" << std::endl;
// }

// int main(){
//     int n = 0;
//     n = f();
//     std::cout << "n is: " << n << std::endl; 
// }
// #include <iostream>

// bool even_or_odd(int n){

//     bool out; 

//     if( (n % 2) == 0){
//         out = true;
//     }
//     else{
//         out = false;
//     }

//     return out;
// }


// bool even_or_odd_two_ret(int n){

//     if( (n % 2) == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// bool even_or_odd_two_ret_wrong(int n){

//     if( (n % 2) == 0){
//         return true;
//     }
//     // undefined behaviour if input is odd number
// }

// bool even_or_odd_wrong(int n){

//     bool out;

//     if( (n % 2) == 0){
//         out = true;
//     }
//     else{
//         out = false;
//     }

//     // undefined behaviour
// }

// int main(){

//     std::cout << even_or_odd(2) << std::endl;
//     std::cout << even_or_odd(3) << std::endl;

//     std::cout << even_or_odd_two_ret(2) << std::endl;
//     std::cout << even_or_odd_two_ret(3) << std::endl;

//     std::cout << even_or_odd_two_ret_wrong(2) << std::endl;
//     std::cout << even_or_odd_two_ret_wrong(3) << std::endl;

//     std::cout << even_or_odd_wrong(2) << std::endl;
//     std::cout << even_or_odd_wrong(3) << std::endl;
// }

// int smallest_factor(int n){
//     for(int cf = 2; cf < n; cf++){

//         if( (n % cf) == 0){ // n can be divided by cf...
//             return cf;
            
//             //...it means we have found a factor!
//         }
    

//     }
//     return 0;
// }
// int main(){
//     int n;
//     std::cin>>n;
//     std::cout<<smallest_factor(n)<<std::endl;



// }
bool isprime(int n){
    bool dt;
    dt=false;
    for(int i=2; i<n; i=i+1){
        if (n%i==0){
            return dt;
        }
    }
    dt=true;
    if ((n==0)||(n==1)){
        dt=false;
    }
    return dt;
}

int main(){
    int n1, n2;
    std::cin>>n1>>n2;
    int n=n1, i=2;
    while ((n<=n2)){
        if (isprime(n)){
            std::cout<<n<<std::endl;

        }
        n=n+1;

        
        

    }

    }
