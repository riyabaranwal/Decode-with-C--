#include<iostream>
#include<vector>
#include<unordered_set>
#include<queue>
using namespace std;
    int findCenter(vector<vector<int>>& edge) {
        int a = edge[0][0];
        int b = edge[0][1];
        int c = edge[1][0];
        int d = edge[1][1];
        return (c == a || c== b) ? c : d;
    }
