#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    
    for (int h = 0; h < a+1; h++) {
        
        
        for (int i = 0; i < a - h; i++) {
            cout << " ";
        }
        
        
        for (int k = 0; k < h; k++) {
            cout << "#";
        }

        
        cout << "  ";

        
        for (int k = 0; k < h; k++) {
            cout << "#";
        }
        
        
        cout << endl;
    }
    
    return 0;
}