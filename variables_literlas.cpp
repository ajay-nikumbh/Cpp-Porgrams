#include <iostream>

using namespace std;

int main()
{
    // Variables and literals

    //Character literals
    char a='A';
    char b=65;
    char c=041;//octal literal
    char d=0x41;//hexadecimal literal
    char e=12.5;//Yes its valid but will not show any op
    char f=65.5;//Yes its valid cohersion will take place internally and A will be displayed
    cout <<a;
    cout <<b;
    cout <<c;
    cout <<d;
    cout <<e;
    cout <<f;

    //Integer Literals
    int aa=10; //op =10
    int ab=010; //Octal no 8 as a output
    int ac=0x10; //Hexadecimal no 16 as a output
    int ad(10);
    int ae={10};
    int af{10};
    cout <<aa;
    cout <<ab;
    cout <<ac;
    cout <<ad;
    cout <<ae;
    cout <<af;

    //Float literals
    float f1=125.36;
    float f2=123e2;
    float f3=123e-2;
    cout <<f1;
    cout <<f2;
    cout <<f3;

    //String
    string e1="Hello";
    cout <<e1;

    return 0;
}
