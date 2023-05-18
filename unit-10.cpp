#include<iostream>
#include <iostream>
#include <array>
using std::cout;
using std::endl;
using std::array;

template<class T>

class Array{
private:
    int len;
    T* a;
public:
    Array(T* a,int len){
        this->a = a;
        this->len = len;
    }
    T sum(){
        T num=0;
        for(int i=0;i<len;i++){
            num+=a[i];
        }
        return num;
    }
    T* reverse(){
        
        for(int i=0;i<len/2;i++){
            int t = a[len-i-1];
            a[len-i-1] = a[i];
            a[i] = t;
        }
        return a;
    }
    int seek(T key){
       for(int i=0;i<len;i++){
            if(a[i]== key){
                return i;
            }
       }
       return -1;
    }
    void print(){
        for(int i=0;i<len;i++){
            cout << a[i] << " ";
        }
        cout<<endl;
    }

};

int main(){
    array<int,5>a = {1,2,3,4,5};
    Array<int> arr(a.data(), a.size());
    arr.print();
    
    cout << "sum : " << arr.sum() << endl;
    
    array<int,5>b;
    arr.reverse();
    arr.print();

    cout<<"arr.seek(3)"<<arr.seek(3)<<endl;
    cout<<"arr.seek(6)"<<arr.seek(6)<<endl;
    return 0;
}