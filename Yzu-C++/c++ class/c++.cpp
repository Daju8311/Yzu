#include <iostream>
using namespace std;
int a;
int b;
int c;
int main() {
    while(c<100){
        cout << "請輸入第"<<b+1<<"個數字：";
    cin >> a;
    b++;
    if(c<100){
        c=c+a;
        if(c<100){
         cout << "目前總和：" <<c<< endl;
        }
        else{
      cout << "完成！總共輸入了" << b << "次" <<"，總和為" <<c<< endl;
    }    
    }
    }

    return 0;
}