#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int num[] = {13, 67, 54, 0, -6, 3};
    int size=6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int i=0; i<size; i++)
    {
       smallest=min(num[i], smallest);
       largest=max(num[i], largest);
        
    }
    cout<<"Smallest = "<<smallest<<endl;
    cout<<"Largest = "<<largest<<endl;
    

    return 0;
}
