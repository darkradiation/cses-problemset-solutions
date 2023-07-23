#include <bits/stdc++.h>
// For ordered_set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007
#define II(i) \
    int i;    \
    cin >> i;
#define IL(i)    \
    long long int i; \
    cin >> i;
#define O(i) cout << i;
#define OO(i) cout << i<<endl;
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define init(arr, val) memset(arr, val, sizeof(arr))
#define loop(i, a, b) for (int i = a; i < b; i++)
#define loopr(i, a, b) for (int i = a; i >= b; i--)
#define loops(i, a, b, step) for (int i = a; i < b; i += step)
#define looprs(i, a, b, step) for (int i = a; i >= b; i -= step)
#define lloop(i, a, b) for (long long int i = a; i < b; i++)
#define lloopr(i, a, b) for (long long int i = a; i >= b; i--)
#define lloops(i, a, b, step) for (long long int i = a; i < b; i += step)
#define llooprs(i, a, b, step) for (long long int i = a; i >= b; i -= step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define all(a) a.begin(), a.end()
#define ld long double
using namespace std;
const ll maxn = 1e5;
const ll inf = 1e9;
const double pi = acos(-1);

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     II(x);
//     int n = pow(2,x);
//     int E,F,T,O,e,f,t,o,a,b,c,d;
//     loop(i,0,n){

//         E=i/8;a=i%8;
//         F=a/4;b=a%4;
//         T=b/2;c=b%2;
//         O=c;
//         // O(E);O(F);O(T);OO(O);
//         e=0^E;
//         f=E^F;
//         t=F^T;
//         o=T^O;
//         O(e);O(f);O(t);OO(o);
//     }
//     return 0;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    II(x);
    //Calculating the range of numbers
    int n = pow(2,x);
    //running a loop for each number in range 0 to 2^x
    loop(i,0,n){
        //converting integer decimal value to binary
        int bin[x]={0},num=i,j=x-1;
        while(num>0){
            bin[j]=num%2;
            j--;
            num=num/2;
        }
        //converting binary to gray code
        int gray[x],temp =0;
        loop(i,0,x){
            gray[i]=temp^bin[i];
            temp=bin[i];
        }
        //printing the gray code of number
        loop(i,0,x){
            O(gray[i]);
        }
        O((endl));
    }
    
    
    return 0;
}
