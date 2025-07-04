#include<iostream>
using namespace std;
class DynamicArray{
  private:
      int *data;
      int nextindex;
      int capacity;
  public:
    DynamicArray(){
        data=new int[5];
        nextindex=0;
        capacity=5;
    }
    DynamicArray(DynamicArray const &d){
        int *newdata= new int[d.capacity];
        for(int i=0;i<d.nextindex;i++){
            newdata[i]=d.data[i];
        }
        this->data=newdata;
        this->nextindex=d.nextindex;
        this->capacity=d.capacity;
    }
    void operator=(DynamicArray const &d){
        int *newdata= new int[d.capacity];
        for(int i=0;i<d.nextindex;i++){
            newdata[i]=d.data[i];
        }
        this->data=newdata;
        this->nextindex=d.nextindex;
        this->capacity=d.capacity;
    }
    
    void add(int ele){
        if(nextindex==capacity)
        {
            int *newdata=new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newdata[i]=data[i];
            }
            delete[] data;
            data=newdata;
            capacity=2*capacity;
        }
        data[nextindex]=ele;
        nextindex++;
    }
    int get(int i){
        if(i<nextindex)
        return data[i];
        else
        return -1;
    }
    void add(int i,int ele){
        if(i<nextindex)
        data[i]=ele;
        else if(i==nextindex)
        add(ele);
        else
        return ;
    }
    
    void print(){
        for(int i=0;i<nextindex;i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;  
    }
    
    
  
  
};
int main(){
   DynamicArray d1;
   d1.add(10);
   d1.add(20);
   d1.add(30);
   d1.add(40);
   DynamicArray d2(d1);
   d1.add(60);
   d1.print();
   DynamicArray d3=d1;
   d2.print();
   d3.print();
    
}