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
int main (){
    int n;
    cout<<"Nhap n";
    cin>>n;





int number2 =30;
if(ktSHT(number2)){
    cout<<"Day la so hoan thien";
}else{
    cout<<"day kg phai so hoan thien";
}

    
}