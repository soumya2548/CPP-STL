#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string>v0;//How to declare a vector
    vector<int>v1(4);//How to assign size of a vector
    vector<int>v2(4,-1);//How to fill a vector with any number like -1
    vector<int>v3={2,4,65,2};//How to fill values in vector

    //Important operations
    v0.push_back("sAYAn");//It fills the vector with a given anything from the end only
    v0.pop_back();//It pops out any data from the end

    //iterator loop
    for(auto it:v0){
        cout<<it<<" ";
    }   
}