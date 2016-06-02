#include <iostream>
#include <stdlib.h>

using namespace std;

// 输入一个整数，并按照各进制进行输出；
// 输入一个布尔值（0或1），以布尔类型方式进行输出；

int main(void) {
    cout << "请输入一个整数：" << endl; 
    int x = 0;
    cin >> x;
    cout << oct << x << endl; //八进制，不带前缀0
    cout << dec << x << endl; //十进制, 默认进制，不用dec也可以
    cout << hex << x << endl; //十六进制，不带前缀0x

    cout << "请输入一个布尔值（0或1）：" << endl; 
    bool y = false;
    cin >> y;
    cout << boolalpha << y << endl; //true or false
    return 0;
}

