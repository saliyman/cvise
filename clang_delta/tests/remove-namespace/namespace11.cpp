namespace NS1 {
  void foo() {}
  void fiz() {}
} // NS1
namespace NS2 {
  using namespace NS1;
  int bar() { foo(); }
} // NS2
void fiz() {}
void f() { fiz(); }
