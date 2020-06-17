#include <vector>
//https://www.hackerrank.com/challenges/between-two-sets/problem

using std::vector;
namespace Algo{
    int NWD(int a, int b){
        if(a % b != 0)
            return NWD(b, a % b);
        else
            return b;
    }
    int NWW(int a, int b){
        return (a*b)/NWD(a,b);
    }
    int NWD(const vector<int>& a){
        int temp = a[0];
        for(int i = 1; i < a.size(); ++i)
            temp = NWD(temp, a[i]);
        return temp;
    }
    int NWW(const vector<int>& a){
        int temp = a[0];
        for(int i = 1; i < a.size(); ++i)
            temp = NWW(temp, a[i]);
        return temp;
    }
};

int getTotalX(vector<int> a, vector<int> b) {
    int temp_nwd = Algo::NWD(b);
    int temp_nww = Algo::NWW(a);
    int count = 0;
    for(int i = temp_nww, j = 2; i<=temp_nwd; i=temp_nww*j,j++){
            if(temp_nwd%i==0){ count++;}
    }
    return count;
}