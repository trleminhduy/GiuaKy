#include <iostream>
using namespace std;
bool ktraSCP (int num){
    int sqrtNum = sqrt(num);
    return sqrtNum *sqrtNum==num;
}

bool ktraSHT (int num){
    int sum=1;
    if(int i=2;i<=sqrt(num);i++){
        if(num % i==0){
            sum +=i;
            if(i!=num/i){
                sum += num/i;
            }
        }
    }
    return sum;
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

    int number2 =30;
    if(ktraSHT(number2)){
        cout<<"Day la so hoan thien";
    }else{
        cout<<"Day khong phai la so hoan thien";
    }


}