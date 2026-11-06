#include <iostream>
int gcd (int a, int b){

    int temp1,temp2,remainder=1;
    bool check= true ;

    if (a>b){
        temp1=a;
        temp2=b;
    }
    else if(a<b){
        temp1=b;
        temp2=a;
    }

    while (check){
        remainder=temp1%temp2;
        if (remainder==0){
            return temp2;
        }
        temp1=temp2;
        temp2=remainder;
        if (remainder==1){
            check=false;
        }
    }
    return 1;
    
}

int euler_totient(int n){
    int count =0;
    for (int i=1; i<n; i++){
        if(gcd(i,n)==1){
            count++;
    }
    return count;
}

int totient_sum(int n, int &depth){
    int sum=0;
    while (n!=1){
        n=euler_totient(n);
        sum=sum+n;
        depth++;

    }
    return sum;
}

// int fun(int a, int b){
//     double max;
//     int depth=0,temp1,temp2,temp3;
//     for (int k=a+1;k<b;k++){
//         temp1=
        

//     }
// }

