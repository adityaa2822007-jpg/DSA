#include <iostream>
using namespace std;

class ArrayOps{
    private:
    int arr[100];
    int n;
    
    public:
    ArrayOps(){
        n = 0;
    }
   void inputArray() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter elements:\n";
        for (int i = 0; i < n; i++) cin >> arr[i];
    }
    void traverse() {
        if (n == 0) {
            cout << "Array is empty.\n";
            return;
        }
        cout << "Array elements: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }
    void insert() {
        int pos, val;
        cout << "Enter position (0-based index) and value: ";
        cin >> pos >> val;
        if (pos < 0 || pos > n) {
            cout << "Invalid position!\n";
            return;
        }
        for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
        arr[pos] = val;
        n++;
        cout << "Insertion successful.\n";
    }
    void insert_at_end() {
        int i;
        int val;
        cout<<"value:";
        cin>>val;
        i=n;
        arr[i]=val;
        n++;
        cout<<"Insertion successful.\n";
    }
        

};
    
    int main(){
        ArrayOps ao;
        ao.inputArray();
        ao.traverse();
        ao.insert();
        ao.traverse();
        ao.insert_at_end();
        
    }
