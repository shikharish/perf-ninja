#include <vector>

// Assume those constants never change
constexpr int N = 1000000;
constexpr int minRandom = 0;
constexpr int maxRandom = 100;

// FIXME: this data structure can be reduced in size
struct S {
#ifdef SOLUTION
  float d;
  long long l : 16;
  int i : 8;
  short s : 8;
  bool b : 1;
#else
  int i;
  long long l;
  short s;
  double d;
  bool b;
#endif

  bool operator<(const S &s) const { return this->i < s.i; }
};

// trick to get the size of S
// template <int N> class X;
// X<sizeof(S)> x;

void init(std::vector<S> &arr);
S create_entry(int first_value, int second_value);
void solution(std::vector<S> &arr);
