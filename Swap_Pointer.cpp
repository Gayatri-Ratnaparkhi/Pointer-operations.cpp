//gayatri ratnaparkhi 23070123169

#include <iostream>

using namespace std;

    void swap(int *x,int *y){
    	
        int temp;
        
        temp = *x;
        
        *x = *y;
        
        *y = temp;
        
    }
    
    int main(){
    	
        int a=10,b=20;
        
        swap(a,b);
        
        cout<<"a = "<<a<<endl;
        
        cout<<"b = "<<b<<endl;
        
    }
