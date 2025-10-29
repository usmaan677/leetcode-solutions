#include <vector>
using namespace std;

/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

vector<int> rotateLeft(int d, vector<int> arr) {
   int n = arr.size();
   vector <int> res(n);
   
   for(int i=0;i<n;i++){
    int newPos = (i-d+n)%n;
    res[newPos] = arr[i];
   }
   return res;
   
}
