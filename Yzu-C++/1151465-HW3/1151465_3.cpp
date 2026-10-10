#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int randomNum = rand() % 100 + 1;
    while (true){
        cout <<"Guess a number between 1 and 100:";
        int a;
        cin >> a;
        if (a == randomNum) {
            cout << "Correct!";
            break;
        } else if (a < randomNum) {
            cout << "Too low!" << endl;
        } else {
            cout << "Too high!" << endl;
        }
    }
    return 0;
}