namespace NS1 {
template <int> struct foo { operator long double() const; };
namespace NS2 {
typedef struct {
  int f;
} S;
S bar(int);
}
using namespace NS2;
template <> foo<32>::operator long double() const {
  long double t;
  *reinterpret_cast<S *>(&t) = bar(0);
  return t;
}
}
