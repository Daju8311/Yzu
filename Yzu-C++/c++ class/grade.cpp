#include <iostream>
using namespace std;
struct student{
string id;
string name;
int Chinese;
int English;
int Math;
double average;
};
int main() 
{
    student a[2]{
        {"A0001","Rose",90,80,82},
        {"A0002","Jack",80,80,83}
    };
    a[0].average=(a[0].Chinese+a[0].English+a[0].Math)/3;
    a[1].average=(a[1].Chinese+a[1].English+a[1].Math)/3;
    if(a[0].average>a[1].average){
        cout<<"姓名:"<<a[0].name<<"\n學號:"<<a[0].id<<"\n分數:"<<a[0].average
    ;}
    else{
        cout<<"姓名:"<<a[1].name<<"\n學號:"<<a[1].id<<"\n分數:"<<a[1].average
    ;}
    return 0;
}