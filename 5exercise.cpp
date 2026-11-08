// #include <iostream>
// #include <vector>
// // this header is needed to use vectors

// int main(){
//     std::vector<int> v; 
//     // we declare a vector
//     // the <> contain the type
//     // for each cell of the vector
//     // initially the vector is empty:
//     // v: []

//     // we can then start adding elements to the vector
//     // this can be done using function push_back:

//     v.push_back(10);

//     // so now the vector contains one element:
//     // v: [10]

//     // let's add another element:

//     v.push_back(20);

//     // now the vector contains two elements:
//     // v: [10, 20]

//     // a key intuition about vectors is that the elements can be *indexed*
//     // the first element has index 0, and so on 
//     // up to (size of the vector - 1)
//     // v:
//     // value: |10|20|
//     // index: | 0| 1|

//     // we can index using square brackets, for example
//     // if we want to print the first element we do the following:

//     std::cout << v[0] << std::endl;
//     // this will print 10

//     // if we want to print the second element we do the following:

//     std::cout << v[1] << std::endl;
//     // this will print 20

//     // we can also use indexing to overwrite the value of cells:

//     v[0] = 15;

//     // v:
//     // value: |15|20|
//     // index: | 0| 1|

//     std::cout << v[0] << std::endl;
//     // this will print 15

//     // however we can't use indexing
//     // to access or store values in cells that don't exist
//     // for example in this case writing:

//     // v[2] = 30;

//     // or

//     // std::cout << v[4] << std::endl;

//     // would be a mistake
//     // because there are no cells for indices 2 or 4 
//     // (confusingly enough the program may or may not crash)

//     // the vector grows using push_back as seen above

//     v.push_back(30);

//     // v:
//     // value: |15|20|30|
//     // index: | 0| 1| 2|

//     // we can always check how many cells there are
//     // by using function size():

//     std::cout << v.size() << std::endl;
//     // this will print 3

//     // we can't print the whole vector at once!
//     // the following line:
//    // std::cout << v << std::endl; 
//     // would not work!

// }

// #include<iostream>
// #include<vector>
// int main(){
//     double a1, a2, a3;
//     std::vector<double>v;
//     std::cout<<"please input the first element"<<std::endl;
//     std::cin>>a1;
//     std::cout<<"please input the second element"<<std::endl;
//     std::cin>>a2;
//     std::cout<<"please input the third element"<<std::endl;
//     std::cin>>a3;
//     v.push_back(a1);
//     v.push_back(a2);
//     v.push_back(a3);
//     std::cout<<v[0]*(v[1]+v[2])<<std::endl;

    


// }
// #include <iostream>
// #include <vector>

// int main(){
//     std::vector<int> sequence;
//     int tmp = 1;
//     // initialised to anything other than 0 to enter the loop the first time

//     std::cout << "please enter a sequence terminated by 0" << std::endl;
//     while(tmp != 0){ // while the number in input is not 0...
//         std::cin >> tmp; // we read a number
//         sequence.push_back(tmp); // we store the number in the vector
//     }

//     std::cout << "you entered the following sequence" << std::endl;

//     // in order to print the vector we need 
//     // to print it one element at a time
//     // so we need to index it

//     // i is the variable we use in this loop for the indexing of the vector
//     // it starts at 0 and increases by 1 at each iteration
//     // when the index reaches the size of the vector we leave the loop
//     // valid indices are 0 to (sequenze.size() - 1)

//     for(int i = 0; i < sequence.size(); i++){

//         std::cout << sequence[i] << std::endl;
//     }

//     std::cout << "in reverse order:" << std::endl;

//     // this time the first value for i is 
//     // the index of the last element 
//     // which is at index (sequence.size() - 1)
//     // i decreases by i at each iteration
//     // when it reaches value 0 we need to stay in the loop
//     // because 0 is still a valid index

//     for(int i = sequence.size() - 1; i >= 0; i--){
//         std::cout << sequence[i] << std::endl;
//     }

// }

// #include <iostream>
// #include <vector>

// int main(){
//     std::vector<int> v; 

//     v.push_back(10);
//     v.push_back(20);

//     std::cout << v.at(0) << std::endl;
//     // this will print 10

//     std::cout << v.at(1) << std::endl;
//     // this will print 20

//     v.at(1) = 15;

//     std::cout << v.at(1) << std::endl;
//     // this will print 15

//     v.at(2) = 2;
//     // this will throw an exception

//     std::cout << v.at(2) << std::endl;
//     // this will not be executed

// }

// #include <iostream>
// #include <vector>
// int main(){
//     std::vector<int>v;
//     int n;
//     std::cout<<"please enter n"<<std::endl;
//     std::cin>>n;
//     for (int i=0; i<n; i++){
//         std::cout<<"please enter a number"<<std::endl;
//         int a;
//         std::cin>>a;
//         v.push_back(a);

//     }
//     int t;
//     std::cout<<"please enter t"<<std::endl;
//     std::cin>>t;
    
//     for (int i1=0; i1<n; i1++){
//         if (v.at(i1)<t){
//             std::cout<<v.at(i1)<<std::endl;
//         }

//     }
// }
// #include <iostream>
// #include <vector>
// int main(){
//     std::vector<int>v;
//     std::vector<int>v2;
//     int n;
//     std::cout<<"please enter n"<<std::endl;
//     std::cin>>n;
//     for (int i=0; i<n; i++){
//         std::cout<<"please enter a number"<<std::endl;
//         int a;
//         std::cin>>a;
//         v.push_back(a);

