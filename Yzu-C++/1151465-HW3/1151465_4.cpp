#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main() {
    srand(time(0));
    int randomNum = rand() % 9000 + 1000; 
    string randomNumStr = to_string(randomNum);
    while (true){
        cout<<"Enter your guess:"<<endl;
        string a;
        cin >> a;
        if (a.length() != 4) {
            cout << "Please enter a 4-digit number." << endl;
            continue;
        }
        int A =0;
        int B=0;
        for (int i = 0; i < 4; i++) {
            if (a[i] == randomNumStr[i]) {
                A++;
            }
            else{
                for (int j = 0; j < 4; j++) {
                    if (i !=j && a[i] == randomNumStr[j]) {
                        B++;
                        break;
                    }
                }
            }
        }
        cout << A << "A" << B << "B" << endl;
        if (A == 4) {
            cout << "Correct!" << endl;
            break;
        }
    }
    return 0;
}