/* Pattern 5

 *  *  *  *  *  *  *  *  * 
    *  *  *  *  *  *  *    
       *  *  *  *  *       
          *  *  *          
             *             

*/

#include <iostream>
using namespace std;
int main() {
    int n = 5,k = 5;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<i;j++){
            cout << "   ";
        }
        for(int j = 2*k-1;j>0;j--){
            cout << " * ";
        }
        for(int j = 0;j<i;j++){
            cout << "   ";
        }
        cout << "\n";
        k--;
    }
    return 0;
}
