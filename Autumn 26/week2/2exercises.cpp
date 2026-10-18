// #include <iostream>
// int main(){
//     int n,rem;
//     std::cout<<"please enter a number"<<std::endl;
//     std::cin>>n;
//     rem=n%3;
//     if (rem==0){
//         std::cout<<"the number is a multple of 3"<<std::endl;
//     }
//     else{
//         std::cout<<"the number is not a multple of 3"<<std::endl;
//     }
// }
// #include <iostream>
// int main(){
//     int n, rem;
//     std::cout<<"please enter a number"<<std::endl;
//     std::cin>>n;
//     rem=n%2;
//     bool is_even;
//     is_even=(rem==0);
//     if(is_even){
//         std::cout<<"the number is even"<<std::endl;
//     }
//     else{
//         std::cout<<"the number is odd"<<std::endl;
//     }
// }
// #include <iostream>
// int main(){
//     double n, absv;
//     std::cout<<"please input the number"<<std::endl;
//     std::cin>>n;
//     if(n<0){
//         absv=-n;
//     }
//     else{
//         absv=n;
//     }
//     std::cout<<"the absolute value of "<<n<<" is "<<absv<<"."<<std::endl;
    
// }
// #include <iostream>
// int main(){
//     int year;
//     std::cout<<"please enter the year"<<std::endl;
//     std::cin>>year;
//     if ((year%4)==0){
//         if ((year%100)==0){
//             if ((year%400)==0){
//                 std::cout<<"leap year"<<std::endl;
//             }
//             else {
//                 std::cout<<"not leap year"<<std::endl;
//             }
//         }
//             else{
//             std::cout<<"leap year"<<std::endl;
//         }
        
//     }
//     else{
//         std::cout<<"not leap year"<<std::endl;
//     }
// }

// #include <iostream>
// #include <string>

// int main(){

//     double length_in, length_out;
//     std::string unit_in, unit_out;

//     // we declare variables for the input and the output
//     // the length is a number, the unit name is text

//     const double mile_to_km = 1.609;
//     // useful way to define constants

//     std::cin >> length_in >> unit_in;
//     // we don't print a prompt, we just read the input

//     if(unit_in == "km"){
//         unit_out = "mile";
//         length_out = length_in / mile_to_km;
//     }
//     else{
//         unit_out = "km";
//         length_out = length_in * mile_to_km;
//     }

//     std::cout << length_out << " " << unit_out << std::endl;
// }
// #include <iostream>
// #include <string>
// int main(){
//     double t_in, t_out;
    

//     std::string unit_in, unit_out;
//     std::cin>>t_in>>unit_in;
//     if(unit_in=="C"){
//         unit_out="F";
//         t_out=t_in*1.8+32;
//         std::cout<<t_out<<unit_out<<std::endl;
//     }
//     else if(unit_in=="F"){
//         unit_out="C";
//         t_out=(t_in-32)/1.8;
//         std::cout<<t_out<<unit_out<<std::endl;
//     }
//     else{
//         std::cout<<"error"<<std::endl;
//     }
// }
#include <iostream>
#include <string>
int main(){
    double t_in, t_out;
    std::string unit_in, unit_out;
    std::cin>>t_in>>unit_in;
    bool valid_unit=true;
    if ((unit_in=="c")||(unit_in=="C")){
        unit_out="F";
        t_out=t_in*1.8+32;
    }
    else if((unit_in=="f")||(unit_in=="F")){
        unit_out="C";
        t_out=(t_in-32)/1.8;
    }
    else{
        valid_unit=false;
    }
    if(valid_unit){
        std::cout<<t_out<<" "<<unit_out<<std::endl;
    }
    else{
        std::cout<<"error, unit not recognised"<<std::endl;
    }
}
