#include <iostream>









bool ktSHT (int num){
    int sum =1;
    if (int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            sum +=i;
            if(i!=num/i){
                sum += num /i;
            }
        }
    }
    return sum;
}


using namespace std;
bool ktraSCP (int num){
    int sqrtNum = sqrt(num);
    return sqrtNum *sqrtNum==num;
}

int main (){
    int n;
    cout<<"Nhap n";
    cin>>n;


}