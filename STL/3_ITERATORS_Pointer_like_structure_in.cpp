#include<bits/stdc++.h>
using namespace std;
//iterators are pointer like structure which points to the memory location of the element in the container
//iterators are used to traverse the container and access the elements of the container
//iterators are also used to traverse the container where there is no index accessing 
//to have value of an element in the container we can use * operator on the iterator
//to move the iterator to the next element we can use ++ operator on the iterator
int main(){
    vector<int> v = {1,2,3,4,5};
    //v.begin() returns an iterator pointing to the first element of the vectoe
    //v.end() returns an iterator pointing to the next element of the last element of the vector
    //we can use v.begin() and v.end() to traverse the vector
    //auto -> it is a keyword which is used to declare an iterator without specifying the type of the iterator
    for(auto it = v.begin(); it != v.end(); it++){
        cout <<  *it << ' ';
    }

    //difference between it + 1 and it++ and ++ it
    //it + 1 returns an iterator pointing to the next element of the current element but it does not change the value of it
    //it++ returns the current element and then moves the iterator to the next element
    //++it moves the iterator to the next element and then returns the current element
     auto it = v.begin();
     cout << *it << ' '; // it points to 1
     cout << *it++ << ' '; // it points to 1 but after this line it will point to 2
     cout << *it << ' '; // it points to 2
     cout << *++it << ' '; // it points to 3 but after this line it will point to 4 
    cout << endl;
    //we can also do - > 
    for( auto num : v){
        //it is not an iterator but it is a copy of the element in the vector
        cout << num << ' '; //num is a copy of the element in the vector and it is not an iterator but it is a value of the element in the vector. so if we change the value of num it will not change the value of the element in the vector but if we write for(auto &num : v) then num will be a reference to the element in the vector and any change in num will reflect in the vector as well.
    }
    cout << endl;

    //in case of pairs
    vector<pair<int, int>> vp = {{1, 2}, {3, 4}, {5, 6}};
    for(auto it = vp.begin(); it != vp.end(); it++){
        cout << it->first << ' ' << it->second << endl;
        //(*it).first <=> it->first , we can use both but it->first is easy to write and read
    }

    //LECTURE 4 AND 5 COMPLETED


}