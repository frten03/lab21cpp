#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]){
    if(argc == 1){
        cout << "Please input numbers to find average." ;
    }
    
    else if(argc!=1){
        float sum = 0 ;
        for(int i=1;i<argc;i++){
            sum += atof(argv[i]);
        }
        cout << "---------------------------------" ;
        cout << "\nAverage of " ;
        cout << argc-1 ;
        cout << " numbers = " ;
        cout << sum/(argc-1) << "\n---------------------------------" ;
    }

}
