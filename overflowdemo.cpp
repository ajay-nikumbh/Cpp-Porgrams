#include <iostream>

using namespace std;

int main()
{
    //Character overflow demonstartion
    //It will follow cyclicity rule
    char x=127;
    x++;
    cout<<int(x);
    return 0;
}
