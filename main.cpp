#include <iostream>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <ctime>
#include <ctime>

using namespace std;

void buble_sort(vector<int>& arr) {
    
    for (int j = 1; j < arr.size(); ++j) {                  
        for (int i = 0; i <= arr.size() - 1 - j; ++i) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}

int main() {
    unsigned start, end, final;
    srand(time(NULL));
    vector<int> arr;
    for (int i = 10; i <= 100000; i *= 10) {
        
        for (int j = 0; j < i; ++j) {
            arr.push_back(rand() % 1000);
        }
        start = clock();
        buble_sort(arr);
        end = clock();

        final = (end - start) ;
        cout << final << "\n";
        arr.clear();
    }
    
    return 0;
}