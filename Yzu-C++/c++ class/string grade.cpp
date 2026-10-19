#include <iostream>
using namespace std;
int main(){
    float **p;
    int n;
    int m;
    cout <<"N students:";
    cin >> n;
    cout <<"M subjects:";
    cin >> m;
    p = new float*[n];
    for(int i = 0; i < n; i++){
        p[i] = new float[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<"Enter number "<< i+1 << " student number "<< j+1 << " subject grade:";
            cin >> p[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        float a=0;
        float b=0;
        for (int j = 0; j < m; j++) {
            a += p[i][j];
            b=a/m;
        }
         cout <<"number "<<i+1<<" students average grade:"<<b<<endl;
    }
    for (int i = 0; i < m; i++) {
        float c=0;
        float d=0;
        for (int j = 0; j < n; j++) {
            c += p[j][i];
            d=c/n;
        }
        cout <<"number "<<i+1<<" subject average grade:"<<d<<endl;
    }
    delete[] p;
    return 0;
}