//     }
//     int s;
//     std::cout<<"please enter s"<<std::endl;
//     std::cin>>s;
//     int k=0;
//     for (int i1=0; i1<n; i1++){
//         if (v.at(i1)==s){
//             v2.push_back(i1);
//             k=k+1;
//         }
    
//     }
//     if (k==0){
//         std::cout<<"there are no occurrence of "<<s<<std::endl;
//     }
//     else{
//         std::cout<<"there are "<<k<<" occurrences of "<<s<<"at indexes:"<<std::endl;
//     }
//     for (int i1=0; i1<k; i1++){
        
//         std::cout<<v2.at(i1)<<std::endl;
//         }
    

// }
// #include <iostream>
// #include <vector>

// // maybe not the most efficient way:
// double sum_vector(std::vector<double> vin){

//     double sum = 0;

//     for(int i = 0; i < vin.size(); i++){
//         sum = sum + vin[i];
//     }

//     return sum;

// }

// int main(){
//     std::vector<double> v; 
//     int n;
//     std::cout<<"please input the number of elements"<<std::endl;
//     double x;
//     std::cin>>n;
//     for(int i=0; i<n; i++){
//         std::cout<<"please input the"<<i+1<<"element"<<std::endl;
//         std::cin>>x;
//         v.push_back(x);


//     }

    

//     std::cout << "the sum is: " << sum_vector(v) << std::endl;

// }
// #include <iostream>
// #include <vector>

// // note: const before std::vector<double>
// // and the & afterwards

// double sum_vector(const std::vector<double>& vin){

//     double sum = 0;
    

//     for(int i = 0; i < vin.size(); i++){
//         sum = sum + vin[i];
//     }

//     return sum;

// }

// int main(){
//     std::vector<double> v;

//     v.push_back(3);
//     v.push_back(0.5);
//     v.push_back(-1);

//     std::cout << "the sum is: " << sum_vector(v) << std::endl;

// }
// #include <iostream>
// #include <vector>
// #include <cmath>

// double sum_vector(const std::vector<double>& vin){

//     double sum = 0;

//     for(int i = 0; i < vin.size(); i++){
//         sum = sum + vin[i];
//     }

//     return sum;

// }

// int main(){
//     std::vector<double> v{3, 0.5, -1};
//     // we can initialise vectors like this (no = needed)

//     double expected_sum = 2.5;
//     // we may think of writing:
//     // std::cout << (sum_vector(v) == 2.5) << std::endl;
//     // but we shouldn't compare non-integers using ==
//     // as the representation can be approximated

//     std::cout << (std::abs(sum_vector(v)) - expected_sum) << std::endl;
//     // the test will be passed if we see 0 or a very small number

//     v = {2, -1.1, 7, -1.5};
//     // we can also assign values like this

//     expected_sum = 6.4;

//     std::cout << (std::abs(sum_vector(v)) - expected_sum) << std::endl;

// }
// #include <iostream>
// #include <vector>
// #include <cmath>
// int min_vector_element(const std::vector<double>& vin){
//     double min=vin[0];
//     int minin=0;
//     if (vin.size()==0){
//         return -1;
//     }
//     for (int i=0; i<vin.size();i++){
//         if(min>vin[i+1]){
//             min=vin[i+1];
//             minin=i+1;
//         }
//     }
//     return minin;
//     }

// int main(){
//     std::vector<double> v{4,1,2.2,-7};
//     std::cout<<min_vector_element(v)<<std::endl;
// }
// #include <iostream>
// #include <vector>
// #include <cmath>
// int search_vector(int n, const std::vector<double>& vin){
    
//     for(int i=0;i<vin.size();i++){
//         if (n==vin[i]){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     std::vector<double> v{3,2,6,7.8,-9};
//     std::cout<<search_vector(-9,v);
// }


// #include <iostream>
// #include <vector>


// void from_1_to_n(int n, std::vector<int>& vout){

//     for(int i = 0; i < n; i++){
//         vout.push_back(i+1);
//     }

// }

// int main(){
//     std::vector<int> v;

//     from_1_to_n(6, v);

//     for(int i = 0; i < v.size(); i++){
//         std::cout << v[i] << std::endl;
//     }

// }
// #include <iostream>
// #include <vector>


// void from_1_to_n(int n, std::vector<int>& vout){

//     for(int i = 0; i < n; i++){
//         vout.push_back(i+1);
//     }

// }

// int main(){
//     // this program will not work as expected...
//     std::vector<int> v;

//     for(int n = 3; n < 7; n++){
//         // v.clear();
//         from_1_to_n(n, v);

//         std::cout << "printing vector:" << std::endl;
//         for(int i = 0; i < v.size(); i++){
//             std::cout << v[i] << std::endl;
//         }
//     }
// }
// #include <iostream>
// #include <vector>
// void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
//     vout=vin1;
//     for(int n=0; n<vin2.size(); n++){
//         vout.push_back(vin2[n]);
//      }
// }
// int main(){
//     std::vector<int>v1={1,2,5,65};
//     std::vector<int>v2={3,4,2,1};
//     std::vector<int>vout;
//     append_vectors(v1,v2,vout);
//     for(int i = 0; i < vout.size(); i++){
//     std::cout << vout[i] << std::endl;
//     }
// }
// #include <iostream>
// #include <vector>
// void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
//     for(int i=0; i<vin.size();i++){
//         if(vin[i]<t){
//             vout.push_back(vin[i]);
//         }
//     }

// }
// int main(){
//     std::vector<double>v={1,4,5.3,4.7,-9};
//     std::vector<double>vout;
//     filter_v(v,2,vout);
//     for(int i = 0; i < vout.size(); i++){
//  std::cout << vout[i] << std::endl;
// }
// }