  #include<bits/stdc++.h>
using namespace std;
int main(){
    //unordered map is implemented using hash table and it is not ordered map because it does not store the key value pair in sorted order of keys
    //unordered map stores key value pair and it is implemented using hash table and it is not ordered map because it does not store the key value pair in sorted order of keys
    //unordered map is also an associative container because it stores key value pair and we can access the value using the key
    //unordered map is also a dynamic container because it can grow and shrink in size dynamically 
    //each element in unordered map is a pair of key & value and the key is unique in the unordered map but the value can be duplicate
    unordered_map<int, string> umpp; 
    //insertion operation in unordered map is O(1) on average case and O(n) in worst case, here n is the unordered map's current size. even if you just write umpp[6]; it  will insert the key 6 with default value "" in the unordered map and it will take O(1) time on average case and O(n) time in worst case.
    //and suppose you take unordered_map<int, int> umpp; then umpp[5]; it  will insert the key 5 with default value 0 in the unordered map and it will take O(1) time on average case and O(n) time in worst case. so the default will be 0 for the datatype : int, float, double etc.
    umpp[1] = "one";
    umpp[2] = "two";
    umpp[3] = "three";
    umpp[3] = "THREE"; //if we insert the same key again then it will update the value of that key
    umpp.insert({4, "four"});

    for(auto it : umpp){
        cout << it.first << ' ' << it.second << endl;
    }

    for( auto it = umpp.begin(); it != umpp.end(); it++){
        cout << it->first << ' ' << it->second << endl;
        //cout << (*it).first << ' ' << (*it).second << endl;
    }

    //umpp.size()

    cout << umpp[4] << endl; // the retriving time complexity of unordered map is also O(1) on average case and O(n) in worst case

    //Valid key data types for unordered map are : int, float, double, char, string etc. but we cannot use pair as a key in unordered map because it does not have a hash function defined for it. if we want to use pair as a key in unordered map then we have to define our own hash function for it. 
    //give a complete list of what data type cannot be used as a key in unordered map . so they are : pair, vector, list, set, map, unordered_map, unordered_set etc. any data type which does not have a hash function defined for it cannot be used as a key in unordered map. but we can use any data type as a value in unordered map because there is no restriction on the value data type in unordered map.

    //----------------------------------------

     multimap<int, string> mpp;
     // it is mostly like map. it is implemented using balanced binary search tree (red black tree). the difference is that in map the key is unique but in multimap the key can be duplicate. so in multimap we can have multiple key value pair with the same key but different values. and the key value pairs are stored in sorted order of keys in multimap. so it is an ordered map. time complexity of insertion, deletion and searching in multimap is O(log n) where n is the current size of the multimap.
     //YOU NEVER USE MULTIMAP IN REAL LIFE ALSO NOT IN COMPETITIVE PROGRAMMNG


     //LECTURE 7 DONE

}