#include <iostream>
using namespace std;
int main() {

  int tahun;
  cin >>tahun;

  if (tahun%400 == 0){
    cout<< "tahun kabisat\n";

    }else if(tahun%100 == 0){
    cout<< "bukan tahun kabisat\n";
    
    }else if(tahun% 4 == 0){
    cout<< "tahun kabisat\n";

    }else if(tahun%400 ==1 %4 ==1){
    cout<< "bukan tahun kabisat\n";
  
    
    }
  
  return 0;
}