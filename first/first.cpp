#include <iostream>
#include <math.h>

long int double_fact(int chislo){
    long int fact=1;
    if (chislo%2==0){
        for (int i=2; i<=chislo; i=i+2){
            fact=fact*i;
        }
    }
    else{
        for (int i=1; i<=chislo; i=i+2){
            fact=fact*i;
        }
    }
    return fact;
}

int main(){
    double t, y, sum1=0, sum2=0;
    std::cin>>y;

    //вычисление t
    for(int k=0; k<=10; k++){
        sum1+=(pow(y, 2*k+1))/(double_fact(2*k+1));
    }
    for(int k=0; k<=10; k++){
        sum2+=(pow(y, 2*k))/(double_fact(2*k));
    }

    t=sum1/sum2;

    //вывод ответа
    std::cout<<(1.7*t*(0.25)+2*t*(1+y))/(6-t*(pow(y, 2)-1))<<std::endl;

    return 0;
}
