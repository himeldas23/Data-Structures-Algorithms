#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#if __cplusplus >= 201103L

//#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#define ll long long
#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
using namespace std;

void solve()
{


    long long n,bx,m,by,sum1=0,sum2=0;
    cin>>n>>bx;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    cin>>m>>by;
    long long b[m];
    for (long long i = 0; i < m; i++)
    {
        cin>>b[i];
    }

    long long t1=n-1;
    for (long long i = 0; i < n; i++)
    {
        sum1+=a[i]*pow(bx,t1);
        t1--;
    }
    long long t2=m-1;
    for (long long i = 0; i < m; i++)
    {
        sum2+=b[i]*pow(by,t2);
        t2--;
    }
    if(sum1==sum2)
        cout<<'=';
    else if (sum1>sum2)
    {
        cout<<'>';
    }
    else
        cout<<'<';


}

int main()
{
    int t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
