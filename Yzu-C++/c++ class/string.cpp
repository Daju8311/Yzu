#include <iostream>
using namespace std;
int a[2][3] = {
    {3, 1, 2},
    {2, 0, 1}
};
int b[3][4] = {
    {1, 0, 1, 2},
    {1, 2, 0, 1},
    {0, 1, 1, 0}
};
int main() {
    int c[2][4]={0};
    for(int i = 0; i < 2; i++){
        for(int j =0; j<4; j++){
            for(int k = 0; k<3; k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j =0; j<4; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    int w, x, y, z;
    cout << "enter w, x, y, z: "<<endl;
    cout << "w=";
    cin >> w;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << "z=";
    cin >> z;
    int d[4][1]={
        {w},
        {x},
        {y},
        {z}
    };
    int e[2][1]={0};
    for(int i = 0; i < 2; i++){
        for(int j =0; j<1; j++){
            for(int k = 0; k<4; k++){
                e[i][j]+=c[i][k]*d[k][j];
            }
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j =0; j<1; j++){
            cout << e[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}