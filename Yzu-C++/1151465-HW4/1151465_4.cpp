#include <iostream>
using namespace std;
int p(int a){
    for(int i = 2; i < a; i++) {
        bool b =true;
        for(int x = 2; x < i; x++) {
            if(i % x == 0) {
                b=false;
                break;
            }
        }
        for(int j = 2; j < a; j++) {
            bool c=true;
            for(int y = 2; y < j; y++) {
                if(j % y == 0) {
                    c=false;
                    break;
                }
            }
            if(b&&c&&(i + j == a)&&(i>=j)) {
                cout << a << " = " << i << " + " << j << endl;
            }
        }
    }
    return 1;
}      
int main(){
    cout<<"Enter an even integer between 4 and 1000:";
    int a;
    cin>>a;
    p(a);
    return 0;
}