#include <iostream>
using namespace std;
bool ktraSCP (int num){
    int sqrtNum = sqrt(num);
    return sqrtNum *sqrtNum==num;
}
int main (){
    int n;
    cout<<"Nhap n";
    cin>>n;
 int number1 =20;
    if(ktraSCP(number1)){
        cout<<"Day la so chinh phuong";
    }else{
        cout<<"Day kh phai";
    }
    
}