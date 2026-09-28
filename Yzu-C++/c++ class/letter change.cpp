#include <iostream>
using namespace std;
int main()
{
char ch;
cout << "請輸入一個句子，以句點作為結尾，輸出為每一個字的ASCII編碼 \n";
cin.get(ch);
while (ch != '.')
{
    if(ch ==' '){
        cout<<" ";}
       else if(ch=='\n'){
        cout<<endl;
       }
        else{
            cout << int(ch) << " ";
        }
cin.get(ch);}
return 0;
}