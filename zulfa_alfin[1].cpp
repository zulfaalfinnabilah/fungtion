#include <iostream>
using namespace std;

int jumlah (int x, int y){
    return x+y;
}

int main(){
    int a=13, b=17, c=19, d=21;
    cout<<"a + b = "<<jumlah(a,b)<<endl;
    cout<<"c + d = "<<jumlah(c,d);
}
