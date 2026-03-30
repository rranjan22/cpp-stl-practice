#include<bits/stdc++.h>
using namespace std;
int main(){
    //there are two types of map in c++ -> map (i.e. normal map, it is ordered map)  and unordered map
    //map stores key value pair and it is implemented using balanced binary search tree (i.e. red black tree) and it is ordered map because it stores the key value pair in sorted order of keys
    //unordered map is implemented using hash table and it is not ordered map because it does not store the key value pair in sorted order of keys
    //map and unordered map both are associative containers because they store key value pair and we can access the value using the key
    //map and unordered map both are dynamic containers because they can grow and shrink in size dynamically
    //each element in map is a pair of key & value and the key is unique in the map but the value can be duplicate
    map<int, string> mpp; 
    //insertion operation in normal or ordered map is O(log n), here n is the map's current size. even if you just write mpp[6]; it  will insert the key 6 with default value "" in the map and it will take O(log n) time.
    //and suppose you take map<int, int> mpp; then mpp[5]; it  will insert the key 5 with default value 0 in the map and it will take O(log n) time. so the default will be 0 for the datatype : int, float, double etc.
    mpp[1] = "one";
    mpp[2] = "two";
    mpp[3] = "three";
    mpp[3] = "THREE"; //if we insert the same key again then it will update the value of that key
    mpp.insert({4, "four"});

    for(auto it : mpp){
        cout << it.first << ' ' << it.second << endl;
    }

    for( auto it = mpp.begin(); it != mpp.end(); it++){
        cout << it->first << ' ' << it->second << endl;
        //cout << (*it).first << ' ' << (*it).second << endl;
    }

    //mpp.size()

    cout << mpp[4] << endl; // the retriving time complexity of normal or ordered map is also O(log n)

    auto it = mpp.find(2); // it returns an iterator pointing to the element with key 2 and if there is no element with key 2 then it returns an iterator pointing to the next element of the last element of the map. so we can check if the key is present in the map or not by checking if the iterator returned by find() is equal to mpp.end() or not. if it is equal to mpp.end() then the key is not present in the map otherwise it is present in the map. Time complexity of find() function in normal or ordered map is O(log n)
    if(it != mpp.end()){
        cout << "key found : ";
        cout << it->first << ' ' << it->second << endl;
    }
    else{
        cout << "key not found" << endl;
    }

    cout << mpp[9] << endl; // if we try to access the value of a key which is not present in the map then it will insert that key with default value and return the default value. so in this case it will insert the key 9 with default value "" and return "". if mpp<int, int> mpp then it will return 0.

    cout << mpp.count(2) << endl; // it returns 1 if the key is present in the map and 0 if the key is not present in the map. time complexity of count() function in normal or ordered map is O(log n)

    mpp.erase(2); //it takes two types of arguments -> mpp.erase(key) and mpp.erase(iterator). time complexity of erase() function in normal or ordered map is O(log n) for both types of arguments. if we use mpp.erase(key) then it will erase the element with the given key from the map and if we use mpp.erase(iterator) then it will erase the element pointed by the given iterator from the map.
    //giving iterattor as an argument.
    auto x = mpp.find(3);
    if(x != mpp.end()){
        mpp.erase(x);
    }
    for(auto it : mpp){
        cout << it.first << ' ' << it.second << endl;
    }

    //mpp.clear(); it will erase all the elements and the size becomes 0   

    //Given N strings, print unique strings in lexicographical order with their frequency.
    int n;
    cout << "enter the number of strings : ";
    cin>> n;
    map<string, int> mp; //
    for(int i = 0; i < n; i++){
        string s;
        cout << "enter the string : ";
        cin >> s;
        mp[s]++;
    }
    for(auto it : mp){
        cout << it.first << ' ' << it.second << endl;
    }

    //LECTURE 6 DONE
    

}