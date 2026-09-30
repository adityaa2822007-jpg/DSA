#include <iostream>
using namespace std;
int main(){
    int n[] = {4, 2, 1};
    float size = 3.0;
    int sum = 0;
    float avg;
    for(int i=0; i<size; i++)
    {
        sum = sum + n[i];
    }
    avg = sum/size;
    cout<<"Sum : "<<sum<<endl;
    cout<<" Avg : "<<avg<<endl;
    
    return 0;

}

