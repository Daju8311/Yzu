#include <iostream>
using namespace std;
enum weather{
    SUNNY = 0, CLOUDY = 1, RAINY = 2, SNOWY = 3
};
weather today=RAINY;
int main(){
const char descriptions[4][20] = {
    "今天是晴天",
    "今天是多雲",
    "今天是下雨天",
    "今天是下雪天"
};
cout<<descriptions[today];
return 0;
}