// #include <iostream>
// int main(){
//     int n, rem;
//     std::cout<<"please enter a number"<<std::endl;
//     std::cin>>n;
//     rem=n%2;
//     std::cout<<"in the following line o means even and 1 means odd"<<std::endl;
//     std::cout<<rem<<std::endl;
// }
// #include <iostream>

// int main(){
//     std::cout << 5.0 / 2.0 << std::endl;
// }
// #include <iostream>
// int main(){
//     double a, b, area, perimeter;
//     std::cout<<"please enter the length of a side of the rectangle"<<std::endl;
//     std::cin>>a;
//     std::cout<<"please enter the length of the other side of the rectangle"<<std::endl;
//     std::cin>>b;
//     perimeter=2*(a+b);
//     area=a*b;
//     std::cout<<"the area of the rectangle is "<<area<<". the perimenter of the rectangle is "<<perimeter<<std::endl;
// }
// #include <iostream>
// int main(){
//     double GBP, EUR, rate;
//     std::cout<<"please enter the amount of British Pounds"<<std::endl;
//     std::cin>>GBP;
//     std::cout<<"please enter the exchange rate"<<std::endl;
//     std::cin>>rate;
//     EUR=GBP*rate;
//     std::cout<<"the equivalent amount of euros are "<<EUR<<std::endl;
// }
// #include <iostream>
// int main(){
//     double tc, tf;
//     std::cout<<"please enter the temperature in celcius"<<std::endl;
//     std::cin>>tc;
//     tf=tc*1.8+32;
//     std::cout<<"the Fahrenheit temperature is "<<tf<<std::endl;

// }

#include <iostream>
#include <cmath>
int main(){
    double h, m, BMI;
    std::cout<<"please enter your weight in kg"<<std::endl;
    std::cin>>m;
    std::cout<<"please enter your height in m"<<std::endl;
    std::cin>>h;
    BMI=pow(h, 2)/m;
    std::cout<<"your BMI is "<<BMI<<std::endl;
}50