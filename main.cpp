#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> numbers(2);
    for (int i = 0; i < 2; ++i) {
        cin >> numbers[i];
    }
    cout << "The sum of " << numbers[0] << " and " << numbers[1] << " is " << numbers[0] + numbers[1] << endl;
    return 0;
}

