/*
A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/

code -
  #include<iostream>

int main(){
    int a ;
    std::cin >> a ;
    int x = 65;
    //numbber of rows 
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            std::cout<<char(x);x++;
        }std::cout<<"\n";
    }
 
    
    return 0 ;
}
