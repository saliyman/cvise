namespace NS1 {
  void foo(void) {}
} // NS1
namespace NS2 {
  using NS1::foo;
  void bar() { foo();}
} // NS2
void foo() {}
void func() {foo();}
