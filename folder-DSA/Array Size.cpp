#include <iostream>
using namespace std;
int main()
{
    int a[] = {5, 6, 3};
    int size = sizeof(a)/sizeof(a[0]);
    
    cout<<"size : "<<size<<endl;
    return 0;
}
