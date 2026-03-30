#include<bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int, int>> &v){
    cout << "the size of vector is : " << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << ' ' << v[i].second << endl;
    }
}
void printVector1(vector<int> &v){
    cout << "the size of vector is : " << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}

int main(){
    vector<pair<int, int>>  p = {{1, 2}, {3, 4}, {5, 6}};
    p.push_back({7, 8});
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    p.push_back({a, b});
    printVector(p);

    //array of vectors
    vector<int> arr[3];
    for(int i = 0; i < 3; i ++){
        int n;
        cout<<"Enter the number of elements for vector of index i : " << i << endl;
        cin >> n;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            //arr[i] is a vector
            arr[i].push_back(x);
        }
    }
    for(int K = 0; K < 3; K++){
        printVector1(arr[K]);
    }

    //vector of vectors
    vector<vector<int>> v;
    int n;
    cout << "Enter the number of vectors: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int m;
        cout << "Enter the number of elements for vector of index i : " << i << endl;
        cin >> m;
        vector<int> level;
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            level.push_back(x);
        }
        v.push_back(level);
    }

    //cout << v[1][0]; //accessing the first element of the second vector

    v.push_back(vector<int> ()); //pushing an empty vector at the end of the vector of vectors
    v[v.size() - 1].push_back(10); //pushing an element in the empty vector at the last index
    v.push_back({1, 2, 3}); //pushing a vector with elements 1, 2 and 3 at the end of the vector of vectors
    v.push_back(vector<int> (5, 0)); //pushing a vector with 5 elements all initialized to 0 at the end of the vector of vectors

    //LECTURE 3 COMPLETED
}

