#include<iostream>
#include<ctime>
using namespace std;

int fibonacci(int y);


int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}
int fibonacci(int y){
    
    if(y==0)return 0;
    if(y==1) return 1;
    return fibonacci(y-1) + fibonacci(y-2);
}