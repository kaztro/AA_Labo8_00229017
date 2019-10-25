#include <iostream>

using namespace std;

int main() {
    
    int start[11] = {0, 1, 2 , 3, 3, 5, 5, 6, 8, 8, 12};
    int end[11] = {6, 4, 13, 5, 8, 7, 9, 10, 11, 12, 14};
    int L[11] = {0};
    
    int temp = 0;
    
    for(int i = 0; i < sizeof(start)/sizeof(start[0]); i++) {
        for(int j = 0; j < i; j++) {
            if(end[j] < start[i] && L[i] < L[j]) {
                L[i] = L[j];
            }
        }
        L[i]++;
    }
    
    cout << L[10];
    
    return 0;
}

