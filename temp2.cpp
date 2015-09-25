#include<iostream>
using namespace std;
struct Array {
int element[100];
};

void f(struct Array arr) { arr.element[0] = 1; }

int main(void) {
    Array a;
a.element[0] = 2;
f(a);
return a.element[0];
}

