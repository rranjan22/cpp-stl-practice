#include<bits/stdc++.h>
using namespace std;
// pair is class that stores two values of same or different data types
//pair<data type1, data type2> pair_name;
int main(){
    pair<int, string>p1;
    p1.first = 1;
    p1.second = "one";
    //we can also make pair of different containers
    pair<int, vector<int>>p2;
    p2.first = 2;   
    p2.second.push_back(1);
    p2.second.push_back(2);
    p2.second.push_back(3);
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " ";
    for (int i = 0; i < p2.second.size(); ++i) {
        cout << p2.second[i] << " ";
    }
    pair<int, string>p3;
    p3 = make_pair(3, "three");

    pair<int, string> p4 = make_pair(4, "four");

    pair<int, string> p5(5, "five");

    pair<int, string> p6;
    p6 = {6, "six"};

    pair<int, string> p7 = p6;
    p7.first = 7;
    // p6.first will still be 6 because p7 is a copy of p6. but if we write pair<int, string> &p7 = p6. then p7 will be a reference to p6 and any change in p7 will reflect in p6 as well.

    pair<int, int> p_array[3];
    //normally we define array like int arr[3];
    //int is the data type written before the array name and 3 is the size of the array. similarly, we can define an array of pairs like pair<int, int> p_array[3]; here pair<int, int> is the data type and p_array is the name of the array and 3 is the size of the array. we can also initialize the array of pairs like this:
    p_array[0] = {1, 2};
    p_array[1] = {3, 4};
    p_array[2] = {5, 6};
    for(int i = 0; i < 3; i++){
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    //we can also swap
    swap(p_array[0], p_array[2]);
    //generally we don't use array of pair. 
    //we use vector of pair.
    //vector<pair<int, int>> vp;
    //vp.push_back({1, 3});
    //vp.push_back({2, 4});

    pair<int, int> pp;
    cin >> pp.first >> pp.second;
    cout << "The sum of " << pp.first << " and " << pp.second << " is " << pp.first + pp.second << endl;

    //----------------------------------

    //vectors are similar to array. both are continuous memory block. vector are array of dynamic size. in array we do int array[10], means we declared an array of size 10. bur vector<dat_type> v, the size of vector can change. current vecotr size is 0 cuz we have no element here now. but arrays reserve memeory of 10 elements. arrays are of fixed size and we cannot change it.
    vector<int> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x); //O(1) t.c add in the last (right) of the vector
    }
    for (int i = 0; i < v.size(); i++){
        //v.size() O(1) T.C
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int> vec(5); //vector of size 5 and all elements are 0
    vector<int> vec1(2,6); //vector of size 2 and all elements are 6
    //but we can also add more elements even if the size exceeds the initial size.

    vec.pop_back(); //O(1) T.C removes the last element of the vector

    vector<int> v1 = vec; //copy of vec in v1. any change in v1 will not affect vec and vice versa. but if we write vector<int> &v1 = vec; then v1 will be a reference to vec and any change in v1 will reflect in vec as well.
    //tc = O(n) because we have to copy all the elements of vec to v1.
    //but if we write vector<int> &v1 = vec; then tc will be O(1) because we are just creating a reference to vec and not copying the elements. so when you want to use the vector without modifying it, you can use refrence to avoid unnecessary copying and improve performance. but if you want to modify the vector, then you should use a copy of the vector to avoid unintended side effects on the original vector.

    //LECTURE 1 -> DIDN'T MADE BECUASE THE TEACHER JUST GAVE A OVERVIEW SO NOT NEEDED
    
    //LECTURE 2 COMPLETED
}         



