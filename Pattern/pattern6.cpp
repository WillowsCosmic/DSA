/* Pattern 6

             *             
          *  *  *          
       *  *  *  *  *       
    *  *  *  *  *  *  *    
 *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  * 
    *  *  *  *  *  *  *    
       *  *  *  *  *       
          *  *  *          
             *             

*/
#include <iostream>
using namespace std;
int main() {
    int n = 5,l = 5;
        //Upward
        for(int j = 0;j < n;j++){
            for(int k = 0;k<n-j-1;k++){
                cout << "   ";
            }
            for(int k = 0;k<2*j+1;k++){
                cout << " * ";
            }
            for(int k = 0;k<n-j-1;k++){
                cout << "   ";
            }
            cout << "\n";
        }
        //Downward
        for(int j = 0;j < n;j++){
            for(int k = 0;k<j;k++){
                cout << "   ";
            }
            for(int k = 2*l-1;k>0;k--){
                cout << " * ";
            }
            for(int k = 0;k<j;k++){
                cout << "   ";
            }
            cout << "\n";
            l--;
        }
    return 0;
}
