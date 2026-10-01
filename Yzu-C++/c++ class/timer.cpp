#include <iostream>
#include <chrono>
#include <limits>
using namespace std;
using namespace std::chrono;
int main(){
    long long m=numeric_limits<long long>::max();
    long long a=0;
    long long b=0;
    auto start=high_resolution_clock::now();

    while(m-b>a+1){
        a++;
        b+=a;
    }
    auto end=high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(end-start);
    cout<<"m="<<a<<endl;
    cout<<"1+2+3+...+m="<<b<<endl;
    cout<<"最大 long long 整數"<<m<<endl;
    cout<<"執行時間:"<<duration.count()<<"毫秒";
}