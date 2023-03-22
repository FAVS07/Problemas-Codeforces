#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >>n;
    int num[n];
    int donde=0;
    
    for(int i=0; i< n; i++){
        cin >>num[i];
    }
    int signo=0;
    int max=0;
    for(int i=0; i< n; i++){
        if(num[i] >= 0){
            num[i] = -(num[i])- 1;
            
        }
        if( abs(num[i]) > max){
             donde=i;
            max = abs(num[i]);
           
            
        }
    }
    if(n & 1){
        num[donde] =  -(num[donde])- 1;
    }
    
    cout << num[0];
	for(int i = 1; i < n; i ++) {
		cout << " " << num[i];
	}
	cout << endl;
	return 0;
}
