/* Pattern 3

	     * 
          *  * 
       *  *  * 
    *  *  *  * 
 *  *  *  *  * 
 
*/
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int k = 5;
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5;j++){
            if(j >= k){
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << "\n";
        k--;
    }
    return 0;
}
