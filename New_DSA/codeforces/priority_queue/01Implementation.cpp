#include<iostream>
#include<vector>
using namespace std;
class priority_queue{
    vector<int>pq;
};
void insert(){
    //insert element
    int data;
    cout<<"Enter the data(-1 for exit) ";
    cin>>data;
    pq.push_back(data);
    //check priority_queue properties
    int i=pq.size()-1;
    int par=0;
    while(i>=0){
        par=(i-1)/2;
        if(arr[par]<arr[i]){
            int temp=arr[i];
            arr[i]=arr[par];
            arr[par]=temp;
        }
        i=par; 
    }

}
void remove(int key){
    
}
int main(){
    cout<<"Hello"<<endl;
    return 0;
}