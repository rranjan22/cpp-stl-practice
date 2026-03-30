#include<bits/stdc++.h>
using namespace std;
void print(set<string> &st){
    for(auto str : st){
        cout << str << " ";
    }
    cout << endl;


    for(auto it = st.begin(); it != st.end(); it++){
        cout << (*it) << " "; 
    }
    cout << endl;
}
int main(){
    set<string> st; //it stores unique elements in sorted oreder. it is implemented using balanced binary search tree(i.e. red black tree). time complexity of insertion, deletion and searching in set is O(log n) where n is the current size of the set.
    st.insert("jkl");
    st.insert("abc");
    st.insert("ghi");
    st.insert("def");
    st.insert("abc"); //if we insert the same element again then it will not be inserted in the set because set stores unique elements only. 
    //to find an element we use .find() function. it returns and iterator pointing to the element. if it is not there then it will return .end() iterator. time complexity of find() is O(log n)

    print(st);

    auto x = st.find("def");
    if( x != st.end()){
        st.erase(x);
    }
    st.erase("abc"); // takes two types of argument -> st.erase(key) and st.erase(iterator). time complexity of erase() function is set is O(log n) for both types of arguments. if we use at.erase(key) then it will erase the element with the given key from the set and if we use st.erase(iterator) then it will erase the element pointed by the given iterator from the set.
    print(st);

    //--------------------------
    
    unordered_set<string> ust; // it stores unique elements but it does not store in sorted order. it is implemented using hash table. time complexity of insertion, deletion and searching in unordered set is O(1) on average case and O(n) in worst case, here n is the current size of the unordered set.
    //data type restrication are same as that of unordered map

    //---------------------------

    multiset<string> mst;
    // it is mostly like set. it is implemented using balanced binary search tree (red black tree). the difference is that in set the element is unique but in multiset the element can be duplicate. so in multiset we can have multiple same elements. and the elements are stored in sorted order in multiset. so it is an ordered set. time complexity of insertion, deletion and searching in multiset is O(log n) where n is the current size of the multiset.
    
    //if there are two same elements. mst.find("abc") -> it will return the iterator of the first one. and if you want tou can erase it.
    //if you want to erase all the occurance of "abc" them just do .erase("abc"). the overal time complexity = O(log n)
    //when we put value in erase, it internally find the iterator and then deletes if it is there 

    

    //LECTURE 8 DONE
}