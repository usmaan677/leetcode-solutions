#include <vector>
using namespace std;


/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

vector<int> reverseArray(vector<int> a) {
    vector<int> res (a.size());
    for(int i=0;i<a.size();i++){
        res[i] = a[a.size()-1-i];
    }
    return res;
}
