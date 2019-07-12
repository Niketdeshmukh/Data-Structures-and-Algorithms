// Created on 25-06-2019 17:10:31 by necronomicon
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>
using namespace std;

#define MP make_pair
#define PB push_back
#define ARR_MAX (int)1e5 //Max array length
#define INF (int)1e9 //10^9
#define EPS 1e-9 //10^-9
#define MOD 1000000007 //10^9+7
#define PI 3.1415926535897932384626433832795
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef pair<int, int> Pii;
typedef vector<int> Vi;
typedef vector<string> Vs;
typedef vector<Pii> VPii;
typedef vector<Vi> VVi;
typedef map<int,int> Mii;
typedef set<int> Si;
typedef multimap<int,int> MMii;
typedef multiset<int> MSi;
typedef unordered_map<int,int> UMii;
typedef unordered_set<int> USi;
typedef unordered_multimap<int,int> UMMii;
typedef unordered_multiset<int> UMSi;
typedef priority_queue<int> PQi;
typedef queue<int> Qi;
typedef deque<int> DQi;

int main () {
	int t;
    cin >> t;
    while (t--){
        int n, k, arr[100000];
        cin >> n >> k;
        int SUM = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            SUM += arr[i];
        }
        sort(arr, arr+n);
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < k; i++)
        {
            sum1 += arr[i];
        }
        for (int i = n-k; i < n; i++)
        {
            sum2 += arr[i];
        }
        // cout << sum1 << ' ' << sum2 << endl;
        cout << max(abs(SUM - sum1 - sum1), abs(SUM - sum2 - sum2)) << endl;
    }
    return EXIT_SUCCESS;
}
