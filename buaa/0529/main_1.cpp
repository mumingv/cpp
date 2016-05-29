#include <iostream>

using namespace std;

// 无效
void swap1(int i, int j) {
    int temp;
    temp = i;
    i = j;
    j = temp;
}

// 有效
void swap2(int *i, int *j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

// 有效
void swap3(int &i, int &j) {
    int temp;
    temp = i;
    i = j;
    j = temp;
}

// 无效
void swap4(int *i, int *j) {
    int *temp;
    temp = i;
    i = j;
    j = temp;
}

int main(int argc, char *argv[]) {
    char *ptr;
    cout << "test" << endl;

    int a = 3;
    int b = 5;
    swap1(a, b);
    cout << "sawp1: " << "a = " << a << ", " << "b = " << b << endl;

    a = 3;
    b = 5;
    swap2(&a, &b);
    cout << "sawp2: " << "a = " << a << ", " << "b = " << b << endl;

    a = 3;
    b = 5;
    swap3(a, b);
    cout << "sawp3: " << "a = " << a << ", " << "b = " << b << endl;

    a = 3;
    b = 5;
    swap4(&a, &b);
    cout << "sawp4: " << "a = " << a << ", " << "b = " << b << endl;

}














